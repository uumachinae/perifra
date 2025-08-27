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
#ifndef XOS_APP_CONSOLE_PROTOCOL_PIGPIO_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_SERVER_MAIN_HPP

#include "xos/app/console/protocol/pigpio/server/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace pigpio {
namespace server {

/// class maint
template 
<class TExtends = xos::app::console::protocol::pigpio::server::main_optt<>,  class TImplements = typename TExtends::implements>

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
    maint(): run_(0) {
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
        LOGGER_IS_LOGGED_INFO("gpioInitialise()...");
        gpioInitialise();
        LOGGER_IS_LOGGED_INFO("...gpioInitialise()");
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...gpio_finalize_run
    virtual int gpio_finalize_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("gpioTerminate()...");
        gpioTerminate();
        LOGGER_IS_LOGGED_INFO("...gpioTerminate()");
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_gpioRead_request_run
    virtual int prepare_response_to_gpioRead_request_run
    (string_t& response, const string_t& request, const int& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0;

        LOGGER_IS_LOGGED_INFO("response.assign(\"" << request << "\")...");
        response.assign(request);
        LOGGER_IS_LOGGED_INFO("(!(err = gpioSetMode(gpio, this->read_gpio_mode())))...");
        if (!(err = gpioSetMode(gpio, this->read_gpio_mode()))) {

            LOGGER_IS_LOGGED_INFO("(0 <= (level = gpioRead(" << gpio << ")))...");
            const int level = gpioRead(gpio); 
            LOGGER_IS_LOGGED_INFO("(!(err = (0 > " << level << ")))...");
            if (!(err = (0 > level))) {
                const signed_to_string gpioLevel_response_gpio(gpio), 
                                       gpioLevel_response_level(level);
                const string_t& begin_gpioLevel_response = this->begin_gpioLevel_response(),
                                middle_gpioLevel_response = this->middle_gpioLevel_response(),
                                end_gpioLevel_response = this->end_gpioLevel_response();

                LOGGER_IS_LOGGED_INFO("...(0 <= (" << level << " = gpioRead(" << gpio << ")))");
                response.assign(begin_gpioLevel_response);
                response.append(gpioLevel_response_gpio);
                response.append(middle_gpioLevel_response);
                response.append(gpioLevel_response_level);
                response.append(end_gpioLevel_response);
                LOGGER_IS_LOGGED_INFO("...response = \"" << response << "\"");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (0 <= (" << level << " = gpioRead(" << gpio << ")))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = gpioSetMode(gpio, this->read_gpio_mode())))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...prepare_response_to_gpioWrite_request_run
    virtual int prepare_response_to_gpioWrite_request_run
    (string_t& response, const string_t& request, const int& gpio, const int& level, int argc, char_t** argv, char_t** env) {
        int err = 0;

        LOGGER_IS_LOGGED_INFO("response.assign(\"" << request << "\")...");
        response.assign(request);
        LOGGER_IS_LOGGED_INFO("(!(err = gpioSetMode(" << gpio << ", this->write_gpio_mode())))...");
        if (!(err = gpioSetMode(gpio, this->write_gpio_mode()))) {

            LOGGER_IS_LOGGED_INFO("(!(err = gpioWrite(" << gpio << ", " << level << ")))...");
            if (!(err = gpioWrite(gpio, level))) {
                bool only_gpioWrite = false;

                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = gpioWrite(" << gpio << ", " << level << ")))");
                LOGGER_IS_LOGGED_INFO("(!(only_gpioWrite))...");
                if (!(only_gpioWrite)) {
                    const int& write_gpio = this->write_gpio();

                    LOGGER_IS_LOGGED_INFO("(!(" << gpio << " != " << write_gpio << "))...");
                    if (!(gpio != write_gpio)) {
                        const int& read_gpio = this->read_gpio();
                        const int& gpio = read_gpio;

                        LOGGER_IS_LOGGED_INFO("(!(err = gpioSetMode(" << err << ", this->read_gpio_mode())))...");
                        if (!(err = gpioSetMode(gpio, this->read_gpio_mode()))) {

                            LOGGER_IS_LOGGED_INFO("(0 <= (level = gpioRead(" << gpio << ")))...");
                            const int level = gpioRead(gpio);
                            if (!(err = (0 > level))) {
                                const string_t& begin_gpioLevel_response = this->begin_gpioLevel_response(),
                                                middle_gpioLevel_response = this->middle_gpioLevel_response(),
                                                end_gpioLevel_response = this->end_gpioLevel_response();
                                const signed_to_string gpioLevel_response_gpio(gpio), 
                                                       gpioLevel_response_level(level);

                                LOGGER_IS_LOGGED_INFO("...(0 <= (" << level << " = gpioRead(" << gpio << ")))");
                                response.assign(begin_gpioLevel_response);
                                response.append(gpioLevel_response_gpio);
                                response.append(middle_gpioLevel_response);
                                response.append(gpioLevel_response_level);
                                response.append(end_gpioLevel_response);
                            } else {
                                LOGGER_IS_LOGGED_INFO("...failed on (0 <= (" << level << " = gpioRead(" << gpio << ")))");
                            }
                        } else {
                            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = gpioSetMode(" << gpio << ", this->read_gpio_mode())))");
                        }
                    } else {
                        LOGGER_IS_LOGGED_INFO("...failed on (!(" << gpio << " != " << write_gpio << "))");
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (!(only_gpioWrite))");
                }
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = gpioWrite(" << gpio << ", " << level << ")))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = gpioSetMode(" << gpio << ", this->write_gpio_mode())))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class maint 
typedef maint<> main;

} /// namespace server 
} /// namespace pigpio 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_PIGPIO_SERVER_MAIN_HPP

