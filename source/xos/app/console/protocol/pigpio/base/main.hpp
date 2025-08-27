//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2025 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 5/12/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_HPP

#include "xos/platform/os/raspberrypi/raspberrypios/pigpio.hpp"
#include "xos/app/console/protocol/pigpio/base/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace pigpio {
namespace base {

/// class maint
template 
<class TExtends = xos::app::console::protocol::pigpio::base::main_optt<>,  class TImplements = typename TExtends::implements>

class maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    typedef typename extends::sequence_char_t sequence_char_t;
    typedef typename extends::char_sequence_t char_sequence_t;
    typedef typename extends::char_seeker_t char_seeker_t;
    typedef typename extends::char_reader_t char_reader_t;
    typedef typename extends::char_writer_t char_writer_t;
    typedef typename extends::reader_string_t reader_string_t;
    typedef typename extends::string_reader_t string_reader_t;

    /// constructor / destructor
    maint()
    : run_(0), 
      
      system_restart_request_("{\"pigpio\":{\"system\":{\"system_action\":{\"action\":\"restart\"}}}}"),
      system_start_request_("{\"pigpio\":{\"system\":{\"system_action\":{\"action\":\"start\"}}}}"),
      system_stop_request_("{\"pigpio\":{\"system\":{\"system_action\":{\"action\":\"stop\"}}}}"),
      
      system_restart_response_("{\"pigpio\":{\"system\":\"restart\"}}"),
      system_start_response_("{\"pigpio\":{\"system\":\"start\"}}"),
      system_stop_response_("{\"pigpio\":{\"system\":\"stop\"}}"),

      invalid_request_("{\"pigpio\":{\"request\":\"invalid\"}}"), 
      invalid_response_(invalid_request_),
      
      unknown_request_("{\"pigpio\":{\"request\":\"unknown\"}}"), 
      unknown_response_(unknown_request_),
    
      request_(unknown_request_),
      response_(unknown_response_), 
      
      begin_gpioWrite_request_("{\"pigpio\":{\"gpioWrite\":[{\"gpio\":\""), 
      middle_gpioWrite_request_("\"},{\"level\":\""), 
      end_gpioWrite_request_("\"}]}}"),
      
      begin_gpioRead_request_("{\"pigpio\":{\"gpioRead\":[{\"gpio\":\""), 
      middle_gpioRead_request_(""), 
      end_gpioRead_request_("\"}]}}"),

      begin_gpioLevel_response_("{\"pigpio\":{\"gpioLevel\":[{\"gpio\":\""),
      middle_gpioLevel_response_("\"},{\"level\":\""),
      end_gpioLevel_response_("\"}]}}"),

      read_gpio_(22), write_gpio_(17),
      gpio_level_on_(1), gpio_level_off_(0), gpio_level_unknown_(-1),
      read_gpio_level_(gpio_level_unknown_), write_gpio_level_(gpio_level_on_),
      read_gpio_mode_(PI_INPUT), write_gpio_mode_(PI_OUTPUT) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    //////////////////////////////////////////////////////////////////////////
    /// run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            LOGGER_IS_LOGGED_INFO("(!(err = (this->*run_)(argc, argv, env)))...");
            if (!(err = (this->*run_)(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = (this->*run_)(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = (this->*run_)(argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("(!(err = extends::run(argc, argv, env)))...");
            if (!(err = extends::run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(err" << err << " = extends::run(argc, argv, env)))");
            }
        }
        return err;
    }

    //////////////////////////////////////////////////////////////////////////
    /// ...gpio_initialize_run
    virtual int gpio_initialize_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...gpio_finalize_run
    virtual int gpio_finalize_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_gpio_request_run
    virtual int before_prepare_response_to_gpio_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = gpio_initialize_run(argc, argv, env)))...");
        if (!(err = gpio_initialize_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = gpio_initialize_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on(!(" << err << " = gpio_initialize_run(argc, argv, env)))");
        }
        return err;
    }
    virtual int after_prepare_response_to_gpio_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = gpio_finalize_run(argc, argv, env)))...");
        if (!(err = gpio_finalize_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = gpio_finalize_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on(!(" << err << " = gpio_finalize_run(argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_gpioRead_request_run
    virtual int prepare_response_to_gpioRead_request_run
    (string_t& response, const string_t& request, const int& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("response.assign(\"" << request << "\")...");
        response.assign(request);
        return err;
    }
    virtual int before_prepare_response_to_gpioRead_request_run(string_t& response, const string_t& request, const int& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))...");
        if (!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        }
        return err;
    }
    virtual int after_prepare_response_to_gpioRead_request_run(string_t& response, const string_t& request, const int& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))...");
        if (!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        }
        return err;
    }
    virtual int all_prepare_response_to_gpioRead_request_run(string_t& response, const string_t& request, const int& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_gpioRead_request_run(response, request, gpio, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_gpioRead_request_run(response, request, gpio, argc, argv, env);
            if ((err2 = after_prepare_response_to_gpioRead_request_run(response, request, gpio, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_gpioWrite_request_run
    virtual int prepare_response_to_gpioWrite_request_run
    (string_t& response, const string_t& request, const int& gpio, const int& level, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("response.assign(\"" << request << "\")...");
        response.assign(request);
        return err;
    }
    virtual int before_prepare_response_to_gpioWrite_request_run(string_t& response, const string_t& request, const int& gpio, const int& level, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))...");
        if (!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        }
        return err;
    }
    virtual int after_prepare_response_to_gpioWrite_request_run(string_t& response, const string_t& request, const int& gpio, const int& level, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))...");
        if (!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        }
        return err;
    }
    virtual int all_prepare_response_to_gpioWrite_request_run(string_t& response, const string_t& request, const int& gpio, const int& level, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_gpioWrite_request_run(response, request, gpio, level, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_gpioWrite_request_run(response, request, gpio, level, argc, argv, env);
            if ((err2 = after_prepare_response_to_gpioWrite_request_run(response, request, gpio, level, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_unknown_request_run
    virtual int default_prepare_response_to_unknown_request_run
    (string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        const string_t& unknown_response = this->unknown_response();

        LOGGER_IS_LOGGED_INFO("((chars = request.has_chars(length)))...");
        if ((chars = request.has_chars(length))) {
            LOGGER_IS_LOGGED_INFO("...((chars = request.has_chars(" << length << ")))");

            const string_t& begin_gpioRead_request = this->begin_gpioRead_request(),
                            middle_gpioRead_request = this->middle_gpioRead_request(),
                            end_gpioRead_request = this->end_gpioRead_request();
            size_t begin_gpioRead_request_length = 0,
                   middle_gpioRead_request_length = 0,
                   end_gpioRead_request_length = 0,
                   gpioRead_request_length = 0;

            const string_t& begin_gpioWrite_request = this->begin_gpioWrite_request(),
                            middle_gpioWrite_request = this->middle_gpioWrite_request(),
                            end_gpioWrite_request = this->end_gpioWrite_request();
            size_t begin_gpioWrite_request_length = 0,
                   middle_gpioWrite_request_length = 0,
                   end_gpioWrite_request_length = 0,
                   gpioWrite_request_length = 0;

            gpioRead_request_length = (begin_gpioRead_request_length = begin_gpioRead_request.length());
            gpioRead_request_length += (middle_gpioRead_request_length = middle_gpioRead_request.length());
            gpioRead_request_length += (end_gpioRead_request_length = end_gpioRead_request.length());

            LOGGER_IS_LOGGED_INFO("((gpioRead_request_length = " << gpioRead_request_length << " < (" << length << ")))...");
            if ((gpioRead_request_length < (length))) {
                size_t compare_length = begin_gpioRead_request_length;
                const char_t* compare_chars = chars;
                string_t compare(compare_chars, compare_length);

                LOGGER_IS_LOGGED_INFO("...((gpioRead_request_length = " << gpioRead_request_length << " < (" << length << ")))");
                LOGGER_IS_LOGGED_INFO("(!(begin_gpioRead_request.compare(\"" << compare << "\")))...");
                if (!(begin_gpioRead_request.compare(compare))) {
                    LOGGER_IS_LOGGED_INFO("...(!(begin_gpioRead_request.compare(\"" << compare << "\")))");

                    LOGGER_IS_LOGGED_INFO("compare_chars = ((\"" << chars << "\" + " << length << ") - " << end_gpioRead_request_length << ")...");
                    compare_chars = ((chars + length) - end_gpioRead_request_length);
                    LOGGER_IS_LOGGED_INFO("...compare_chars = \"" << compare_chars << "\" = ((\"" << chars << "\" + " << length << ") - " << end_gpioRead_request_length << ")...");
                    LOGGER_IS_LOGGED_INFO("compare.assign(\"" << compare_chars << "\", " << end_gpioRead_request_length << ")...");
                    compare.assign(compare_chars, compare_length = end_gpioRead_request_length);

                    LOGGER_IS_LOGGED_INFO("(!(end_gpioRead_request.compare(\"" << compare << "\")))...");
                    if (!(end_gpioRead_request.compare(compare))) {
                        LOGGER_IS_LOGGED_INFO("...(!(end_gpioRead_request.compare(\"" << compare << "\")))");

                        LOGGER_IS_LOGGED_INFO("compare_chars = ((\"" << chars << "\" + " << begin_gpioRead_request_length << "))...");
                        compare_chars = ((chars + begin_gpioRead_request_length));
                        LOGGER_IS_LOGGED_INFO("...compare_chars = \"" << compare_chars << "\" = ((\"" << chars << "\" + " << length << "))...");
                        LOGGER_IS_LOGGED_INFO("compare.assign(\"" << compare_chars << "\", " << (length - begin_gpioRead_request_length) << ")...");
                        compare.assign(compare_chars, compare_length = (length - begin_gpioRead_request_length));

                        LOGGER_IS_LOGGED_INFO("((compare_chars = compare.has_chars(compare_length)))...");
                        if ((compare_chars = compare.has_chars(compare_length))) {
                            LOGGER_IS_LOGGED_INFO("...((compare_chars = \"" << compare_chars << "\" = compare.has_chars(" << compare_length << ")))");

                            LOGGER_IS_LOGGED_INFO("((middle_gpioRead_request_length = " << middle_gpioRead_request_length << " < (" << compare_length << ")))...");
                            if ((middle_gpioRead_request_length < (compare_length))) {
                                LOGGER_IS_LOGGED_INFO("...((middle_gpioRead_request_length = " << middle_gpioRead_request_length << " < (" << compare_length << ")))");
                                LOGGER_IS_LOGGED_INFO("(!(middle_gpioRead_request_length))...");
                                if (!(middle_gpioRead_request_length)) {
                                    LOGGER_IS_LOGGED_INFO("...(!(middle_gpioRead_request_length))");
                                    LOGGER_IS_LOGGED_INFO("((end_gpioRead_request_length = " << end_gpioRead_request_length << " < (" << compare_length << ")))...");
                                    if ((end_gpioRead_request_length < (compare_length))) {
                                        size_t begin_length = 0;
                                        const char_t* begin_chars = 0;

                                        LOGGER_IS_LOGGED_INFO("...((end_gpioRead_request_length = " << end_gpioRead_request_length << " < (" << compare_length << ")))");
                                        LOGGER_IS_LOGGED_INFO("((begin_chars = end_gpio_write_request.has_chars(begin_length)))...");
                                        if ((begin_chars = end_gpioRead_request.has_chars(begin_length))) {
                                            size_t value_length = 0, value_compare_length = compare_length;
                                            const char_t* value_compare_chars = compare_chars;
                                            const char_t* value_chars = value_compare_chars;
                                            char_t begin_char = *begin_chars;

                                            LOGGER_IS_LOGGED_INFO("...((begin_chars = \"" << begin_chars << "\" = end_gpio_write_request.has_chars(" << begin_length << ")))");
                                            for (char_t value_char = *(value_compare_chars); 
                                                 (value_char != begin_char) && (0 < value_compare_length); 
                                                 value_char = *(++value_compare_chars), --value_compare_length) {
                                                ++value_length;
                                            }
                                            LOGGER_IS_LOGGED_INFO("(0 < (value_length = " << value_length << "))...");
                                            if (0 < (value_length)) {
                                                string_t value_string(value_chars, value_length);
                                                int value = value_string.to_signed();

                                                LOGGER_IS_LOGGED_INFO("...(0 < (value_length = " << value_length << "))");
                                                LOGGER_IS_LOGGED_INFO("(0 <= (value = " << value << "))...");
                                                if (0 <= (value)) {
                                                    int gpio = value;
                                                    LOGGER_IS_LOGGED_INFO("...(0 <= (value = " << value << "))");
                                                    LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_gpioRead_request_run(response, request, gpio = " << gpio << ", argc, argv, env)))...");
                                                    if (!(err = all_prepare_response_to_gpioRead_request_run(response, request, gpio, argc, argv, env))) {
                                                        LOGGER_IS_LOGGED_INFO("...(!(err = all_prepare_response_to_gpioRead_request_run(response, request, gpio = " << gpio << ", argc, argv, env)))");
                                                    } else {
                                                        LOGGER_IS_LOGGED_INFO("...failed on (!(err = all_prepare_response_to_gpioRead_request_run(response, request, gpio = " << gpio << ", argc, argv, env)))");
                                                    }
                                                    return err;
                                                } else {
                                                    LOGGER_IS_LOGGED_INFO("...failed on (0 <= (" << value << "))");
                                                }
                                            } else {
                                                LOGGER_IS_LOGGED_INFO("...failed on (0 < (value_length = " << value_length << "))");
                                            }
                                        } else {
                                            LOGGER_IS_LOGGED_INFO("...failed on ((begin_chars = end_gpio_write_request.has_chars(" << begin_length << ")))");
                                        }
                                    } else {
                                        LOGGER_IS_LOGGED_INFO("...failed on ((end_gpioRead_request_length = " << end_gpioRead_request_length << " < (" << compare_length << ")))");
                                    }
                                } else {
                                    LOGGER_IS_LOGGED_INFO("...failed on (!(middle_gpioRead_request_length))");
                                }
                            } else {
                                LOGGER_IS_LOGGED_INFO("...failed on ((middle_gpioRead_request_length = " << middle_gpioRead_request_length << " < (" << compare_length << ")))");
                            }
                        } else {
                            LOGGER_IS_LOGGED_INFO("...failed on ((compare_chars = compare.has_chars(" << compare_length << ")))");
                        }
                    } else {
                        LOGGER_IS_LOGGED_INFO("...failed on (!(end_gpioRead_request.compare(\"" << compare << "\")))");
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (!(begin_gpioRead_request.compare(\"" << compare << "\")))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on ((gpioRead_request_length = " << gpioRead_request_length << " < (" << length << ")))");
            }

            gpioWrite_request_length = (begin_gpioWrite_request_length = begin_gpioWrite_request.length());
            gpioWrite_request_length += (middle_gpioWrite_request_length = middle_gpioWrite_request.length());
            gpioWrite_request_length += (end_gpioWrite_request_length = end_gpioWrite_request.length());

            LOGGER_IS_LOGGED_INFO("((gpioWrite_request_length = " << gpioWrite_request_length << " < (" << length << ")))...");
            if ((gpioWrite_request_length < (length))) {
                size_t compare_length = begin_gpioWrite_request_length;
                const char_t* compare_chars = chars;
                string_t compare(compare_chars, compare_length);

                LOGGER_IS_LOGGED_INFO("...((gpioWrite_request_length = " << gpioWrite_request_length << " < (" << length << ")))");
                LOGGER_IS_LOGGED_INFO("(!(begin_gpioWrite_request.compare(\"" << compare << "\")))...");
                if (!(begin_gpioWrite_request.compare(compare))) {
                    LOGGER_IS_LOGGED_INFO("...(!(begin_gpioWrite_request.compare(\"" << compare << "\")))");

                    LOGGER_IS_LOGGED_INFO("compare_chars = ((\"" << chars << "\" + " << length << ") - " << end_gpioWrite_request_length << ")...");
                    compare_chars = ((chars + length) - end_gpioWrite_request_length);
                    LOGGER_IS_LOGGED_INFO("...compare_chars = \"" << compare_chars << "\" = ((\"" << chars << "\" + " << length << ") - " << end_gpioWrite_request_length << ")...");
                    LOGGER_IS_LOGGED_INFO("compare.assign(\"" << compare_chars << "\", " << end_gpioWrite_request_length << ")...");
                    compare.assign(compare_chars, compare_length = end_gpioWrite_request_length);

                    LOGGER_IS_LOGGED_INFO("(!(end_gpioWrite_request.compare(\"" << compare << "\")))...");
                    if (!(end_gpioWrite_request.compare(compare))) {
                        LOGGER_IS_LOGGED_INFO("...(!(end_gpioWrite_request.compare(\"" << compare << "\")))");

                        LOGGER_IS_LOGGED_INFO("compare_chars = ((\"" << chars << "\" + " << begin_gpioWrite_request_length << "))...");
                        compare_chars = ((chars + begin_gpioWrite_request_length));
                        LOGGER_IS_LOGGED_INFO("...compare_chars = \"" << compare_chars << "\" = ((\"" << chars << "\" + " << length << "))...");
                        LOGGER_IS_LOGGED_INFO("compare.assign(\"" << compare_chars << "\", " << (length - begin_gpioWrite_request_length) << ")...");
                        compare.assign(compare_chars, compare_length = (length - begin_gpioWrite_request_length));
                        
                        LOGGER_IS_LOGGED_INFO("((compare_chars = compare.has_chars(compare_length)))...");
                        if ((compare_chars = compare.has_chars(compare_length))) {
                            LOGGER_IS_LOGGED_INFO("...((compare_chars = \"" << compare_chars << "\" = compare.has_chars(" << compare_length << ")))");

                            LOGGER_IS_LOGGED_INFO("((middle_gpioWrite_request_length = " << middle_gpioWrite_request_length << " < (" << compare_length << ")))...");
                            if ((middle_gpioWrite_request_length < (compare_length))) {
                                size_t begin_length = 0;
                                const char_t* begin_chars = 0;

                                LOGGER_IS_LOGGED_INFO("...((middle_gpioWrite_request_length = " << middle_gpioWrite_request_length << " < (" << compare_length << ")))");
                                LOGGER_IS_LOGGED_INFO("((begin_chars = middle_gpioWrite_request.has_chars(begin_length)))...");
                                if ((begin_chars = middle_gpioWrite_request.has_chars(begin_length))) {
                                    size_t value_length = 0, value_compare_length = compare_length;
                                    const char_t* value_compare_chars = compare_chars;
                                    const char_t* value_chars = value_compare_chars;
                                    char_t begin_char = *begin_chars;

                                    LOGGER_IS_LOGGED_INFO("...((begin_chars = \"" << begin_chars << "\" = middle_gpioWrite_request.has_chars(" << begin_length << ")))");
                                    for (char_t value_char = *(value_compare_chars); 
                                         (value_char != begin_char) && (0 < value_compare_length); 
                                         value_char = *(++value_compare_chars), --value_compare_length) {
                                        ++value_length;
                                    }
                                    LOGGER_IS_LOGGED_INFO("(0 < (value_length = " << value_length << "))...");
                                    if (0 < (value_length)) {
                                        string_t value_string(value_chars, value_length);
                                        int value = value_string.to_signed();

                                        LOGGER_IS_LOGGED_INFO("...(0 < (value_length = " << value_length << "))");
                                        LOGGER_IS_LOGGED_INFO("(0 <= (value = " << value << "))...");
                                        if (0 <= (value)) {
                                            int gpio = value;
                                            LOGGER_IS_LOGGED_INFO("...(0 <= (value = " << value << "))");
                                            LOGGER_IS_LOGGED_INFO("...gpio = " << value << "");
                                            LOGGER_IS_LOGGED_INFO("value_chars = ((\"" << value_chars << "\" + " << value_length << ") + " << middle_gpioWrite_request_length << ")...");
                                            value_chars = ((value_chars + value_length) + middle_gpioWrite_request_length);
                                            LOGGER_IS_LOGGED_INFO("...value_chars = \"" << value_chars << "\"");
                                            LOGGER_IS_LOGGED_INFO("((begin_chars = end_gpioWrite_request.has_chars(begin_length)))...");
                                            if ((begin_chars = end_gpioWrite_request.has_chars(begin_length))) {
                                                LOGGER_IS_LOGGED_INFO("...((begin_chars = \"" << begin_chars << "\" = end_gpioWrite_request.has_chars(" << begin_length << ")))");
                                                value_length = 0;
                                                value_compare_length = value_chars - chars;
                                                value_compare_chars = value_chars;
                                                begin_char = *begin_chars;
                                                for (char_t value_char = *(value_compare_chars); 
                                                     (value_char != begin_char) && (0 < value_compare_length); 
                                                     value_char = *(++value_compare_chars), --value_compare_length) {
                                                    ++value_length;
                                                }
                                                LOGGER_IS_LOGGED_INFO("(0 < (value_length = " << value_length << "))...");
                                                if (0 < (value_length)) {
                                                    LOGGER_IS_LOGGED_INFO("...(0 < (value_length = " << value_length << "))");
                                                    LOGGER_IS_LOGGED_INFO("value_string.assign(\"" << value_chars << "\", " << value_length << ")...");
                                                    value_string.assign(value_chars, value_length);
                                                    value = value_string.to_signed();
                                                    LOGGER_IS_LOGGED_INFO("(0 <= (value = " << value << "))...");
                                                    if (0 <= (value)) {
                                                        int level = value;
                                                        LOGGER_IS_LOGGED_INFO("...(0 <= (value = " << value << "))");
                                                        LOGGER_IS_LOGGED_INFO("...level = " << value << "");
                                                        LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_gpioWrite_request_run(response, request, gpio = " << gpio << ", level = " << level << ", argc, argv, env)))...");
                                                        if (!(err = all_prepare_response_to_gpioWrite_request_run(response, request, gpio, level, argc, argv, env))) {
                                                            LOGGER_IS_LOGGED_INFO("...(!(err = all_prepare_response_to_gpioWrite_request_run(response, request, gpio = " << gpio << ", level = " << level << ", argc, argv, env)))");
                                                        } else {
                                                            LOGGER_IS_LOGGED_INFO("...failed on (!(err = all_prepare_response_to_gpioWrite_request_run(response, request, gpio = " << gpio << ", level = " << level << ", argc, argv, env)))");
                                                        }
                                                        LOGGER_IS_LOGGED_INFO("return err...");
                                                        return err;
                                                    } else {
                                                        LOGGER_IS_LOGGED_INFO("...failed on (0 <= (value = " << value << "))");
                                                    }
                                                } else {
                                                    LOGGER_IS_LOGGED_INFO("...failed on (0 < (value_length = " << value_length << "))");
                                                }
                                            } else {
                                                LOGGER_IS_LOGGED_INFO("...failed on ((begin_chars = end_gpioWrite_request.has_chars(" << begin_length << ")))");
                                            }
                                        } else {
                                            LOGGER_IS_LOGGED_INFO("...failed on (0 <= (" << value << "))");
                                        }
                                    } else {
                                        LOGGER_IS_LOGGED_INFO("...failed on (0 < (value_length = " << value_length << "))");
                                    }
                                } else {
                                    LOGGER_IS_LOGGED_INFO("...failed on ((begin_chars = middle_gpioWrite_request.has_chars(" << begin_length << ")))");
                                }
                            } else {
                                LOGGER_IS_LOGGED_INFO("...failed on ((middle_gpioWrite_request_length = " << middle_gpioWrite_request_length << " < (" << compare_length << ")))");
                            }
                        } else {
                            LOGGER_IS_LOGGED_INFO("...failed on ((compare_chars = compare.has_chars(" << compare_length << ")))");
                        }
                    } else {
                        LOGGER_IS_LOGGED_INFO("...failed on (!(end_gpioWrite_request.compare(\"" << compare << "\")))");
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (!(begin_gpioWrite_request.compare(\"" << compare << "\")))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on ((gpioWrite_request_length = " << gpioWrite_request_length << " < (" << length << ")))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = request.has_chars(" << length << ")))");
        }

        LOGGER_IS_LOGGED_INFO("...(!(err = extends::default_prepare_response_to_unknown_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))...");
        if (!(err = extends::default_prepare_response_to_unknown_request_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::default_prepare_response_to_unknown_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = extends::default_prepare_response_to_unknown_request_run(\"" << response << "\", \"" << request << "\", argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...write_gpio_level_on_run
    virtual int write_gpio_level_on_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const int& level_on = this->gpio_level_on();
        int& write_level = this->write_gpio_level();
        int& level = this->gpio_level();
        level = write_level;
        write_level = level_on;
        if (!(err = write_gpio_level_run_set(argc, argv, env))) {} else {}
        write_level = level;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...write_gpio_level_off_run
    virtual int write_gpio_level_off_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const int& level_off = this->gpio_level_off();
        int& write_level = this->write_gpio_level();
        int& level = this->gpio_level();
        level = write_level;
        write_level = level_off;
        if (!(err = write_gpio_level_run_set(argc, argv, env))) {} else {}
        write_level = level;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...write_gpio_level_run...
    virtual int write_gpio_level_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& begin_gpioWrite_request = this->begin_gpioWrite_request();
        const string_t& middle_gpioWrite_request = this->middle_gpioWrite_request();
        const string_t& end_gpioWrite_request = this->end_gpioWrite_request();
        string_t& gpio_request = this->gpio_request();
        const int& gpio = this->write_gpio();
        const int& level = this->write_gpio_level();

        gpio_request.assign(begin_gpioWrite_request);
        gpio_request.append_signed(gpio);
        gpio_request.append(middle_gpioWrite_request);
        gpio_request.append_signed(level);
        gpio_request.append(end_gpioWrite_request);
        this->set_request(gpio_request);
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...read_gpio_level_run...
    virtual int read_gpio_level_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& begin_gpioRead_request = this->begin_gpioRead_request();
        const string_t& middle_gpioRead_request = this->middle_gpioRead_request();
        const string_t& end_gpioRead_request = this->end_gpioRead_request();
        string_t& gpio_request = this->gpio_request();
        const int& gpio = this->read_gpio();

        gpio_request.assign(begin_gpioRead_request);
        gpio_request.append_signed(gpio);
        gpio_request.append(middle_gpioRead_request);
        gpio_request.append(end_gpioRead_request);
        this->set_request(gpio_request);
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...output_read_gpio_run
    virtual int output_read_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const int& gpio = this->read_gpio();
        signed_to_string output(gpio);
        this->outln(output);
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...output_write_gpio_run
    virtual int output_write_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const int& gpio = this->write_gpio();
        signed_to_string output(gpio);
        this->outln(output);
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...output_write_gpio_level_run
    virtual int output_write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const int& gpio_level = this->write_gpio_level();
        signed_to_string output(gpio_level);
        this->outln(output);
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on...on_option...
    virtual int on_set_on_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_write_option(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...off_option...
    virtual int on_set_off_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_write_option(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...read_option...
    virtual int on_set_read_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            int gpio = -1;
            if ((0 <= (gpio = arg.to_signed()))) {
                set_read_gpio(gpio);
            } else {}
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...write_option...
    virtual int on_set_write_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            int gpio = -1;
            if ((0 <= (gpio = arg.to_signed()))) {
                set_write_gpio(gpio);
            } else {}
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...level_option...
    virtual int on_set_level_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            int gpio_level = -1;
            if ((0 <= (gpio_level = arg.to_signed()))) {
                set_write_gpio_level(gpio_level);
            } else {}
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...system...
    virtual string_t& set_system_restart_request() {
        string_t& to = this->system_restart_request();
        set_request(to);
        return request();
    }
    virtual string_t& system_restart_request() const {
        return (string_t&)system_restart_request_;
    }
    virtual string_t& system_restart_response() const {
        return (string_t&)system_restart_response_;
    }
    virtual string_t& restart_request() const {
        return (string_t&)system_restart_request();
    }
    virtual string_t& restart_response() const {
        return (string_t&)system_restart_response();
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& set_system_start_request() {
        string_t& to = this->system_start_request();
        set_request(to);
        return request();
    }
    virtual string_t& system_start_request() const {
        return (string_t&)system_start_request_;
    }
    virtual string_t& system_start_response() const {
        return (string_t&)system_start_response_;
    }
    virtual string_t& start_request() const {
        return (string_t&)system_start_request();
    }
    virtual string_t& start_response() const {
        return (string_t&)system_start_response();
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& set_system_stop_request() {
        string_t& to = this->system_stop_request();
        set_request(to);
        return request();
    }
    virtual string_t& system_stop_request() const {
        return (string_t&)system_stop_request_;
    }
    virtual string_t& system_stop_response() const {
        return (string_t&)system_stop_response_;
    }
    virtual string_t& stop_request() const {
        return (string_t&)system_stop_request();
    }
    virtual string_t& stop_response() const {
        return (string_t&)system_stop_response();
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...gpio...request
    /// ...
    virtual string_t& begin_gpioWrite_request() const {
        return (string_t&)begin_gpioWrite_request_;
    }
    virtual string_t& middle_gpioWrite_request() const {
        return (string_t&)middle_gpioWrite_request_;
    }
    virtual string_t& end_gpioWrite_request() const {
        return (string_t&)end_gpioWrite_request_;
    }
    virtual string_t& begin_gpioRead_request() const {
        return (string_t&)begin_gpioRead_request_;
    }
    virtual string_t& middle_gpioRead_request() const {
        return (string_t&)middle_gpioRead_request_;
    }
    virtual string_t& end_gpioRead_request() const {
        return (string_t&)end_gpioRead_request_;
    }
    virtual string_t& gpio_request() const {
        return (string_t&)gpio_request_;
    }
    /// ...
    /// ...gpio...request
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...gpio...response
    /// ...
    virtual string_t& begin_gpioLevel_response() const {
        return (string_t&)begin_gpioLevel_response_;
    }
    virtual string_t& middle_gpioLevel_response() const {
        return (string_t&)middle_gpioLevel_response_;
    }
    virtual string_t& end_gpioLevel_response() const {
        return (string_t&)end_gpioLevel_response_;
    }
    virtual string_t& gpio_response() const {
        return (string_t&)gpio_response_;
    }
    /// ...
    /// ...gpio...response
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...gpio
    /// ...
    virtual int& set_read_gpio(const int& to) {
        int& read_gpio = this->read_gpio();
        read_gpio = to;
        return read_gpio;
    }
    virtual int& read_gpio() const {
        return (int&)read_gpio_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int& set_write_gpio(const int& to) {
        int& write_gpio = this->write_gpio();
        write_gpio = to;
        return write_gpio;
    }
    virtual int& write_gpio() const {
        return (int&)write_gpio_;
    }
    /// ...
    /// ...gpio
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...gpio_level
    /// ...
    virtual int& set_read_gpio_level(const int& to) {
        int& read_gpio_level = this->read_gpio_level();
        read_gpio_level = to;
        return read_gpio_level;
    }
    virtual int& read_gpio_level() const {
        return (int&)read_gpio_level_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int& set_write_gpio_level(const int& to) {
        int& write_gpio_level = this->write_gpio_level();
        write_gpio_level = to;
        return write_gpio_level;
    }
    virtual int& write_gpio_level() const {
        return (int&)write_gpio_level_;
    }
    /// ...
    /// ...gpio_level
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...gpio_mode
    /// ...
    virtual int& set_read_gpio_mode(const int& to) {
        int& read_gpio_mode = this->read_gpio_mode();
        read_gpio_mode = to;
        return read_gpio_mode;
    }
    virtual int& read_gpio_mode() const {
        return (int&)read_gpio_mode_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int& set_write_gpio_mode(const int& to) {
        int& write_gpio_mode = this->write_gpio_mode();
        write_gpio_mode = to;
        return write_gpio_mode;
    }
    virtual int& write_gpio_mode() const {
        return (int&)write_gpio_mode_;
    }
    /// ...
    /// ...gpio_mode
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...gpio_level...
    /// ...
    virtual int& set_gpio_level_on(const int& to) {
        int& gpio_level_on = this->gpio_level_on();
        gpio_level_on = to;
        return gpio_level_on;
    }
    virtual int& gpio_level_on() const {
        return (int&)gpio_level_on_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int& set_gpio_level_off(const int& to) {
        int& gpio_level_off = this->gpio_level_off();
        gpio_level_off = to;
        return gpio_level_off;
    }
    virtual int& gpio_level_off() const {
        return (int&)gpio_level_off_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int& set_gpio_level_unknown(const int& to) {
        int& gpio_level_unknown = this->gpio_level_unknown();
        gpio_level_unknown = to;
        return gpio_level_unknown;
    }
    virtual int& gpio_level_unknown() const {
        return (int&)gpio_level_unknown_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int& set_gpio_level(const int& to) {
        int& gpio_level = this->gpio_level();
        gpio_level = to;
        return gpio_level;
    }
    virtual int& gpio_level() const {
        return (int&)gpio_level_;
    }
    /// ...
    /// ...gpio_level...
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...invalid...
    virtual string_t& invalid_request() const {
        return (string_t&)invalid_request_;
    }
    virtual string_t& invalid_response() const {
        return (string_t&)invalid_response_;
    }
    //////////////////////////////////////////////////////////////////////////
    ///...unknown...
    virtual string_t& unknown_request() const {
        return (string_t&)unknown_request_;
    }
    virtual string_t& unknown_response() const {
        return (string_t&)unknown_response_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    virtual string_t& set_request(const string_t& to) {
        string_t& request = this->request();
        request.assign(to);
        return request;
    }
    virtual string_t& request() const {
        return (string_t&)request_;
    }
    virtual string_t& response() const {
        return (string_t&)response_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    string_t system_restart_request_, system_start_request_, system_stop_request_;
    string_t system_restart_response_, system_start_response_, system_stop_response_;
    string_t invalid_request_, invalid_response_;
    string_t unknown_request_, unknown_response_;
    string_t request_, response_;

    string_t begin_gpioWrite_request_, middle_gpioWrite_request_, end_gpioWrite_request_, 
             begin_gpioRead_request_, middle_gpioRead_request_, end_gpioRead_request_, 
             begin_gpioLevel_response_, middle_gpioLevel_response_, end_gpioLevel_response_, 
             gpio_request_, gpio_response_;
    int read_gpio_, write_gpio_, 
        gpio_level_on_, gpio_level_off_, gpio_level_unknown_,
        read_gpio_level_, write_gpio_level_, gpio_level_,
        read_gpio_mode_, write_gpio_mode_;
}; /// class maint 
typedef maint<> main;

} /// namespace base 
} /// namespace pigpio 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_HPP

