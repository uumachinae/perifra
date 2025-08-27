///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2022 $organization$
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
///   Date: 12/29/2022, 5/5/2024
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_GPIO_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_GPIO_MAIN_OPT_HPP

#include "xos/app/console/protocol/base/main.hpp"
#include "xos/gpio/implement.hpp"

#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER 17
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPT "number"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTARG "[0..n]"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTUSE "pin number"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTVAL_S "N::"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTVAL_C 'N'
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTION \
   {XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPT, \
    XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE 1
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPT "value"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_VALUE "[0..n]"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_LOW "low"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_HIGH "high"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_CHANGE "change"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_FALLING "falling"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_RISING "rising"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG \
    "[{ " XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_VALUE \
    " | " XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_LOW \
    " | " XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_HIGH \
    " | " XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_CHANGE \
    " | " XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_FALLING \
    " | " XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_RISING " }]"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTUSE "pin value"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTVAL_S "V::"
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTVAL_C 'V'
#define XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTION \
   {XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPT, \
    XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_GPIO_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTVAL_S \
   XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTVAL_S \

#define XOS_APP_CONSOLE_GPIO_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTION \
   XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_GPIO_MAIN_LOGGING_OPTIONS_CHARS \
   XOS_APP_CONSOLE_FRAMEWORK_VERSION_MAIN_LOGGING_OPTIONS_CHARS

#define XOS_APP_CONSOLE_GPIO_MAIN_LOGGING_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_FRAMEWORK_VERSION_MAIN_LOGGING_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_GPIO_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_GPIO_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_FRAMEWORK_VERSION_MAIN_LOGGING_OPTIONS_CHARS

#define XOS_APP_CONSOLE_GPIO_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_GPIO_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_FRAMEWORK_VERSION_MAIN_LOGGING_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_GPIO_MAIN_ARGS 0
#define XOS_APP_CONSOLE_GPIO_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace gpio {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::base::main, 
  class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
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

    /// constructor / destructor
    main_optt()
    : run_(0), 
      gpio_pin_(XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER), 
      gpio_value_(XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE)
    {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef xos::gpio::implement gpio_t;
    
    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// ...gpio...run
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
    virtual int before_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->gpio_initialize_run(argc, argv, env)...");
        if (!(err = this->gpio_initialize_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->gpio_initialize_run(argc, argv, env)");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed " << err << " = this->before_gpio_pin_run(argc, argv, env)");
        }
        return err;
    }
    virtual int after_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->gpio_finalize_run(argc, argv, env)...");
        if (!(err = this->gpio_finalize_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->gpio_finalize_run(argc, argv, env)");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed " << err << " = this->gpio_finalize_run(argc, argv, env)");
        }
        return err;
    }

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
    virtual int before_set_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gpio_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int after_set_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = after_gpio_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int all_set_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_gpio_pin_value_run(argc, argv, env))) {
            int err2 = 0;
            err = set_gpio_pin_value_run(argc, argv, env);
            if ((err2 = after_set_gpio_pin_value_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_set_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_set_gpio_pin_value_run;
        return err;
    }
    virtual int set_gpio_pin_value_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_set_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int set_gpio_pin_value_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

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
        LOGGER_IS_LOGGED_INFO("(!(err = all_output_gpio_pin_value_run(argc, argv, env)))...");
        if (!(err = all_output_gpio_pin_value_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = all_output_gpio_pin_value_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!( = all_output_gpio_pin_value_run(argc, argv, env)))");
        }
        return err;
    }
    virtual int before_get_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gpio_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int after_get_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = after_gpio_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int all_get_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_get_gpio_pin_value_run(argc, argv, env))) {
            int err2 = 0;
            err = get_gpio_pin_value_run(argc, argv, env);
            if ((err2 = after_get_gpio_pin_value_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_get_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_get_gpio_pin_value_run;
        return err;
    }
    virtual int get_gpio_pin_value_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_get_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int get_gpio_pin_value_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_gpio_pin_number_run
    virtual int output_gpio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        unsigned_to_string s(this->gpio_pin());
        this->outln(s.chars());
        return err;
    }
    virtual int before_output_gpio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_gpio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_gpio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_gpio_pin_number_run(argc, argv, env))) {
            int err2 = 0;
            err = output_gpio_pin_number_run(argc, argv, env);
            if ((err2 = after_output_gpio_pin_number_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_gpio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_gpio_pin_number_run;
        return err;
    }
    virtual int output_gpio_pin_number_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_gpio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_gpio_pin_number_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_gpio_pin_value_run
    virtual int output_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        uint8_t gpio_value = this->gpio_value();
        this->outln(unsigned_to_string(gpio_value).chars());
        return err;
    }
    virtual int before_output_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_gpio_pin_value_run(argc, argv, env))) {
            int err2 = 0;
            err = output_gpio_pin_value_run(argc, argv, env);
            if ((err2 = after_output_gpio_pin_value_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_gpio_pin_value_run;
        return err;
    }
    virtual int output_gpio_pin_value_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_gpio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_gpio_pin_value_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...gpio_pin_number_option...
    virtual int on_get_gpio_pin_number_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_gpio_pin_number_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_set_gpio_pin_number_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            this->set_gpio_pin(arg.to_unsigned());
        } else {
        }
        return err;
    }
    virtual int on_gpio_pin_number_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_gpio_pin_number_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_gpio_pin_number_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_gpio_pin_number_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_gpio_pin_number_run(argc, argv, env))) {
                        if (!(err = output_gpio_pin_number_run_set(argc, argv, env))) {
                        } else {
                        }
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_gpio_pin_number_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_gpio_pin_number_option_get(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_gpio_pin_number_run(argc, argv, env))) {
                        if (!(err = output_gpio_pin_number_run_set(argc, argv, env))) {
                        } else {
                        }
                    } else {
                    }
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* gpio_pin_number_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTUSE;
        optarg = XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTARG;
        return chars;
    }

    /// ...gpio_pin_value_option...
    virtual int on_get_gpio_pin_value_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_gpio_pin_value_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_set_gpio_pin_value_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            this->set_gpio_value(arg.to_unsigned());
        } else {
        }
        return err;
    }
    virtual int on_gpio_pin_value_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_gpio_pin_value_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_gpio_pin_value_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_gpio_pin_value_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_set_gpio_pin_value_run(argc, argv, env))) {
                        if (!(err = set_gpio_pin_value_run_set(argc, argv, env))) {
                        } else {
                        }
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_gpio_pin_value_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_gpio_pin_value_option_get(optarg, optind, argc, argv, env))) {
                    if (!(err = set_get_gpio_pin_value_run(argc, argv, env))) {
                        if (!(err = get_gpio_pin_value_run_set(argc, argv, env))) {
                        } else {
                        }
                    } else {
                    }
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* gpio_pin_value_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTUSE;
        optarg = XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTVAL_C:
            err = this->on_gpio_pin_number_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTVAL_C:
            err = this->on_gpio_pin_value_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_GPIO_MAIN_PIN_NUMBER_OPTVAL_C:
            chars = this->gpio_pin_number_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_GPIO_MAIN_PIN_VALUE_OPTVAL_C:
            chars = this->gpio_pin_value_option_usage(optarg, longopt);
            break;
            
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_GPIO_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_GPIO_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_GPIO_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_GPIO_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

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
    
protected:
    uint8_t gpio_pin_, gpio_value_; gpio_t gpio_;
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace gpio
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_GPIO_MAIN_OPT_HPP
