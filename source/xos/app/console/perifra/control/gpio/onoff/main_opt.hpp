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
///   Date: 5/6/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OPT_HPP

#include "xos/app/console/perifra/control/gpio/base/main.hpp"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPT "on"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTARG ""
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTUSE "power on"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTVAL_S "N::"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTVAL_C 'N'
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTION \
   {XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPT, \
    XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPT "off"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTARG ""
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTUSE "power off"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTVAL_S "F::"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTVAL_C 'F'
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTION \
   {XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPT, \
    XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPT "state"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTARG ""
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTUSE "power state"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTVAL_S "S::"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTION \
   {XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPT, \
    XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPT "mseconds"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTARG "[{ 0 | 100..10000 }]"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTUSE "mseconds pin on"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTVAL_S "M::"
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTVAL_C 'M'
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTION \
   {XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPT, \
    XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTVAL_S \

#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTVAL_S \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTVAL_S \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTVAL_S \

#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTION \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTION \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTVAL_S \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTVAL_S \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTVAL_S \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTVAL_S \

#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTION \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTION \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTION \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_BASE_MAIN_INPUT_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_BASE_MAIN_INPUT_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_BASE_MAIN_INPUT_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_BASE_MAIN_INPUT_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_BASE_MAIN_INPUT_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_BASE_MAIN_INPUT_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace perifra {
namespace control {
namespace gpio {
namespace onoff {

/// class main_optt
template 
<class TExtends = xos::app::console::perifra::control::gpio::base::maint
 <xos::app::console::perifra::control::gpio::base::main_optt
 <xos::app::console::input::base::maint
 <xos::app::console::input::base::main_optt<> > > >,  class TImplements = typename TExtends::implements>

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
    main_optt(): run_(0) {
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
    /// ...gpio_power_on_run
    virtual int gpio_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_gpio_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_gpio_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gpio_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gpio_power_on_run(argc, argv, env))) {
            int err2 = 0;
            err = gpio_power_on_run(argc, argv, env);
            if ((err2 = after_gpio_power_on_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_gpio_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_gpio_power_on_run;
        return err;
    }
    virtual int gpio_power_on_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_gpio_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int gpio_power_on_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...gpio_power_off_run
    virtual int gpio_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_gpio_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_gpio_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gpio_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gpio_power_off_run(argc, argv, env))) {
            int err2 = 0;
            err = gpio_power_off_run(argc, argv, env);
            if ((err2 = after_gpio_power_off_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_gpio_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_gpio_power_off_run;
        return err;
    }
    virtual int gpio_power_off_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_gpio_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int gpio_power_off_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...gpio_get_power_state_run
    virtual int gpio_get_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(!(err = all_gpio_power_state_run(argc, argv, env)))...");
        if (!(err = all_gpio_power_state_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = all_gpio_power_state_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = all_gpio_power_state_run(argc, argv, env)))");
        }
        return err;
    }
    virtual int before_gpio_get_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_gpio_get_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gpio_get_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gpio_get_power_state_run(argc, argv, env))) {
            int err2 = 0;
            err = gpio_get_power_state_run(argc, argv, env);
            if ((err2 = after_gpio_get_power_state_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_gpio_get_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_gpio_get_power_state_run;
        return err;
    }
    virtual int gpio_get_power_state_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_gpio_get_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int gpio_get_power_state_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...gpio_power_state_run
    virtual int gpio_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_gpio_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_gpio_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gpio_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gpio_power_state_run(argc, argv, env))) {
            int err2 = 0;
            err = gpio_power_state_run(argc, argv, env);
            if ((err2 = after_gpio_power_state_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_gpio_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_gpio_power_state_run;
        return err;
    }
    virtual int gpio_power_state_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_gpio_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int gpio_power_state_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...output_mseconds_pin_on_run
    virtual int output_mseconds_pin_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_mseconds_pin_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_mseconds_pin_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_mseconds_pin_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_mseconds_pin_on_run(argc, argv, env))) {
            int err2 = 0;
            err = output_mseconds_pin_on_run(argc, argv, env);
            if ((err2 = after_output_mseconds_pin_on_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_mseconds_pin_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_mseconds_pin_on_run;
        return err;
    }
    virtual int output_mseconds_pin_on_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_mseconds_pin_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_mseconds_pin_on_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...output_gpio_is_on_run
    virtual int output_gpio_is_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_gpio_is_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_gpio_is_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_gpio_is_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_gpio_is_on_run(argc, argv, env))) {
            int err2 = 0;
            err = output_gpio_is_on_run(argc, argv, env);
            if ((err2 = after_output_gpio_is_on_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_gpio_is_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_gpio_is_on_run;
        return err;
    }
    virtual int output_gpio_is_on_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_gpio_is_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_gpio_is_on_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on...on_option...
    virtual int on_get_on_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_on_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_gpio_power_on_run(argc, argv, env))) {
            if (!(err = gpio_power_on_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_on_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_on_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_on_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_on_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_on_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_on_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* on_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTUSE;
        optarg = XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...off_option...
    virtual int on_get_off_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_off_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_gpio_power_off_run(argc, argv, env))) {
            if (!(err = gpio_power_off_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_off_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_off_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_off_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_off_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_off_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_off_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_off_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* off_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTUSE;
        optarg = XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...state_option...
    virtual int on_get_state_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_state_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_gpio_get_power_state_run(argc, argv, env))) {
            if (!(err = gpio_get_power_state_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_state_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_state_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_state_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_state_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_state_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_state_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_state_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* state_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...mseconds_option...
    virtual int on_get_mseconds_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_mseconds_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_output_mseconds_pin_on_run(argc, argv, env))) {
            if (!(err = output_mseconds_pin_on_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_mseconds_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_mseconds_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_output_mseconds_pin_on_run(argc, argv, env))) {
                if (!(err = output_mseconds_pin_on_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_mseconds_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_mseconds_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_mseconds_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_mseconds_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_mseconds_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* mseconds_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTUSE;
        optarg = XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTVAL_C:
            err = this->on_on_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTVAL_C:
            err = this->on_off_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTVAL_C:
            err = this->on_state_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTVAL_C:
            err = this->on_mseconds_option(optval, optarg, optname, optind, argc, argv, env);
            break;

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

        case XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ON_OPTVAL_C:
            chars = this->on_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OFF_OPTVAL_C:
            chars = this->off_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_STATE_OPTVAL_C:
            chars = this->state_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_MSECONDS_OPTVAL_C:
            chars = this->mseconds_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace onoff 
} /// namespace gpio 
} /// namespace control 
} /// namespace perifra 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PERIFRA_CONTROL_GPIO_ONOFF_MAIN_OPT_HPP

