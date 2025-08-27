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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 5/11/2025, 8/26/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_OPT_HPP

#include "xos/app/console/protocol/http/cgi/main.hpp"
#include "xos/app/console/network/sockets/protocol/gpio/client/main.hpp"
#include "xos/app/console/network/sockets/protocol/crlf2/client/main.hpp"
#include "xos/app/console/gpio/base/onoff/main.hpp"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPT "gpio-on"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPTUSE "turn gpio on"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPTVAL_S "N"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPTVAL_C 'N'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPT "gpio-off"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPTUSE "turn gpio off"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPTVAL_S "F"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPTVAL_C 'F'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPT "gpio-state"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPTUSE "get gpio state"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPTVAL_S "S"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPT "system-info"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTUSE "get system info"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTVAL_S "I"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTVAL_C 'I'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPT "system-restart"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTUSE "restart system"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTVAL_S "R"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPT "system-start"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTUSE "start system"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTVAL_S "R"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPT "system-stop"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTUSE "stop system"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTVAL_S "T"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTVAL_C 'T'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CGI_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CGI_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace perifra {
namespace control {
namespace gpio {
namespace pigpio {
namespace http {
namespace cgi {
namespace client {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::http::cgi::maint
 <xos::app::console::protocol::http::cgi::main_optt
 <xos::app::console::protocol::http::cgi::base::maint
 <xos::app::console::protocol::http::cgi::base::main_optt
 <xos::app::console::network::sockets::protocol::gpio::client::maint
 <xos::app::console::network::sockets::protocol::gpio::client::main_optt
 <xos::app::console::network::sockets::protocol::gpio::base::maint
 <xos::app::console::network::sockets::protocol::gpio::base::main_optt
 <xos::app::console::network::sockets::protocol::crlf2::client::maint
 <xos::app::console::network::sockets::protocol::crlf2::client::main_optt
 <xos::app::console::network::sockets::protocol::crlf2::base::maint
 <xos::app::console::network::sockets::protocol::crlf2::base::main_optt
 <xos::app::console::network::sockets::protocol::client::maint
 <xos::app::console::network::sockets::protocol::client::main_optt
 <xos::app::console::network::sockets::protocol::base::maint
 <xos::app::console::network::sockets::protocol::base::main_optt
 <xos::app::console::protocol::perifra::control::gpio::client::maint
 <xos::app::console::protocol::perifra::control::gpio::client::main_optt
 <xos::app::console::protocol::perifra::control::gpio::base::maint
 <xos::app::console::protocol::perifra::control::gpio::base::main_optt
 <xos::app::console::protocol::crlf2::client::maint
 <xos::app::console::protocol::crlf2::client::main_optt
 <xos::app::console::protocol::crlf2::base::maint
 <xos::app::console::protocol::crlf2::base::main_optt
 <xos::app::console::protocol::client::maint
 <xos::app::console::protocol::client::main_optt
 <xos::app::console::protocol::base::maint
 <xos::app::console::protocol::base::main_optt
 <> > > > > > > > > > > > > > > > > > > > > > > > > > > >,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

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
    main_optt()
    : run_(0), 

      response_was_output_(false), 
      response_dont_output_(false),
      
      gpio_on_option_(XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_ON_OPT),
      gpio_off_option_(XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_OFF_OPT),
      gpio_state_option_(XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_NETWORK_CLIENT_MAIN_POWER_STATE_OPT),
    
      system_info_option_(XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPT),
      system_restart_option_(XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPT),
      system_start_option_(XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_START_OPT),
      system_stop_option_(XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPT) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt &copy) {
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
    /// ...any_action_console_gateway_run
    virtual int any_action_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t &request = this->request();
        
        set_response_was_output(false);
        LOGGER_IS_LOGGED_INFO("(!(err = this->all_connect_run(argc, argv, env)))...");
        if (!(err = this->all_connect_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->all_connect_run(argc, argv, env)))");

            LOGGER_IS_LOGGED_INFO("(!(response_was_output()))...");
            if (!(response_was_output())) {
                LOGGER_IS_LOGGED_INFO("...(!(response_was_output()))");
                LOGGER_IS_LOGGED_INFO("(!(response_dont_output()))...");
                if (!(response_dont_output())) {
                    LOGGER_IS_LOGGED_INFO("...(!(response_dont_output()))");

                    LOGGER_IS_LOGGED_INFO("(!(err = this->all_output_response_run(request, argc, argv, env)))...");
                    if (!(err = this->all_output_response_run(request, argc, argv, env))) {
                        LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->all_output_response_run(request, argc, argv, env)))");
                    } else {
                        LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = this->all_output_response_run(request, argc, argv, env)))");
                    }
                } else {
                }
            } else {
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = this->all_connect_run(argc, argv, env)))");
            LOGGER_IS_LOGGED_INFO("(!(err = this->all_console_gateway_out_run(argc, argv, env)))...");
            if (!(err = this->all_console_gateway_out_run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->all_console_gateway_out_run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = this->all_console_gateway_out_run(argc, argv, env)))");
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...console_gateway_run
    virtual int gpio_on_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->set_gpio_write_request_on()...");
        this->set_gpio_write_request_on();

        LOGGER_IS_LOGGED_INFO("(!(err = any_action_console_gateway_run(argc, argv, env)))...");
        if (!(err = any_action_console_gateway_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...console_gateway_run
    virtual int gpio_off_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->set_gpio_write_request_off()...");
        this->set_gpio_write_request_off();

        LOGGER_IS_LOGGED_INFO("(!(err = any_action_console_gateway_run(argc, argv, env)))...");
        if (!(err = any_action_console_gateway_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...console_gateway_run
    virtual int gpio_state_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->set_gpio_read_request()...");
        this->set_gpio_read_request();

        LOGGER_IS_LOGGED_INFO("(!(err = any_action_console_gateway_run(argc, argv, env)))...");
        if (!(err = any_action_console_gateway_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...console_gateway_run
    virtual int system_restart_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->set_system_restart_request()...");
        this->set_system_restart_request();

        LOGGER_IS_LOGGED_INFO("(!(err = any_action_console_gateway_run(argc, argv, env)))...");
        if (!(err = any_action_console_gateway_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...console_gateway_run
    virtual int system_start_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->set_system_start_request()...");
        this->set_system_start_request();

        LOGGER_IS_LOGGED_INFO("(!(err = any_action_console_gateway_run(argc, argv, env)))...");
        if (!(err = any_action_console_gateway_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...console_gateway_run
    virtual int system_stop_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->set_system_stop_request()...");
        this->set_system_stop_request();

        LOGGER_IS_LOGGED_INFO("(!(err = any_action_console_gateway_run(argc, argv, env)))...");
        if (!(err = any_action_console_gateway_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...action_console_gateway_run
    virtual int action_console_gateway_run(const string_t& action, int argc, char_t** argv, char_t** env) {
        int err = 0;
        int unequal = 0;
        const string_t& gpio_on_option = this->gpio_on_option();

        if (!(unequal = gpio_on_option.compare(action))) {
            err = gpio_on_console_gateway_run(argc, argv, env);
        } else {
            const string_t& gpio_off_option = this->gpio_off_option();
    
            if (!(unequal = gpio_off_option.compare(action))) {
                err = gpio_off_console_gateway_run(argc, argv, env);
            } else {
                const string_t& gpio_state_option = this->gpio_state_option();
        
                if (!(unequal = gpio_state_option.compare(action))) {
                    err = gpio_state_console_gateway_run(argc, argv, env);
                } else {
                    const string_t& system_restart_option = this->system_restart_option();
            
                    if (!(unequal = system_restart_option.compare(action))) {
                        err = system_restart_console_gateway_run(argc, argv, env);
                    } else {
                        const string_t& system_start_option = this->system_start_option();

                        if (!(unequal = system_start_option.compare(action))) {
                            err = system_start_console_gateway_run(argc, argv, env);
                        } else {
                            const string_t& system_stop_option = this->system_stop_option();

                            if (!(unequal = system_stop_option.compare(action))) {
                                err = system_stop_console_gateway_run(argc, argv, env);
                            } else {
                                err = this->all_console_gateway_out_run(argc, argv, env);
                            }
                        }
                    }
                }
            }
        }
        return err;
    }
    virtual int before_action_console_gateway_run(const string_t& action, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_action_console_gateway_run(const string_t& action, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_action_console_gateway_run(const string_t& action, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_action_console_gateway_run(action, argc, argv, env))) {
            int err2 = 0;
            err = action_console_gateway_run(action, argc, argv, env);
            if ((err2 = after_action_console_gateway_run(action, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& host_form_field_name = this->host_form_field_name();
        const string_t& port_form_field_name = this->port_form_field_name();
        const string_t& redirect_form_field_name = this->redirect_form_field_name();
        const string_t& action_form_field_name = this->action_form_field_name();
        string_t& host_form_field_value = this->host_form_field_value();
        string_t& port_form_field_value = this->port_form_field_value();
        string_t& redirect_form_field_value = this->redirect_form_field_value();
        string_t& action_form_field_value = this->action_form_field_value();
        const char_t* chars = 0;
        
        LOGGER_IS_LOGGED_INFO("((chars = this->first_query_or_form_field_named_chars(host_form_field_name)))...");
        if ((chars = this->first_query_or_form_field_named_chars(host_form_field_name))) {
            LOGGER_IS_LOGGED_INFO("host_form_field_value.assign(chars)...");
            host_form_field_value.assign(chars);
            this->set_host(host_form_field_value);
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = this->first_query_or_form_field_named_chars(host_form_field_name)))");
        }
        LOGGER_IS_LOGGED_INFO("((chars = this->first_query_or_form_field_named_chars(port_form_field_name)))...");
        if ((chars = this->first_query_or_form_field_named_chars(port_form_field_name))) {
            LOGGER_IS_LOGGED_INFO("port_form_field_value.assign(chars)...");
            port_form_field_value.assign(chars);
            this->set_port(port_form_field_value.to_unsigned());
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = this->first_query_or_form_field_named_chars(port_form_field_name)))");
        }
        LOGGER_IS_LOGGED_INFO("((chars = this->first_query_or_form_field_named_chars(redirect_form_field_name)))...");
        if ((chars = this->first_query_or_form_field_named_chars(redirect_form_field_name))) {
            LOGGER_IS_LOGGED_INFO("redirect_form_field_value.assign(chars)...");
            redirect_form_field_value.assign(chars);
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = this->first_query_or_form_field_named_chars(redirect_form_field_name)))");
        }
        LOGGER_IS_LOGGED_INFO("((chars = this->first_query_or_form_field_named_chars(action_form_field_name)))...");
        if ((chars = this->first_query_or_form_field_named_chars(action_form_field_name))) {
            LOGGER_IS_LOGGED_INFO("action_form_field_value.assign(chars)...");
            action_form_field_value.assign(chars);
            LOGGER_IS_LOGGED_INFO("err = this->all_action_console_gateway_run(action_form_field_value, argc, argv, env)...");
            err = this->all_action_console_gateway_run(action_form_field_value, argc, argv, env);
        } else {
            LOGGER_IS_LOGGED_INFO("err = this->all_console_gateway_out_run(argc, argv, env)...");
            err = this->all_console_gateway_out_run(argc, argv, env);
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...console_gateway_out_run
    virtual int before_console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& redirect_form_field_value = this->redirect_form_field_value();
        const char_t* chars = 0; size_t length = 0;
        
        LOGGER_IS_LOGGED_INFO("((chars = this->redirect_form_field_value_chars(length)))...");
        if ((chars = this->redirect_form_field_value_chars(length))) {
            LOGGER_IS_LOGGED_INFO("...((\"" << chars << "\" = this->redirect_form_field_value_chars(" << length << ")))");
            this->set_content_type(this->redirect_content_type());
            this->out(this->before_redirect_content());
            this->out(chars);
            this->out(this->between_redirect_content());
            if ((this->content_type_is_html()) || (this->content_type_is_xml())) {
                this->outln("<pre>");
            } else {}
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = this->redirect_form_field_value_chars(length)))");
            if (!(err = extends::before_console_gateway_out_run(argc, argv, env))) {} else {}
        }
        return err;
    }
    virtual int after_console_gateway_out_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& redirect_form_field_value = this->redirect_form_field_value();
        const char_t* chars = 0; size_t length = 0;
        
        LOGGER_IS_LOGGED_INFO("((chars = this->redirect_form_field_value_chars(length)))...");
        if ((chars = this->redirect_form_field_value_chars(length))) {
            LOGGER_IS_LOGGED_INFO("...((\"" << chars << "\" = this->redirect_form_field_value_chars(" << length << ")))");
            if ((this->content_type_is_html()) || (this->content_type_is_xml())) {
                this->outln("</pre>");
            } else {}
            this->out(this->after_redirect_content());
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = this->redirect_form_field_value_chars(length)))");
            if (!(err = extends::after_console_gateway_out_run(argc, argv, env))) {} else {}
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...output_response_run
    virtual int output_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_console_gateway_out_run(argc, argv, env))) {
            this->outln(response);
            if (!(err = after_console_gateway_out_run(argc, argv, env))) {
                set_response_was_output(true);                
            } else {}
        } else {}
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...response_was_output...
    virtual bool& set_response_was_output(const bool& to) {
        bool& response_was_output = this->response_was_output();
        response_was_output = to;
        return response_was_output;
    }
    virtual bool& response_was_output() const {
        return (bool&) response_was_output_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...response_dont_output...
    virtual bool& set_response_dont_output(const bool& to) {
        bool& response_dont_output = this->response_dont_output();
        response_dont_output = to;
        return response_dont_output;
    }
    virtual bool& response_dont_output() const {
        return (bool&) response_dont_output_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...gpio...option...
    virtual string_t& set_gpio_on_option(const string_t& to) {
        string_t& gpio_on_option = this->gpio_on_option();
        gpio_on_option.assign(to);
        return gpio_on_option;
    }
    virtual string_t& gpio_on_option() const {
        return (string_t&) gpio_on_option_;
    }
    virtual string_t& set_gpio_off_option(const string_t& to) {
        string_t& gpio_off_option = this->gpio_off_option();
        gpio_off_option.assign(to);
        return gpio_off_option;
    }
    virtual string_t& gpio_off_option() const {
        return (string_t&) gpio_off_option_;
    }
    virtual string_t& set_gpio_state_option(const string_t& to) {
        string_t& gpio_state_option = this->gpio_state_option();
        gpio_state_option.assign(to);
        return gpio_state_option;
    }
    virtual string_t& gpio_state_option() const {
        return (string_t&) gpio_state_option_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...system...option...
    virtual string_t& set_system_info_option(const string_t& to) {
        string_t& system_info_option = this->system_info_option();
        system_info_option.assign(to);
        return system_info_option;
    }
    virtual string_t& system_info_option() const {
        return (string_t&) system_info_option_;
    }
    virtual string_t& set_system_restart_option(const string_t& to) {
        string_t& system_restart_option = this->system_restart_option();
        system_restart_option.assign(to);
        return system_restart_option;
    }
    virtual string_t& system_restart_option() const {
        return (string_t&) system_restart_option_;
    }
    virtual string_t& set_system_start_option(const string_t& to) {
        string_t& system_start_option = this->system_start_option();
        system_start_option.assign(to);
        return system_start_option;
    }
    virtual string_t& system_start_option() const {
        return (string_t&) system_start_option_;
    }
    virtual string_t& set_system_stop_option(const string_t& to) {
        string_t& system_stop_option = this->system_stop_option();
        system_stop_option.assign(to);
        return system_stop_option;
    }
    virtual string_t& system_stop_option() const {
        return (string_t&) system_stop_option_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    bool response_was_output_, response_dont_output_;
    string_t gpio_on_option_, gpio_off_option_, gpio_state_option_,
             system_info_option_, system_restart_option_, system_start_option_, system_stop_option_;
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace client 
} /// namespace cgi 
} /// namespace http 
} /// namespace pigpio 
} /// namespace gpio 
} /// namespace control 
} /// namespace perifra 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_PIGPIO_HTTP_CGI_CLIENT_MAIN_OPT_HPP
