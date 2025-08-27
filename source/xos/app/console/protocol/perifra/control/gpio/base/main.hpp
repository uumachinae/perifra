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
///   Date: 1/5/2025, 5/12/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_HPP

#include "xos/app/console/protocol/perifra/control/gpio/base/main_opt.hpp"
#include "xos/gpio/implement.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace perifra {
namespace control {
namespace gpio {
namespace base {

/// class maint
template 
<class TExtends = xos::app::console::protocol::perifra::control::gpio::base::main_optt<>,  class TImplements = typename TExtends::implements>

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

    typedef xos::gpio::implement gpio_implement_t;
    
    /// constructor / destructor
    maint()
    : run_(0),

      system_restart_request_("{\"gpio\":{\"system\":{\"system_action\":{\"action\":\"restart\"}}}}"),
      system_start_request_("{\"gpio\":{\"system\":{\"system_action\":{\"action\":\"start\"}}}}"),
      system_stop_request_("{\"gpio\":{\"system\":{\"system_action\":{\"action\":\"stop\"}}}}"),
      
      system_restart_response_("{\"gpio\":{\"system\":\"restart\"}}"),
      system_start_response_("{\"gpio\":{\"system\":\"start\"}}"),
      system_stop_response_("{\"gpio\":{\"system\":\"stop\"}}"),
      system_state_unknown_response_("{\"gpio\":{\"system\":{\"system_state\":{\"state\":\"unknown\"}}}}"),
      
      invalid_request_("{\"gpio\":{\"request\":\"invalid\"}}"), 
      invalid_response_(invalid_request_),
      
      unknown_request_("{\"gpio\":{\"request\":\"unknown\"}}"), 
      unknown_response_(unknown_request_),
    
      request_(unknown_request_),
      response_(unknown_response_), 
      
      begin_gpio_write_request_("{\"gpio\":{\"write\":[{\"gpio\":\""), 
      middle_gpio_write_request_("\"},{\"level\":\""), 
      end_gpio_write_request_("\"}]}}"),
      
      begin_gpio_read_request_("{\"gpio\":{\"read\":[{\"gpio\":\""), 
      middle_gpio_read_request_(""), 
      end_gpio_read_request_("\"}]}}"),
      
      begin_gpio_level_response_("{\"gpio\":{\"level\":[{\"gpio\":\""),
      middle_gpio_level_response_("\"},{\"level\":\""),
      end_gpio_level_response_("\"}]}}"),
      
      read_gpio_(22), write_gpio_(17), gpio_number_(write_gpio_),
      gpio_level_on_(1), gpio_level_off_(0), gpio_level_unknown_(-1),
      read_gpio_level_(gpio_level_unknown_), write_gpio_level_(gpio_level_on_),
      read_gpio_mode_(gpio_level_unknown_), write_gpio_mode_(gpio_level_unknown_),

      gpio_initialized_(false), gpio_initialize_(true), 
      gpio_finalized_(false), gpio_finalize_(true) {
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
    /// ...prepare_response_to_gpio_request_run
    virtual int before_prepare_response_to_gpio_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        gpio_implement_t& gpio_implement = this->gpio_implement();
        bool gpio_initialized = this->gpio_initialized();
        bool gpio_initialize = this->gpio_initialize();
        bool gpio_finalized = this->gpio_finalized();

        LOGGER_IS_LOGGED_INFO("((gpio_initialize))...");
        if ((gpio_initialize)) {
            LOGGER_IS_LOGGED_INFO("...((gpio_initialize))");

            LOGGER_IS_LOGGED_INFO("(!(gpio_finalized))...");
            if (!(gpio_finalized)) {
                LOGGER_IS_LOGGED_INFO("...(!(gpio_finalized))");

                LOGGER_IS_LOGGED_INFO("(!(gpio_initialized))...");
                if (!(gpio_initialized)) {
                    LOGGER_IS_LOGGED_INFO("...(!(gpio_initialized))");
        
                    LOGGER_IS_LOGGED_INFO("((gpio_implement.initialize()))...");
                    if ((gpio_implement.initialize())) {
                        LOGGER_IS_LOGGED_INFO("...((gpio_implement.initialize()))");
        
                        LOGGER_IS_LOGGED_INFO("set_gpio_initialized()...");
                        set_gpio_initialized();
                    } else {
                        LOGGER_IS_LOGGED_INFO("...failed on ((gpio_implement.initialize()))");
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (!(gpio_initialized))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(gpio_finalized))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((gpio_initialize))");
        }
        return err;
    }
    virtual int after_prepare_response_to_gpio_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        gpio_implement_t& gpio_implement = this->gpio_implement();
        bool gpio_initialized = this->gpio_initialized();
        bool gpio_finalized = this->gpio_finalized();
        bool gpio_finalize = this->gpio_finalize();

        LOGGER_IS_LOGGED_INFO("((gpio_finalize))...");
        if ((gpio_finalize)) {
            LOGGER_IS_LOGGED_INFO("...((gpio_finalize))");

            LOGGER_IS_LOGGED_INFO("(!(gpio_finalized))...");
            if (!(gpio_finalized)) {
                LOGGER_IS_LOGGED_INFO("...(!(gpio_finalized))");

                LOGGER_IS_LOGGED_INFO("((gpio_initialized))...");
                if ((gpio_initialized)) {
                    LOGGER_IS_LOGGED_INFO("...((gpio_initialized))");

                    LOGGER_IS_LOGGED_INFO("((gpio_implement.finalize()))...");
                    if ((gpio_implement.finalize())) {
                        LOGGER_IS_LOGGED_INFO("...((gpio_implement.finalize()))");
        
                        LOGGER_IS_LOGGED_INFO("set_gpio_finalized()...");
                        set_gpio_finalized();
                    } else {
                        LOGGER_IS_LOGGED_INFO("...failed on ((gpio_implement.initialize()))");
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on ((gpio_initialized))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(gpio_finalized))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((gpio_finalize))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_gpio_read_request_run
    virtual int prepare_response_to_gpio_read_request_run(string_t& response, const string_t& request, const int& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0, result = 0;;
        gpio_implement_t& gpio_implement = this->gpio_implement();

        LOGGER_IS_LOGGED_INFO("(0 <= (result = gpio_implement.get_value(" << gpio << ")))...");
        if (0 <= (result = gpio_implement.get_value(gpio))) {
            const signed_to_string gpio_level_response_gpio(gpio), 
                                   gpio_level_response_level(result);
            const string_t& begin_gpio_level_response = this->begin_gpio_level_response(),
                            middle_gpio_level_response = this->middle_gpio_level_response(),
                            end_gpio_level_response = this->end_gpio_level_response();
            LOGGER_IS_LOGGED_INFO("...(0 <= (" << result << " = gpio_implement.get_value(" << gpio << ")))");
            response.assign(begin_gpio_level_response);
            response.append(gpio_level_response_gpio);
            response.append(middle_gpio_level_response);
            response.append(gpio_level_response_level);
            response.append(end_gpio_level_response);
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (0 <= (" << result << " = gpio_implement.set_value(" << gpio << ")))");
        }
        return err;
    }
    virtual int before_prepare_response_to_gpio_read_request_run(string_t& response, const string_t& request, const int& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))...");
        if (!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        }
        return err;
    }
    virtual int after_prepare_response_to_gpio_read_request_run(string_t& response, const string_t& request, const int& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))...");
        if (!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        }
        return err;
    }
    virtual int all_prepare_response_to_gpio_read_request_run(string_t& response, const string_t& request, const int& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_gpio_read_request_run(response, request, gpio, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_gpio_read_request_run(response, request, gpio, argc, argv, env);
            if ((err2 = after_prepare_response_to_gpio_read_request_run(response, request, gpio, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_gpio_write_request_run
    virtual int prepare_response_to_gpio_write_request_run(string_t& response, const string_t& request, const int& gpio, const int& level, int argc, char_t** argv, char_t** env) {
        int err = 0, result = 0;
        gpio_implement_t& gpio_implement = this->gpio_implement();

        LOGGER_IS_LOGGED_INFO("(0 <= (result = gpio_implement.set_value(" << gpio << ", " << level << ")))...");
        if (0 <= (result = gpio_implement.set_value(gpio, level))) {
            const int& write_gpio = this->write_gpio();
            const signed_to_string gpio_level_response_gpio(gpio), 
                                   gpio_level_response_level(result);
            const string_t& begin_gpio_level_response = this->begin_gpio_level_response(),
                            middle_gpio_level_response = this->middle_gpio_level_response(),
                            end_gpio_level_response = this->end_gpio_level_response();
            LOGGER_IS_LOGGED_INFO("...(0 <= (" << result << " = gpio_implement.set_value(" << gpio << ", " << level << ")))");
            response.assign(begin_gpio_level_response);
            response.append(gpio_level_response_gpio);
            response.append(middle_gpio_level_response);
            response.append(gpio_level_response_level);
            response.append(end_gpio_level_response);
            if (!(write_gpio != gpio)) {
                const int& gpio = this->read_gpio();
                LOGGER_IS_LOGGED_INFO("(0 <= (result = gpio_implement.get_value(" << gpio << ")))...");
                if (0 <= (result = gpio_implement.get_value(gpio))) {
                    const signed_to_string gpio_level_response_gpio(gpio), 
                                           gpio_level_response_level(result);
                    const string_t& begin_gpio_level_response = this->begin_gpio_level_response(),
                                    middle_gpio_level_response = this->middle_gpio_level_response(),
                                    end_gpio_level_response = this->end_gpio_level_response();
                    LOGGER_IS_LOGGED_INFO("...(0 <= (" << result << " = gpio_implement.get_value(" << gpio << ")))");
                    response.assign(begin_gpio_level_response);
                    response.append(gpio_level_response_gpio);
                    response.append(middle_gpio_level_response);
                    response.append(gpio_level_response_level);
                    response.append(end_gpio_level_response);
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (0 <= (" << result << " = gpio_implement.set_value(" << gpio << ")))");
                }
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (0 <= (" << result << " = gpio_implement.set_value(" << gpio << ", " << level << ")))");
        }
        return err;
    }
    virtual int before_prepare_response_to_gpio_write_request_run(string_t& response, const string_t& request, const int& gpio, const int& level, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))...");
        if (!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(err = before_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        }
        return err;
    }
    virtual int after_prepare_response_to_gpio_write_request_run(string_t& response, const string_t& request, const int& gpio, const int& level, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))...");
        if (!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(err = after_prepare_response_to_gpio_request_run(response, request, argc, argv, env)))");
        }
        return err;
    }
    virtual int all_prepare_response_to_gpio_write_request_run(string_t& response, const string_t& request, const int& gpio, const int& level, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_gpio_write_request_run(response, request, gpio, level, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_gpio_write_request_run(response, request, gpio, level, argc, argv, env);
            if ((err2 = after_prepare_response_to_gpio_write_request_run(response, request, gpio, level, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_unknown_request_run
    virtual int default_prepare_response_to_unknown_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        const string_t& unknown_response = this->unknown_response();

        LOGGER_IS_LOGGED_INFO("((chars = request.has_chars(length)))...");
        if ((chars = request.has_chars(length))) {
            const string_t& begin_gpio_read_request = this->begin_gpio_read_request(),
                            middle_gpio_read_request = this->middle_gpio_read_request(),
                            end_gpio_read_request = this->end_gpio_read_request();
            size_t begin_gpio_read_request_length = 0,
                   middle_gpio_read_request_length = 0,
                   end_gpio_read_request_length = 0,
                   gpio_read_request_length = 0;

            const string_t& begin_gpio_write_request = this->begin_gpio_write_request(),
                            middle_gpio_write_request = this->middle_gpio_write_request(),
                            end_gpio_write_request = this->end_gpio_write_request();
            size_t begin_gpio_write_request_length = 0,
                   middle_gpio_write_request_length = 0,
                   end_gpio_write_request_length = 0,
                   gpio_write_request_length = 0;

            LOGGER_IS_LOGGED_INFO("...((chars = request.has_chars(" << length << ")))");
            gpio_read_request_length = (begin_gpio_read_request_length = begin_gpio_read_request.length());
            gpio_read_request_length += (middle_gpio_read_request_length = middle_gpio_read_request.length());
            gpio_read_request_length += (end_gpio_read_request_length = end_gpio_read_request.length());

            LOGGER_IS_LOGGED_INFO("((gpio_read_request_length = " << gpio_read_request_length << " < (" << length << ")))...");
            if ((gpio_read_request_length < (length))) {
                size_t compare_length = begin_gpio_read_request_length;
                const char_t* compare_chars = chars;
                string_t compare(compare_chars, compare_length);

                LOGGER_IS_LOGGED_INFO("...((gpio_read_request_length = " << gpio_read_request_length << " < (" << length << ")))");
                LOGGER_IS_LOGGED_INFO("(!(begin_gpio_read_request.compare(\"" << compare << "\")))...");
                if (!(begin_gpio_read_request.compare(compare))) {
                    LOGGER_IS_LOGGED_INFO("...(!(begin_gpio_read_request.compare(\"" << compare << "\")))");

                    LOGGER_IS_LOGGED_INFO("compare_chars = ((\"" << chars << "\" + " << length << ") - " << end_gpio_read_request_length << ")...");
                    compare_chars = ((chars + length) - end_gpio_read_request_length);
                    LOGGER_IS_LOGGED_INFO("...compare_chars = \"" << compare_chars << "\" = ((\"" << chars << "\" + " << length << ") - " << end_gpio_read_request_length << ")...");
                    LOGGER_IS_LOGGED_INFO("compare.assign(\"" << compare_chars << "\", " << end_gpio_read_request_length << ")...");
                    compare.assign(compare_chars, compare_length = end_gpio_read_request_length);

                    LOGGER_IS_LOGGED_INFO("(!(end_gpio_read_request.compare(\"" << compare << "\")))...");
                    if (!(end_gpio_read_request.compare(compare))) {
                        LOGGER_IS_LOGGED_INFO("...(!(end_gpio_read_request.compare(\"" << compare << "\")))");

                        LOGGER_IS_LOGGED_INFO("compare_chars = ((\"" << chars << "\" + " << begin_gpio_read_request_length << "))...");
                        compare_chars = ((chars + begin_gpio_read_request_length));
                        LOGGER_IS_LOGGED_INFO("...compare_chars = \"" << compare_chars << "\" = ((\"" << chars << "\" + " << length << "))...");
                        LOGGER_IS_LOGGED_INFO("compare.assign(\"" << compare_chars << "\", " << (length - begin_gpio_read_request_length) << ")...");
                        compare.assign(compare_chars, compare_length = (length - begin_gpio_read_request_length));

                        LOGGER_IS_LOGGED_INFO("((compare_chars = compare.has_chars(compare_length)))...");
                        if ((compare_chars = compare.has_chars(compare_length))) {
                            LOGGER_IS_LOGGED_INFO("...((compare_chars = \"" << compare_chars << "\" = compare.has_chars(" << compare_length << ")))");

                            LOGGER_IS_LOGGED_INFO("((middle_gpio_read_request_length = " << middle_gpio_read_request_length << " < (" << compare_length << ")))...");
                            if ((middle_gpio_read_request_length < (compare_length))) {
                                LOGGER_IS_LOGGED_INFO("...((middle_gpio_read_request_length = " << middle_gpio_read_request_length << " < (" << compare_length << ")))");
                                LOGGER_IS_LOGGED_INFO("(!(middle_gpio_read_request_length))...");
                                if (!(middle_gpio_read_request_length)) {
                                    LOGGER_IS_LOGGED_INFO("...(!(middle_gpio_read_request_length))");
                                    LOGGER_IS_LOGGED_INFO("((end_gpio_read_request_length = " << end_gpio_read_request_length << " < (" << compare_length << ")))...");
                                    if ((end_gpio_read_request_length < (compare_length))) {
                                        size_t begin_length = 0;
                                        const char_t* begin_chars = 0;

                                        LOGGER_IS_LOGGED_INFO("...((end_gpio_read_request_length = " << end_gpio_read_request_length << " < (" << compare_length << ")))");
                                        LOGGER_IS_LOGGED_INFO("((begin_chars = end_gpio_write_request.has_chars(begin_length)))...");
                                        if ((begin_chars = end_gpio_write_request.has_chars(begin_length))) {
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
                                                    LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_gpio_read_request_run(response, request, gpio = " << gpio << ", argc, argv, env)))...");
                                                    if (!(err = all_prepare_response_to_gpio_read_request_run(response, request, gpio, argc, argv, env))) {
                                                        LOGGER_IS_LOGGED_INFO("...(!(err = all_prepare_response_to_gpio_read_request_run(response, request, gpio = " << gpio << ", argc, argv, env)))");
                                                    } else {
                                                        LOGGER_IS_LOGGED_INFO("...failed on (!(err = all_prepare_response_to_gpio_read_request_run(response, request, gpio = " << gpio << ", argc, argv, env)))");
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
                                        LOGGER_IS_LOGGED_INFO("...failed on ((end_gpio_read_request_length = " << end_gpio_read_request_length << " < (" << compare_length << ")))");
                                    }
                                } else {
                                    LOGGER_IS_LOGGED_INFO("...failed on (!(middle_gpio_read_request_length))");
                                }
                            } else {
                                LOGGER_IS_LOGGED_INFO("...failed on ((middle_gpio_read_request_length = " << middle_gpio_read_request_length << " < (" << compare_length << ")))");
                            }
                        } else {
                            LOGGER_IS_LOGGED_INFO("...failed on ((compare_chars = compare.has_chars(" << compare_length << ")))");
                        }
                    } else {
                        LOGGER_IS_LOGGED_INFO("...failed on (!(end_gpio_read_request.compare(\"" << compare << "\")))");
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (!(begin_gpio_read_request.compare(\"" << compare << "\")))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on ((gpio_read_request_length = " << gpio_read_request_length << " < (" << length << ")))");
            }
            gpio_write_request_length = (begin_gpio_write_request_length = begin_gpio_write_request.length());
            gpio_write_request_length += (middle_gpio_write_request_length = middle_gpio_write_request.length());
            gpio_write_request_length += (end_gpio_write_request_length = end_gpio_write_request.length());

            LOGGER_IS_LOGGED_INFO("((gpio_write_request_length = " << gpio_write_request_length << " < (" << length << ")))...");
            if ((gpio_write_request_length < (length))) {
                size_t compare_length = begin_gpio_write_request_length;
                const char_t* compare_chars = chars;
                string_t compare(compare_chars, compare_length);

                LOGGER_IS_LOGGED_INFO("...((gpio_write_request_length = " << gpio_write_request_length << " < (" << length << ")))");
                LOGGER_IS_LOGGED_INFO("(!(begin_gpio_write_request.compare(\"" << compare << "\")))...");
                if (!(begin_gpio_write_request.compare(compare))) {
                    LOGGER_IS_LOGGED_INFO("...(!(begin_gpio_write_request.compare(\"" << compare << "\")))");

                    LOGGER_IS_LOGGED_INFO("compare_chars = ((\"" << chars << "\" + " << length << ") - " << end_gpio_write_request_length << ")...");
                    compare_chars = ((chars + length) - end_gpio_write_request_length);
                    LOGGER_IS_LOGGED_INFO("...compare_chars = \"" << compare_chars << "\" = ((\"" << chars << "\" + " << length << ") - " << end_gpio_write_request_length << ")...");
                    LOGGER_IS_LOGGED_INFO("compare.assign(\"" << compare_chars << "\", " << end_gpio_write_request_length << ")...");
                    compare.assign(compare_chars, compare_length = end_gpio_write_request_length);

                    LOGGER_IS_LOGGED_INFO("(!(end_gpio_write_request.compare(\"" << compare << "\")))...");
                    if (!(end_gpio_write_request.compare(compare))) {
                        LOGGER_IS_LOGGED_INFO("...(!(end_gpio_write_request.compare(\"" << compare << "\")))");

                        LOGGER_IS_LOGGED_INFO("compare_chars = ((\"" << chars << "\" + " << begin_gpio_write_request_length << "))...");
                        compare_chars = ((chars + begin_gpio_write_request_length));
                        LOGGER_IS_LOGGED_INFO("...compare_chars = \"" << compare_chars << "\" = ((\"" << chars << "\" + " << length << "))...");
                        LOGGER_IS_LOGGED_INFO("compare.assign(\"" << compare_chars << "\", " << (length - begin_gpio_write_request_length) << ")...");
                        compare.assign(compare_chars, compare_length = (length - begin_gpio_write_request_length));
                        
                        LOGGER_IS_LOGGED_INFO("((compare_chars = compare.has_chars(compare_length)))...");
                        if ((compare_chars = compare.has_chars(compare_length))) {
                            LOGGER_IS_LOGGED_INFO("...((compare_chars = \"" << compare_chars << "\" = compare.has_chars(" << compare_length << ")))");

                            LOGGER_IS_LOGGED_INFO("((middle_gpio_write_request_length = " << middle_gpio_write_request_length << " < (" << compare_length << ")))...");
                            if ((middle_gpio_write_request_length < (compare_length))) {
                                size_t begin_length = 0;
                                const char_t* begin_chars = 0;

                                LOGGER_IS_LOGGED_INFO("...((middle_gpio_write_request_length = " << middle_gpio_write_request_length << " < (" << compare_length << ")))");
                                LOGGER_IS_LOGGED_INFO("((begin_chars = middle_gpio_write_request.has_chars(begin_length)))...");
                                if ((begin_chars = middle_gpio_write_request.has_chars(begin_length))) {
                                    size_t value_length = 0, value_compare_length = compare_length;
                                    const char_t* value_compare_chars = compare_chars;
                                    const char_t* value_chars = value_compare_chars;
                                    char_t begin_char = *begin_chars;

                                    LOGGER_IS_LOGGED_INFO("...((begin_chars = \"" << begin_chars << "\" = middle_gpio_write_request.has_chars(" << begin_length << ")))");
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
                                            LOGGER_IS_LOGGED_INFO("value_chars = ((\"" << value_chars << "\" + " << value_length << ") + " << middle_gpio_write_request_length << ")...");
                                            value_chars = ((value_chars + value_length) + middle_gpio_write_request_length);
                                            LOGGER_IS_LOGGED_INFO("...value_chars = \"" << value_chars << "\"");
                                            LOGGER_IS_LOGGED_INFO("((begin_chars = end_gpio_write_request.has_chars(begin_length)))...");
                                            if ((begin_chars = end_gpio_write_request.has_chars(begin_length))) {
                                                LOGGER_IS_LOGGED_INFO("...((begin_chars = \"" << begin_chars << "\" = end_gpio_write_request.has_chars(" << begin_length << ")))");
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
                                                        LOGGER_IS_LOGGED_INFO("(!(err = all_prepare_response_to_gpio_write_request_run(response, request, gpio = " << gpio << ", level = " << level << ", argc, argv, env)))...");
                                                        if (!(err = all_prepare_response_to_gpio_write_request_run(response, request, gpio, level, argc, argv, env))) {
                                                            LOGGER_IS_LOGGED_INFO("...(!(err = all_prepare_response_to_gpio_write_request_run(response, request, gpio = " << gpio << ", level = " << level << ", argc, argv, env)))");
                                                        } else {
                                                            LOGGER_IS_LOGGED_INFO("...failed on (!(err = all_prepare_response_to_gpio_write_request_run(response, request, gpio = " << gpio << ", level = " << level << ", argc, argv, env)))");
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
                                                LOGGER_IS_LOGGED_INFO("...failed on ((begin_chars = end_gpio_write_request.has_chars(" << begin_length << ")))");
                                            }
                                        } else {
                                            LOGGER_IS_LOGGED_INFO("...failed on (0 <= (" << value << "))");
                                        }
                                    } else {
                                        LOGGER_IS_LOGGED_INFO("...failed on (0 < (value_length = " << value_length << "))");
                                    }
                                } else {
                                    LOGGER_IS_LOGGED_INFO("...failed on ((begin_chars = middle_gpio_write_request.has_chars(" << begin_length << ")))");
                                }
                            } else {
                                LOGGER_IS_LOGGED_INFO("...failed on ((middle_gpio_write_request_length = " << middle_gpio_write_request_length << " < (" << compare_length << ")))");
                            }
                        } else {
                            LOGGER_IS_LOGGED_INFO("...failed on ((compare_chars = compare.has_chars(" << compare_length << ")))");
                        }
                    } else {
                        LOGGER_IS_LOGGED_INFO("...failed on (!(end_gpio_write_request.compare(\"" << compare << "\")))");
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (!(begin_gpio_write_request.compare(\"" << compare << "\")))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on ((gpio_write_request_length = " << gpio_write_request_length << " < (" << length << ")))");
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
    /// ...prepare_to_process_unknown_response_run
    virtual int default_prepare_to_process_unknown_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        const string_t& request = this->request();

        LOGGER_IS_LOGGED_INFO("((chars = response.has_chars(length)))...");
        if ((chars = response.has_chars(length))) {
            const string_t& begin_gpio_level_response = this->begin_gpio_level_response(),
                            middle_gpio_level_response = this->middle_gpio_level_response(),
                            end_gpio_level_response = this->end_gpio_level_response();
            size_t begin_gpio_level_response_length = 0,
                   middle_gpio_level_response_length = 0,
                   end_gpio_level_response_length = 0,
                   gpio_level_response_length = 0;
            LOGGER_IS_LOGGED_INFO("...((\"" << chars << "\" = response.has_chars(" << length << ")))");

            gpio_level_response_length = (begin_gpio_level_response_length = begin_gpio_level_response.length());
            gpio_level_response_length += (middle_gpio_level_response_length = middle_gpio_level_response.length());
            gpio_level_response_length += (end_gpio_level_response_length = end_gpio_level_response.length());

            LOGGER_IS_LOGGED_INFO("((gpio_level_response_length = " << gpio_level_response_length << " < (" << length << ")))...");
            if ((gpio_level_response_length < (length))) {
                size_t compare_length = begin_gpio_level_response_length;
                const char_t* compare_chars = chars;
                string_t compare(compare_chars, compare_length);

                LOGGER_IS_LOGGED_INFO("...((gpio_level_response_length = " << gpio_level_response_length << " < (" << length << ")))");
                LOGGER_IS_LOGGED_INFO("(!(begin_gpio_level_response.compare(\"" << compare << "\")))...");
                if (!(begin_gpio_level_response.compare(compare))) {
                    LOGGER_IS_LOGGED_INFO("...(!(begin_gpio_level_response.compare(\"" << compare << "\")))");

                    LOGGER_IS_LOGGED_INFO("compare_chars = ((\"" << chars << "\" + " << length << ") - " << end_gpio_level_response_length << ")...");
                    compare_chars = ((chars + length) - end_gpio_level_response_length);
                    LOGGER_IS_LOGGED_INFO("...compare_chars = \"" << compare_chars << "\" = ((\"" << chars << "\" + " << length << ") - " << end_gpio_level_response_length << ")...");
                    LOGGER_IS_LOGGED_INFO("compare.assign(\"" << compare_chars << "\", " << end_gpio_level_response_length << ")...");
                    compare.assign(compare_chars, compare_length = end_gpio_level_response_length);

                    LOGGER_IS_LOGGED_INFO("(!(end_gpio_level_response.compare(\"" << compare << "\")))...");
                    if (!(end_gpio_level_response.compare(compare))) {
                        LOGGER_IS_LOGGED_INFO("...(!(end_gpio_level_response.compare(\"" << compare << "\")))");

                        LOGGER_IS_LOGGED_INFO("compare_chars = ((\"" << chars << "\" + " << begin_gpio_level_response_length << "))...");
                        compare_chars = ((chars + begin_gpio_level_response_length));
                        LOGGER_IS_LOGGED_INFO("...compare_chars = \"" << compare_chars << "\" = ((\"" << chars << "\" + " << length << "))...");
                        LOGGER_IS_LOGGED_INFO("compare.assign(\"" << compare_chars << "\", " << (length - begin_gpio_level_response_length) << ")...");
                        compare.assign(compare_chars, compare_length = (length - begin_gpio_level_response_length));
                        
                        LOGGER_IS_LOGGED_INFO("((compare_chars = compare.has_chars(compare_length)))...");
                        if ((compare_chars = compare.has_chars(compare_length))) {
                            LOGGER_IS_LOGGED_INFO("...((compare_chars = \"" << compare_chars << "\" = compare.has_chars(" << compare_length << ")))");

                            LOGGER_IS_LOGGED_INFO("((middle_gpio_level_response_length = " << middle_gpio_level_response_length << " < (" << compare_length << ")))...");
                            if ((middle_gpio_level_response_length < (compare_length))) {
                                size_t begin_length = 0;
                                const char_t* begin_chars = 0;

                                LOGGER_IS_LOGGED_INFO("...((middle_gpio_level_response_length = " << middle_gpio_level_response_length << " < (" << compare_length << ")))");
                                LOGGER_IS_LOGGED_INFO("((begin_chars = middle_gpio_level_response.has_chars(begin_length)))...");
                                if ((begin_chars = middle_gpio_level_response.has_chars(begin_length))) {
                                    size_t value_length = 0, value_compare_length = compare_length;
                                    const char_t* value_compare_chars = compare_chars;
                                    const char_t* value_chars = value_compare_chars;
                                    char_t begin_char = *begin_chars;

                                    LOGGER_IS_LOGGED_INFO("...((begin_chars = \"" << begin_chars << "\" = middle_gpio_level_response.has_chars(" << begin_length << ")))");
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
                                            LOGGER_IS_LOGGED_INFO("value_chars = ((\"" << value_chars << "\" + " << value_length << ") + " << middle_gpio_level_response_length << ")...");
                                            value_chars = ((value_chars + value_length) + middle_gpio_level_response_length);
                                            LOGGER_IS_LOGGED_INFO("...value_chars = \"" << value_chars << "\"");
                                            LOGGER_IS_LOGGED_INFO("((begin_chars = end_gpio_level_response.has_chars(begin_length)))...");
                                            if ((begin_chars = end_gpio_level_response.has_chars(begin_length))) {
                                                LOGGER_IS_LOGGED_INFO("...((begin_chars = \"" << begin_chars << "\" = end_gpio_level_response.has_chars(" << begin_length << ")))");
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
                                                        LOGGER_IS_LOGGED_INFO("return err...");
                                                        return err;
                                                    } else {
                                                        LOGGER_IS_LOGGED_INFO("...failed on (0 <= (value = " << value << "))");
                                                    }
                                                } else {
                                                    LOGGER_IS_LOGGED_INFO("...failed on (0 < (value_length = " << value_length << "))");
                                                }
                                            } else {
                                                LOGGER_IS_LOGGED_INFO("...failed on ((begin_chars = end_gpio_level_response.has_chars(" << begin_length << ")))");
                                            }
                                        } else {
                                            LOGGER_IS_LOGGED_INFO("...failed on (0 <= (" << value << "))");
                                        }
                                    } else {
                                        LOGGER_IS_LOGGED_INFO("...failed on (0 < (value_length = " << value_length << "))");
                                    }
                                } else {
                                    LOGGER_IS_LOGGED_INFO("...failed on ((begin_chars = middle_gpio_level_response.has_chars(" << begin_length << ")))");
                                }
                            } else {
                                LOGGER_IS_LOGGED_INFO("...failed on ((middle_gpio_level_response_length = " << middle_gpio_level_response_length << " < (" << compare_length << ")))");
                            }
                        } else {
                            LOGGER_IS_LOGGED_INFO("...failed on ((compare_chars = compare.has_chars(" << compare_length << ")))");
                        }
                    } else {
                        LOGGER_IS_LOGGED_INFO("...failed on (!(end_gpio_level_response.compare(\"" << compare << "\")))");
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (!(begin_gpio_level_response.compare(\"" << compare << "\")))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on ((gpio_level_response_length = " << gpio_level_response_length << " < (" << length << ")))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = request.has_chars(" << length << ")))");
        }
        LOGGER_IS_LOGGED_INFO("(!(err = extends::default_prepare_to_process_unknown_response_run(response, argc, argv, env)))...");
        if (!(err = extends::default_prepare_to_process_unknown_response_run(response, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::default_prepare_to_process_unknown_response_run(response, argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on(!(" << err << " = extends::default_prepare_to_process_unknown_response_run(response, argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on...write_option...
    virtual int on_get_write_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        uint8_t value = this->gpio_level();
        set_gpio_write_request_value(value);
        return err;
    }
    virtual int on_set_write_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            const string_t arg(optarg);
            uint8_t value = 0;
            if (0 <= (value = (uint8_t)arg.to_unsigned())) {
                set_gpio_write_request_value(value);
            } else {}
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...read_option...
    virtual int on_get_read_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        uint8_t number = this->read_gpio();
        set_gpio_read_request_number(number);
        return err;
    }
    virtual int on_set_read_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            const string_t arg(optarg);
            uint8_t number = 0;
            if (0 <= (number = (uint8_t)arg.to_unsigned())) {
                set_gpio_read_request_number(number);
            } else {}
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...number_option...
    virtual int on_set_number_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            const string_t arg(optarg);
            uint8_t number = 0;
            if (0 <= (number = (uint8_t)arg.to_unsigned())) {
                set_read_gpio(number);
                set_write_gpio(number);
                set_gpio_number(number);
            } else {}
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...gpio...request
    /// ...
    virtual string_t& set_gpio_write_request_on() {
        return set_gpio_write_request(true);
    }
    virtual string_t& set_gpio_write_request_off() {
        return set_gpio_write_request(false);
    }
    virtual string_t& set_gpio_write_request(const bool& on) {
        const uint8_t value = ((on)?(this->gpio_level_on()):(this->gpio_level_off()));
        return set_gpio_write_request_value(value);
    }
    virtual string_t& set_gpio_write_request_value(const uint8_t& value) {
        string_t& request = this->request();
        const string_t& begin_gpio_write_request = this->begin_gpio_write_request(),
                        middle_gpio_write_request = this->middle_gpio_write_request(),
                        end_gpio_write_request = this->end_gpio_write_request();
        size_t begin_gpio_write_request_length = 0,
               middle_gpio_write_request_length = 0,
               end_gpio_write_request_length = 0,
               gpio_write_request_length = 0,
               length = 0;

        gpio_write_request_length = (begin_gpio_write_request_length = begin_gpio_write_request.length());
        gpio_write_request_length += (middle_gpio_write_request_length = middle_gpio_write_request.length());
        gpio_write_request_length += (end_gpio_write_request_length = end_gpio_write_request.length());
        
        if (0 < (length = gpio_write_request_length)) {
            string_t& gpio_request = this->gpio_request();
            uint8_t number = this->write_gpio();
            unsigned_to_string pin_value(value), pin_number(number);
            
            gpio_request.assign(begin_gpio_write_request);
            gpio_request.append(pin_number);
            gpio_request.append(middle_gpio_write_request);
            gpio_request.append(pin_value);
            gpio_request.append(end_gpio_write_request);
            this->set_request(gpio_request);
        } else {
        }
        return (string_t&)request;
    }
    virtual string_t& begin_gpio_write_request() const {
        return (string_t&)begin_gpio_write_request_;
    }
    virtual string_t& middle_gpio_write_request() const {
        return (string_t&)middle_gpio_write_request_;
    }
    virtual string_t& end_gpio_write_request() const {
        return (string_t&)end_gpio_write_request_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& set_gpio_read_request() {
        uint8_t number = this->read_gpio();
        return set_gpio_read_request_number(number);
    }
    virtual string_t& set_gpio_read_request_number(const uint8_t& number) {
        string_t& request = this->request();
        const string_t& begin_gpio_read_request = this->begin_gpio_read_request(),
                        middle_gpio_read_request = this->middle_gpio_read_request(),
                        end_gpio_read_request = this->end_gpio_read_request();
        size_t begin_gpio_read_request_length = 0,
               middle_gpio_read_request_length = 0,
               end_gpio_read_request_length = 0,
               gpio_read_request_length = 0,
               length = 0;

        gpio_read_request_length = (begin_gpio_read_request_length = begin_gpio_read_request.length());
        gpio_read_request_length += (middle_gpio_read_request_length = middle_gpio_read_request.length());
        gpio_read_request_length += (end_gpio_read_request_length = end_gpio_read_request.length());
        
        if (0 < (length = gpio_read_request_length)) {
            string_t& gpio_request = this->gpio_request();
            unsigned_to_string pin_number(number);
            
            gpio_request.assign(begin_gpio_read_request);
            gpio_request.append(pin_number);
            gpio_request.append(middle_gpio_read_request);
            gpio_request.append(end_gpio_read_request);
            this->set_request(gpio_request);
        } else {
        }
        return (string_t&)request;
    }
    virtual string_t& begin_gpio_read_request() const {
        return (string_t&)begin_gpio_read_request_;
    }
    virtual string_t& middle_gpio_read_request() const {
        return (string_t&)middle_gpio_read_request_;
    }
    virtual string_t& end_gpio_read_request() const {
        return (string_t&)end_gpio_read_request_;
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
    virtual string_t& begin_gpio_level_response() const {
        return (string_t&)begin_gpio_level_response_;
    }
    virtual string_t& middle_gpio_level_response() const {
        return (string_t&)middle_gpio_level_response_;
    }
    virtual string_t& end_gpio_level_response() const {
        return (string_t&)end_gpio_level_response_;
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
    //////////////////////////////////////////////////////////////////////////
    virtual int& set_gpio_number(const int& to) {
        int& gpio_number = this->gpio_number();
        gpio_number = to;
        return gpio_number;
    }
    virtual int& gpio_number() const {
        return (int&)gpio_number_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual bool& set_gpio_initialized(const bool& to = true) {
        bool& gpio_initialized = this->gpio_initialized();
        gpio_initialized = to;
        return gpio_initialized;
    }
    virtual bool& gpio_initialized() const {
        return (bool&)gpio_initialized_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual bool& set_gpio_initialize(const bool& to = true) {
        bool& gpio_initialize = this->gpio_initialize();
        gpio_initialize = to;
        return gpio_initialize;
    }
    virtual bool& gpio_initialize() const {
        return (bool&)gpio_initialize_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual bool& set_gpio_finalized(const bool& to = true) {
        bool& gpio_finalized = this->gpio_finalized();
        gpio_finalized = to;
        return gpio_finalized;
    }
    virtual bool& gpio_finalized() const {
        return (bool&)gpio_finalized_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual bool& set_gpio_finalize(const bool& to = true) {
        bool& gpio_finalize = this->gpio_finalize();
        gpio_finalize = to;
        return gpio_finalize;
    }
    virtual bool& gpio_finalize() const {
        return (bool&)gpio_finalize_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual gpio_implement_t& gpio_implement() const {
        return (gpio_implement_t&)gpio_implement_;
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
    virtual string_t& system_state_unknown_response() const {
        return (string_t&)system_state_unknown_response_;
    }
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
    string_t system_restart_response_, system_start_response_, system_stop_response_, system_state_unknown_response_;
    string_t invalid_request_, invalid_response_;
    string_t unknown_request_, unknown_response_;
    string_t request_, response_;

    string_t begin_gpio_write_request_, middle_gpio_write_request_, end_gpio_write_request_, 
             begin_gpio_read_request_, middle_gpio_read_request_, end_gpio_read_request_, gpio_request_, 
             begin_gpio_level_response_, middle_gpio_level_response_, end_gpio_level_response_, gpio_response_;
    int read_gpio_, write_gpio_, gpio_number_,
        gpio_level_on_, gpio_level_off_, gpio_level_unknown_,
        read_gpio_level_, write_gpio_level_, gpio_level_,
        read_gpio_mode_, write_gpio_mode_;
    bool gpio_initialized_, gpio_initialize_, 
         gpio_finalized_, gpio_finalize_; 
    gpio_implement_t gpio_implement_;
}; /// class maint 
typedef maint<> main;

} /// namespace base 
} /// namespace gpio 
} /// namespace control 
} /// namespace perifra 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_HPP

