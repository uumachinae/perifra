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
///   Date: 5/9/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_GPIO_BASE_ONOFF_MAIN_HPP
#define XOS_APP_CONSOLE_GPIO_BASE_ONOFF_MAIN_HPP

#include "xos/app/console/gpio/base/onoff/main_opt.hpp"

#define XOS_APP_CONSOLE_GPIO_ONOFF_MSECONDS_MIN 300
#define XOS_APP_CONSOLE_GPIO_ONOFF_MSECONDS_MAX 5000
#define XOS_APP_CONSOLE_GPIO_ONOFF_MSECONDS 500
#define XOS_APP_CONSOLE_GPIO_ONOFF_REPEAT 0

#define XOS_APP_CONSOLE_GPIO_ONOFF_ON_VALUE 1
#define XOS_APP_CONSOLE_GPIO_ONOFF_OFF_VALUE 0
#define XOS_APP_CONSOLE_GPIO_ONOFF_IS_ON_VALUE 1
#define XOS_APP_CONSOLE_GPIO_ONOFF_IS_OFF_VALUE 1

#define XOS_APP_CONSOLE_GPIO_ONOFF_ON_PIN 17
#define XOS_APP_CONSOLE_GPIO_ONOFF_OFF_PIN 27
#define XOS_APP_CONSOLE_GPIO_ONOFF_IS_ON_PIN 22
#define XOS_APP_CONSOLE_GPIO_ONOFF_IS_OFF_PIN 23

namespace xos {
namespace app {
namespace console {
namespace gpio {
namespace base {
namespace onoff {

/// class maint
template 
<class TExtends = xos::app::console::gpio::base::onoff::main_optt<>,  class TImplements = typename TExtends::implements>

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
      
      repeat_(XOS_APP_CONSOLE_GPIO_ONOFF_REPEAT), 
      min_mseconds_pin_on_(XOS_APP_CONSOLE_GPIO_ONOFF_MSECONDS_MIN), max_mseconds_pin_on_(XOS_APP_CONSOLE_GPIO_ONOFF_MSECONDS_MAX),  
      default_mseconds_pin_on_(XOS_APP_CONSOLE_GPIO_ONOFF_MSECONDS), mseconds_pin_on_(default_mseconds_pin_on_),

      gpio_on_pin_(XOS_APP_CONSOLE_GPIO_ONOFF_ON_PIN), gpio_off_pin_(XOS_APP_CONSOLE_GPIO_ONOFF_OFF_PIN), 
      gpio_on_value_(XOS_APP_CONSOLE_GPIO_ONOFF_ON_VALUE), gpio_off_value_(XOS_APP_CONSOLE_GPIO_ONOFF_OFF_VALUE),

      gpio_is_on_pin_(XOS_APP_CONSOLE_GPIO_ONOFF_IS_ON_PIN), gpio_is_off_pin_(XOS_APP_CONSOLE_GPIO_ONOFF_IS_OFF_PIN), 
      gpio_is_on_value_(XOS_APP_CONSOLE_GPIO_ONOFF_IS_ON_VALUE), gpio_is_off_value_(XOS_APP_CONSOLE_GPIO_ONOFF_IS_OFF_VALUE),
    
      gpio_is_on_(false), gpio_is_off_(false), gpio_is_active_low_(false) {
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
    /// ...repeat
    virtual signed& set_repeat(signed to) {
        signed& repeat = this->repeat();
        repeat = to;
        return repeat;
    }
    virtual signed& repeat() const {
        return (signed&)repeat_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...mseconds_pin...
    virtual mseconds_t& set_min_mseconds_pin_on(mseconds_t to) {
        mseconds_t& min_mseconds_pin_on = this->min_mseconds_pin_on();
        min_mseconds_pin_on = to;
        return min_mseconds_pin_on;
    }
    virtual mseconds_t& min_mseconds_pin_on() const {
        return (mseconds_t&)min_mseconds_pin_on_;
    }
    virtual mseconds_t& set_max_mseconds_pin_on(mseconds_t to) {
        mseconds_t& max_mseconds_pin_on = this->max_mseconds_pin_on();
        max_mseconds_pin_on = to;
        return max_mseconds_pin_on;
    }
    virtual mseconds_t& max_mseconds_pin_on() const {
        return (mseconds_t&)max_mseconds_pin_on_;
    }
    virtual mseconds_t& set_default_mseconds_pin_on(mseconds_t to) {
        mseconds_t& default_mseconds_pin_on = this->default_mseconds_pin_on();
        default_mseconds_pin_on = to;
        return default_mseconds_pin_on;
    }
    virtual mseconds_t& default_mseconds_pin_on() const {
        return (mseconds_t&)default_mseconds_pin_on_;
    }
    virtual mseconds_t& set_mseconds_pin_on(mseconds_t to) {
        mseconds_t& mseconds_pin_on = this->mseconds_pin_on();
        mseconds_pin_on = to;
        return mseconds_pin_on;
    }
    virtual mseconds_t& mseconds_pin_on() const {
        return (mseconds_t&)mseconds_pin_on_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...pin...
    virtual uint8_t& gpio_on_pin() const {
        return (uint8_t&)gpio_on_pin_;
    }
    virtual uint8_t& gpio_off_pin() const {
        return (uint8_t&)gpio_off_pin_;
    }
    virtual uint8_t& gpio_is_on_pin() const {
        return (uint8_t&)gpio_is_on_pin_;
    }
    virtual uint8_t& gpio_is_off_pin() const {
        return (uint8_t&)gpio_is_off_pin_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...value
    virtual uint8_t& gpio_on_value() const {
        if ((gpio_is_active_low())) {
            return (uint8_t&)gpio_off_value_;
        }
        return (uint8_t&)gpio_on_value_;
    }
    virtual uint8_t& gpio_off_value() const {
        if ((gpio_is_active_low())) {
            return (uint8_t&)gpio_on_value_;
        }
        return (uint8_t&)gpio_off_value_;
    }
    virtual uint8_t& gpio_is_on_value() const {
        if ((gpio_is_active_low())) {
            return (uint8_t&)gpio_is_off_value_;
        }
        return (uint8_t&)gpio_is_on_value_;
    }
    virtual uint8_t& gpio_is_off_value() const {
        if ((gpio_is_active_low())) {
            return (uint8_t&)gpio_is_on_value_;
        }
        return (uint8_t&)gpio_is_off_value_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...is_on
    virtual bool& set_gpio_is_on(const bool& to = true) {
        bool& gpio_is_on = this->gpio_is_on();
        gpio_is_on = to;
        return gpio_is_on;
    }
    virtual bool& gpio_is_on() const {
        return (bool&)gpio_is_on_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...is_off
    virtual bool& set_gpio_is_off(const bool& to = true) {
        bool& gpio_is_off = this->gpio_is_off();
        gpio_is_off = to;
        return gpio_is_off;
    }
    virtual bool& gpio_is_off() const {
        return (bool&)gpio_is_off_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...is_active_low
    virtual bool& set_gpio_is_active_low(const bool& to = true) {
        bool& gpio_is_active_low = this->gpio_is_active_low();
        gpio_is_active_low = to;
        return gpio_is_active_low;
    }
    virtual bool& gpio_is_active_low() const {
        return (bool&)gpio_is_active_low_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    signed repeat_;
    mseconds_t min_mseconds_pin_on_, max_mseconds_pin_on_, default_mseconds_pin_on_, mseconds_pin_on_;
    uint8_t gpio_on_pin_, gpio_off_pin_, gpio_on_value_, gpio_off_value_;
    uint8_t gpio_is_on_pin_, gpio_is_off_pin_, gpio_is_on_value_, gpio_is_off_value_;
    bool gpio_is_on_, gpio_is_off_, gpio_is_active_low_;
}; /// class maint 
typedef maint<> main;

} /// namespace onoff 
} /// namespace base 
} /// namespace gpio 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_GPIO_BASE_ONOFF_MAIN_HPP
