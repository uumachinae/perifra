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
///   Date: 5/6/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_ONOFF_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_ONOFF_BASE_MAIN_HPP

#include "xos/app/console/protocol/perifra/control/gpio/onoff/base/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace perifra {
namespace control {
namespace gpio {
namespace onoff {
namespace base {

/// class maint
template 
<class TExtends = xos::app::console::protocol::perifra::control::gpio::onoff::base::main_optt<>,  class TImplements = typename TExtends::implements>

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
      
      power_on_request_("{\"control\":{\"power\":{\"set_power_state\":{\"state\":\"on\"}}}}"), 
      power_off_request_("{\"control\":{\"power\":{\"set_power_state\":{\"state\":\"off\"}}}}"),
      power_state_request_("{\"control\":{\"power\":{\"get_power_state\":{\"state\":\"all\"}}}}"),

      power_on_response_("{\"control\":{\"power\":{\"power_state\":{\"state\":\"on\"}}}}"), 
      power_off_response_("{\"control\":{\"power\":{\"power_state\":{\"state\":\"off\"}}}}"),
      power_unknown_response_("{\"control\":{\"power\":{\"power_state\":{\"state\":\"unknown\"}}}}"),
    
      system_hello_request_("{\"control\":{\"system\":{\"system_action\":{\"action\":\"hello\"}}}}"),
      system_restart_request_("{\"control\":{\"system\":{\"system_action\":{\"action\":\"restart\"}}}}"),
      system_start_request_("{\"control\":{\"system\":{\"system_action\":{\"action\":\"start\"}}}}"),
      system_stop_request_("{\"control\":{\"system\":{\"system_action\":{\"action\":\"stop\"}}}}"),

      system_hello_response_("{\"control\":{\"system\":\"hello\"}}"),
      system_restart_response_("{\"control\":{\"system\":\"restart\"}}"),
      system_start_response_("{\"control\":{\"system\":\"start\"}}"),
      system_stop_response_("{\"control\":{\"system\":\"stop\"}}"),
      system_state_unknown_response_("{\"control\":{\"system\":{\"system_state\":{\"state\":\"unknown\"}}}}"),

      system_info_request_("{\"control\":{\"system\":{\"get_system_info\":{\"info\":\"all\"}}}}"),
      system_info_response_
      ("{\"control\":{\"system\":{\"system_info\":"
       "{\"hardware_type\":\"power.control.switch\"},"
       "{\"hardware_model\":\"power.control.switch\"},"
       "{\"hardware_version\":\"power-control-switch-0.0.0-4/28/2025\"},"
       "{\"software_version\":\"power-control-switch-0.0.0-4/28/2025\"},"
       "{\"device_uuid\":\"685BF690-2476-11F0-8C89-2DC5D1B61074\"},"
       "{\"hardware_uuid\":\"720E85F4-2476-11F0-86F9-B9C955FDD95D\"},"
       "{\"firmware_uuid\":\"7F044B4A-2476-11F0-8B53-E7500F8D1C27\"},"
       "{\"oem_uuid\":\"95BD336A-2476-11F0-8A1D-97AC3A782B53\"},"
       "{\"ethernet_address\":\"00:00:00:00:00:00\"}},"
       "{\"device_name\":\"power-control-switch\"},"
       "{\"device_alias\":\"power-control-switch\"}}}}"),
      system_info_unknown_response_("{\"control\":{\"system\":{\"system_info\":{\"info\":\"unknown\"}}}}"),
      
      invalid_request_("{\"control\":{\"request\":\"invalid\"}}"), 
      invalid_response_(invalid_request_),

      unknown_request_("{\"control\":{\"request\":\"unknown\"}}"), 
      unknown_response_(unknown_request_), 
      
      hello_request_(system_hello_request_), 
      hello_response_(system_hello_response_),

      request_(hello_request_), 
      response_(hello_response_) {
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
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...power...request
    /// ...
    virtual string_t& set_power_on_request() {
        string_t& to = this->power_on_request();
        this->set_request(to);
        return this->request();
    }
    virtual string_t& power_on_request() const {
        return (string_t&)power_on_request_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& set_power_off_request() {
        string_t& to = this->power_off_request();
        this->set_request(to);
        return this->request();
    }
    virtual string_t& power_off_request() const {
        return (string_t&)power_off_request_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& set_power_state_request() {
        string_t& to = this->power_state_request();
        this->set_request(to);
        return this->request();
    }
    virtual string_t& power_state_request() const {
        return (string_t&)power_state_request_;
    }
    /// ...
    /// ...power...request
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...power...response
    /// ...
    virtual string_t& power_on_response() const {
        return (string_t&)power_on_response_;
    }
    virtual string_t& power_off_response() const {
        return (string_t&)power_off_response_;
    }
    virtual string_t& power_unknown_response() const {
        return (string_t&)power_unknown_response_;
    }
    /// ...
    /// ...power...response
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    virtual string_t& set_system_hello_request() {
        string_t& to = this->system_hello_request();
        this->set_request(to);
        return this->request();
    }
    virtual string_t& system_hello_request() const {
        return (string_t&)system_hello_request_;
    }
    virtual string_t& system_hello_response() const {
        return (string_t&)system_hello_response_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& set_system_restart_request() {
        string_t& to = this->system_restart_request();
        this->set_request(to);
        return this->request();
    }
    virtual string_t& system_restart_request() const {
        return (string_t&)system_restart_request_;
    }
    virtual string_t& system_restart_response() const {
        return (string_t&)system_restart_response_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& set_system_stop_request() {
        string_t& to = this->system_stop_request();
        this->set_request(to);
        return this->request();
    }
    virtual string_t& system_stop_request() const {
        return (string_t&)system_stop_request_;
    }
    virtual string_t& system_stop_response() const {
        return (string_t&)system_stop_response_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& set_system_info_request() {
        string_t& to = this->system_info_request();
        this->set_request(to);
        return this->request();
    }
    virtual string_t& system_info_request() const {
        return (string_t&)system_info_request_;
    }
    virtual string_t& system_info_response() const {
        return (string_t&)system_info_response_;
    }
    virtual string_t& system_info_unknown_response() const {
        return (string_t&)system_info_unknown_response_;
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
    ///...unknown...
    virtual string_t& unknown_request() const {
        return (string_t&)unknown_request_;
    }
    virtual string_t& unknown_response() const {
        return (string_t&)unknown_response_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    ///...hello...
    virtual string_t& hello_request() const {
        return (string_t&)hello_request_;
    }
    virtual string_t& hello_response() const {
        return (string_t&)hello_response_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& request() const {
        return (string_t&)request_;
    }
    virtual string_t& response() const {
        return (string_t&)response_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    string_t power_on_request_, power_off_request_, power_state_request_;
    string_t power_on_response_, power_off_response_, power_unknown_response_;
    string_t system_hello_request_, system_restart_request_, system_start_request_, system_stop_request_;
    string_t system_hello_response_, system_restart_response_, system_start_response_, system_stop_response_, system_state_unknown_response_;
    string_t system_info_request_, system_info_response_, system_info_unknown_response_;
    string_t invalid_request_, invalid_response_;
    string_t unknown_request_, unknown_response_;
    string_t hello_request_, hello_response_;
    string_t request_, response_;
}; /// class maint 
typedef maint<> main;

} /// namespace base 
} /// namespace onoff 
} /// namespace gpio 
} /// namespace control 
} /// namespace perifra 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_ONOFF_BASE_MAIN_HPP

