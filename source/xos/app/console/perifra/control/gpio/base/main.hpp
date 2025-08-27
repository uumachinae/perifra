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
#ifndef XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_BASE_MAIN_HPP

#include "xos/app/console/perifra/control/gpio/base/main_opt.hpp"
#include "xos/gpio/implement.hpp"

#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER 17
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE 1

namespace xos {
namespace app {
namespace console {
namespace perifra {
namespace control {
namespace gpio {
namespace base {

/// class maint
template 
<class TExtends = xos::app::console::perifra::control::gpio::base::main_optt<>,  class TImplements = typename TExtends::implements>

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

    typedef xos::gpio::implement gpio_t;
    
    /// constructor / destructor
    maint()
    : run_(0), 
      gpio_pin_(XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER), 
      gpio_value_(XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE) {
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
    /// ...set_gpio_pin_value_run
    virtual int set_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        gpio_t& gpio = this->gpio();
        uint8_t gpio_pin = this->gpio_pin();
        uint8_t gpio_value = this->gpio_value();

        LOGGER_IS_LOGGED_INFO("gpio.set_value(gpio_pin = " << gpio_pin << ", gpio_value = " << gpio_value << ")...");
        gpio.set_value(gpio_pin, gpio_value);
        LOGGER_IS_LOGGED_INFO("...gpio.set_value(gpio_pin = " << gpio_pin << ", gpio_value = " << gpio_value << ")");
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...get_gpio_pin_value_run
    virtual int get_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        gpio_t& gpio = this->gpio();
        uint8_t gpio_pin = this->gpio_pin();
        uint8_t gpio_value = this->gpio_value();

        LOGGER_IS_LOGGED_INFO("gpio.get_value(gpio_pin = " << gpio_pin << ")...");
        gpio_value = gpio.get_value(gpio_pin);
        this->set_gpio_value(gpio_value);
        LOGGER_IS_LOGGED_INFO("..." << gpio_value << " = gpio.get_value(gpio_pin = " << gpio_pin << ")");

        LOGGER_IS_LOGGED_INFO("(!(err = this->all_output_gpio_pin_value_run(argc, argv, env)))...");
        if (!(err = this->all_output_gpio_pin_value_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->all_output_gpio_pin_value_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!( = this->all_output_gpio_pin_value_run(argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...gpio_initialize_run
    virtual int gpio_initialize_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        gpio_t& gpio = this->gpio();
        LOGGER_IS_LOGGED_INFO("(err = (!(gpio.initialize())?(1):(0)))...");
        if ((err = (!(gpio.initialize())?(1):(0)))) {
            LOGGER_IS_LOGGED_ERROR("...failed on (" << err << " = (!(gpio.initialize())?(1):(0)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...(" << err << " = (!(gpio.initialize())?(1):(0)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...gpio_finalize_run
    virtual int gpio_finalize_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        gpio_t& gpio = this->gpio();
        LOGGER_IS_LOGGED_INFO("(err = (!(gpio.finalize())?(1):(0)))...");
        if ((err = (!(gpio.finalize())?(1):(0)))) {
            LOGGER_IS_LOGGED_ERROR("...failed on (" << err << " = (!(gpio.finalize())?(1):(0)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...(" << err << " = (!(gpio.finalize())?(1):(0)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...output_gpio_pin_value_run
    virtual int output_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        uint8_t gpio_value = this->gpio_value();
        this->outln(unsigned_to_string(gpio_value).chars());
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...output_gpio_pin_number_run
    virtual int output_gpio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        unsigned_to_string s(this->gpio_pin());
        this->outln(s.chars());
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    virtual int on_set_pin_number_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            this->set_gpio_pin(arg.to_unsigned());
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int on_set_pin_value_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            this->set_gpio_value(arg.to_unsigned());
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...gpio...
    virtual uint8_t& set_gpio_value(uint8_t to) {
        uint8_t& gpio_value = this->gpio_value();
        gpio_value = to;
        return gpio_value;
    }
    virtual uint8_t& gpio_value() const {
        return (uint8_t&)gpio_value_;
    }
    virtual uint8_t& set_gpio_pin(uint8_t to) {
        uint8_t& gpio_pin = this->gpio_pin();
        gpio_pin = to;
        return gpio_pin;
    }
    virtual uint8_t& gpio_pin() const {
        return (uint8_t&)gpio_pin_;
    }
    virtual gpio_t& gpio() const {
        return (gpio_t&)gpio_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    uint8_t gpio_pin_, gpio_value_; gpio_t gpio_;
}; /// class maint 
typedef maint<> main;

} /// namespace base 
} /// namespace gpio 
} /// namespace control 
} /// namespace perifra 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_BASE_MAIN_HPP

