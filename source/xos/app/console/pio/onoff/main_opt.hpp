//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2023 $organization$
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
///   Date: 1/2/2023, 2/5/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_HPP

#include "xos/os/sleep.hpp"
#include "xos/app/console/pio/main.hpp"

#define XOS_APP_CONSOLE_PIO_ONOFF_MSECONDS_MIN 300
#define XOS_APP_CONSOLE_PIO_ONOFF_MSECONDS_MAX 5000
#define XOS_APP_CONSOLE_PIO_ONOFF_MSECONDS 500
#define XOS_APP_CONSOLE_PIO_ONOFF_REPEAT 0

#define XOS_APP_CONSOLE_PIO_ONOFF_ON_VALUE 1
#define XOS_APP_CONSOLE_PIO_ONOFF_OFF_VALUE 0
#define XOS_APP_CONSOLE_PIO_ONOFF_IS_ON_VALUE 1
#define XOS_APP_CONSOLE_PIO_ONOFF_IS_OFF_VALUE 1

#define XOS_APP_CONSOLE_PIO_ONOFF_ON_PIN 17
#define XOS_APP_CONSOLE_PIO_ONOFF_OFF_PIN 27
#define XOS_APP_CONSOLE_PIO_ONOFF_IS_ON_PIN 22
#define XOS_APP_CONSOLE_PIO_ONOFF_IS_OFF_PIN 23

//////////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPT "on"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTARG ""
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTUSE "power on"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTVAL_S "O"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTVAL_C 'O'
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTION \
   {XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPT "off"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTARG ""
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTUSE "power off"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTVAL_S "F"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTVAL_C 'F'
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTION \
   {XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPT "state"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTARG_ON "on"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTARG_OFF "off"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTARG ""
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTUSE "power state"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTVAL_S "S"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTION \
   {XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPT "toggle"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTARG ""
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTUSE "toggle power on / off"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTVAL_S "T"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTVAL_C 'T'
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTION \
   {XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPT "repeat"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTARG "[{ -1 | 0..n }]"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTUSE "repeat power toggle"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTVAL_S "R::"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTION \
   {XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPT "mseconds"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTARG "[{ 0 | 100..10000 }]"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTUSE "mseconds pin on"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTVAL_S "M::"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTVAL_C 'M'
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTION \
   {XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPT "active-low"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTARG ""
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTUSE "active low pin io"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTVAL_S "L"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTVAL_C 'L'
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTION \
   {XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPT "active-high"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTARG ""
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTUSE "active high pin io"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTVAL_S "H"
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTVAL_C 'H'
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTION \
   {XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTVAL_S \
   XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTVAL_S \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTVAL_S \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTVAL_S \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTVAL_S \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTVAL_S \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTVAL_S \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTVAL_S \

#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTION \
   XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTION \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTION \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTION \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTION \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTION \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTION \
    XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PIO_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PIO_MAIN_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace pio {
namespace onoff {

/// class main_optt
template 
<class TExtends = xos::app::console::pio::maint<>,  class TImplements = typename TExtends::implements>

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

    /// constructor / destructor
    main_optt()
    : run_(0), 

      repeat_(XOS_APP_CONSOLE_PIO_ONOFF_REPEAT), 
      min_mseconds_pin_on_(XOS_APP_CONSOLE_PIO_ONOFF_MSECONDS_MIN), max_mseconds_pin_on_(XOS_APP_CONSOLE_PIO_ONOFF_MSECONDS_MAX),  
      default_mseconds_pin_on_(XOS_APP_CONSOLE_PIO_ONOFF_MSECONDS), mseconds_pin_on_(default_mseconds_pin_on_),

      pio_on_pin_(XOS_APP_CONSOLE_PIO_ONOFF_ON_PIN), pio_off_pin_(XOS_APP_CONSOLE_PIO_ONOFF_OFF_PIN), 
      pio_on_value_(XOS_APP_CONSOLE_PIO_ONOFF_ON_VALUE), pio_off_value_(XOS_APP_CONSOLE_PIO_ONOFF_OFF_VALUE),

      pio_is_on_pin_(XOS_APP_CONSOLE_PIO_ONOFF_IS_ON_PIN), pio_is_off_pin_(XOS_APP_CONSOLE_PIO_ONOFF_IS_OFF_PIN), 
      pio_is_on_value_(XOS_APP_CONSOLE_PIO_ONOFF_IS_ON_VALUE), pio_is_off_value_(XOS_APP_CONSOLE_PIO_ONOFF_IS_OFF_VALUE),
    
      pio_is_on_(false), pio_is_off_(false), pio_is_active_low_(false) {
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

    /// run
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

    /// ...pio_power_on_run
    virtual int pio_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;

        this->set_pio_pin(pio_off_pin());
        this->set_pio_value(pio_off_value());
        if (!(err = this->all_set_pio_pin_value_run(argc, argv, env))) {

            this->set_pio_pin(pio_on_pin());
            this->set_pio_value(pio_off_value());
            if (!(err = this->all_set_pio_pin_value_run(argc, argv, env))) {

                this->set_pio_pin(pio_on_pin());
                this->set_pio_value(pio_on_value());
                if (!(err = this->all_set_pio_pin_value_run(argc, argv, env))) {
                    mseconds_t mseconds = mseconds_pin_on();

                    if ((0 < mseconds)) {
                        useconds_t useconds = mseconds_useconds(mseconds);
    
                        LOGGER_IS_LOGGED_INFO("usleep(" << useconds << ")...");
                        usleep(useconds);
                        LOGGER_IS_LOGGED_INFO("...usleep(" << useconds << ")");
                        this->set_pio_value(pio_off_value());
                        if (!(err = this->all_set_pio_pin_value_run(argc, argv, env))) {
                            if (!(err = all_pio_power_state_run(argc, argv, env))) {
                            } else {
                            }
                        } else {
                        }
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int before_pio_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_pio_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_pio_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_pio_power_on_run(argc, argv, env))) {
            int err2 = 0;
            err = pio_power_on_run(argc, argv, env);
            if ((err2 = after_pio_power_on_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_pio_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_pio_power_on_run;
        return err;
    }
    virtual int pio_power_on_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_pio_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int pio_power_on_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...pio_power_off_run
    virtual int pio_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        this->set_pio_pin(pio_on_pin());
        this->set_pio_value(pio_off_value());
        if (!(err = this->all_set_pio_pin_value_run(argc, argv, env))) {

            this->set_pio_pin(pio_off_pin());
            this->set_pio_value(pio_off_value());
            if (!(err = this->all_set_pio_pin_value_run(argc, argv, env))) {

                this->set_pio_pin(pio_off_pin());
                this->set_pio_value(pio_on_value());
                if (!(err = this->all_set_pio_pin_value_run(argc, argv, env))) {
                    mseconds_t mseconds = mseconds_pin_on();

                    if ((0 < mseconds)) {
                        useconds_t useconds = mseconds_useconds(mseconds);
    
                        LOGGER_IS_LOGGED_INFO("usleep(" << useconds << ")...");
                        usleep(useconds);
                        LOGGER_IS_LOGGED_INFO("...usleep(" << useconds << ")");
                        this->set_pio_value(pio_off_value());
                        if (!(err = this->all_set_pio_pin_value_run(argc, argv, env))) {
                            if (!(err = all_pio_power_state_run(argc, argv, env))) {
                            } else {
                            }
                        } else {
                        }
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int before_pio_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_pio_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_pio_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_pio_power_off_run(argc, argv, env))) {
            int err2 = 0;
            err = pio_power_off_run(argc, argv, env);
            if ((err2 = after_pio_power_off_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_pio_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_pio_power_off_run;
        return err;
    }
    virtual int pio_power_off_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_pio_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int pio_power_off_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...pio_power_state_run
    virtual int pio_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        
        this->set_pio_is_on(false);
        this->set_pio_is_off(false);
        this->set_pio_pin(pio_is_on_pin());
        if (!(err = this->all_get_pio_pin_value_run(argc, argv, env))) {
            uint8_t pio_is_on_value = this->pio_value();

            LOGGER_IS_LOGGED_INFO("...pio_is_on_value = " << pio_is_on_value << "");
            this->set_pio_pin(pio_is_off_pin());
            if (!(err = this->all_get_pio_pin_value_run(argc, argv, env))) {
                uint8_t pio_is_off_value = this->pio_value();

                LOGGER_IS_LOGGED_INFO("...pio_is_off_value = " << pio_is_on_value << "");
                if ((pio_is_on_value == this->pio_is_on_value())) {
                    this->set_pio_is_on();
                } else {
                    if ((pio_is_off_value == this->pio_is_off_value())) {
                        this->set_pio_is_off();
                    } else {
                    }
                }
                if (!(err = all_output_pio_is_on_run(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int before_pio_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_pio_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_pio_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_pio_power_state_run(argc, argv, env))) {
            int err2 = 0;
            err = pio_power_state_run(argc, argv, env);
            if ((err2 = after_pio_power_state_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_pio_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_pio_power_state_run;
        return err;
    }
    virtual int pio_power_state_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_pio_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int pio_power_state_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...pio_power_toggle_run
    virtual int pio_power_toggle_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        signed repeat = this->repeat();
        do {
            if (!(err = all_pio_power_on_run(argc, argv, env))) {
                mseconds_t mseconds = mseconds_pin_on();

                if ((0 >= mseconds)) {
                    mseconds = default_mseconds_pin_on();
                }
                if ((0 < mseconds)) {
                    useconds_t useconds = mseconds_useconds(mseconds);
        
                    LOGGER_IS_LOGGED_INFO("usleep(" << useconds << ")...");
                    usleep(useconds);
                    LOGGER_IS_LOGGED_INFO("...usleep(" << useconds << ")");
                    if (!(err = all_pio_power_off_run(argc, argv, env))) {
                    } else {
                    }
                } else {
                }
            } else {
            }
        } while (0 != ((repeat > 0)?(repeat--):((repeat < 0)?(repeat):(0))));
        return err;
    }
    virtual int before_pio_power_toggle_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_pio_power_toggle_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_pio_power_toggle_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_pio_power_toggle_run(argc, argv, env))) {
            int err2 = 0;
            err = pio_power_toggle_run(argc, argv, env);
            if ((err2 = after_pio_power_toggle_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_pio_power_toggle_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_pio_power_toggle_run;
        return err;
    }
    virtual int pio_power_toggle_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_pio_power_toggle_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int pio_power_toggle_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_repeat_toggle_run
    virtual int output_repeat_toggle_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const signed& repeat = this->repeat();
        signed_to_string repeat_string(repeat);
        this->outln(repeat_string);
        return err;
    }
    virtual int before_output_repeat_toggle_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_repeat_toggle_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_repeat_toggle_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_repeat_toggle_run(argc, argv, env))) {
            int err2 = 0;
            err = output_repeat_toggle_run(argc, argv, env);
            if ((err2 = after_output_repeat_toggle_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_repeat_toggle_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_repeat_toggle_run;
        return err;
    }
    virtual int output_repeat_toggle_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_repeat_toggle_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_repeat_toggle_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_mseconds_pin_on_run
    virtual int output_mseconds_pin_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const mseconds_t& mseconds_pin_on = this->mseconds_pin_on();
        unsigned_to_string mseconds_pin_on_string((unsigned)mseconds_pin_on);
        this->outln(mseconds_pin_on_string);
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

    /// ...output_pio_is_on_run
    virtual int output_pio_is_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const bool& pio_is_on = this->pio_is_on();
        const char_t* state = ((pio_is_on)?(XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTARG_ON)
                               :(XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTARG_OFF));

        this->outln(state);
        return err;
    }
    virtual int before_output_pio_is_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_pio_is_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_pio_is_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_pio_is_on_run(argc, argv, env))) {
            int err2 = 0;
            err = output_pio_is_on_run(argc, argv, env);
            if ((err2 = after_output_pio_is_on_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...output_pio_pin_value_run
    virtual int output_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...on_option...
    virtual int on_set_on_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_on_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_on_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_on_option_set(optarg, optind, argc, argv, env))) {
                if (!(err = set_pio_power_on_run(argc, argv, env))) {
                    if (!(err = pio_power_on_run_set(argc, argv, env))) {
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* on_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTUSE;
        optarg = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTARG;
        return chars;
    }

    /// ...off_option...
    virtual int on_set_off_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_off_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_off_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_off_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_off_option_set(optarg, optind, argc, argv, env))) {
                if (!(err = set_pio_power_off_run(argc, argv, env))) {
                    if (!(err = pio_power_off_run_set(argc, argv, env))) {
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* off_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTUSE;
        optarg = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTARG;
        return chars;
    }

    /// on...state_option...
    virtual int on_set_state_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_state_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_state_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_state_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_state_option_set(optarg, optind, argc, argv, env))) {
                if (!(err = set_pio_power_state_run(argc, argv, env))) {
                    if (!(err = pio_power_state_run_set(argc, argv, env))) {
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* state_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTARG;
        return chars;
    }

    /// ...toggle_option...
    virtual int on_set_toggle_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_toggle_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_toggle_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_toggle_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_toggle_option_set(optarg, optind, argc, argv, env))) {
                if (!(err = set_pio_power_toggle_run(argc, argv, env))) {
                    if (!(err = pio_power_toggle_run_set(argc, argv, env))) {
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* toggle_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTARG;
        return chars;
    }

    /// ...repeat_option...
    virtual int on_get_repeat_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_repeat_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_output_repeat_toggle_run(argc, argv, env))) {
            if (!(err = output_repeat_toggle_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_repeat_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            signed repeat(arg.to_signed());
            set_repeat(repeat);
        } else {
        }
        return err;
    }
    virtual int on_repeat_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_output_repeat_toggle_run(argc, argv, env))) {
                if (!(err = output_repeat_toggle_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_repeat_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_repeat_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_repeat_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_repeat_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_repeat_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* repeat_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTUSE;
        optarg = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTARG;
        return chars;
    }

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
            }
        }
        return err;
    }
    virtual int on_set_mseconds_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            unsigned mseconds(arg.to_unsigned());
            if ((0 < (mseconds))) {
                unsigned mseconds_min = ((unsigned)min_mseconds_pin_on()),
                         mseconds_max = ((unsigned)max_mseconds_pin_on());
                if ((mseconds_min > (mseconds))) {
                    mseconds = mseconds_min;
                } else {
                    if ((mseconds_max < (mseconds))) {
                        mseconds = mseconds_max;
                    } else {
                    }
                }
                set_mseconds_pin_on(mseconds);
            } else {
                set_mseconds_pin_on(0);
            }
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
                }
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
        const char_t* chars = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTUSE;
        optarg = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTARG;
        return chars;
    }

    /// on...active_low_option...
    virtual int on_set_active_low_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        set_pio_is_active_low(true);
        return err;
    }
    virtual int on_active_low_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_active_low_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_active_low_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_active_low_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* active_low_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTUSE;
        optarg = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTARG;
        return chars;
    }

    /// on...active_high_option...
    virtual int on_set_active_high_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        set_pio_is_active_low(false);
        return err;
    }
    virtual int on_active_high_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_active_high_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_active_high_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_active_high_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* active_high_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTUSE;
        optarg = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTVAL_C:
            err = this->on_on_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTVAL_C:
            err = this->on_off_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTVAL_C:
            err = this->on_state_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTVAL_C:
            err = this->on_toggle_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTVAL_C:
            err = this->on_repeat_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTVAL_C:
            err = this->on_mseconds_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTVAL_C:
            err = this->on_active_low_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTVAL_C:
            err = this->on_active_high_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ON_OPTVAL_C:
            chars = this->on_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OFF_OPTVAL_C:
            chars = this->off_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_STATE_OPTVAL_C:
            chars = this->state_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_TOGGLE_OPTVAL_C:
            chars = this->toggle_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_REPEAT_OPTVAL_C:
            chars = this->repeat_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_MSECONDS_OPTVAL_C:
            chars = this->mseconds_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_LOW_OPTVAL_C:
            chars = this->active_low_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ACTIVE_HIGH_OPTVAL_C:
            chars = this->active_high_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PIO_ONOFF_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

    /// ...repeat
    virtual signed& set_repeat(signed to) {
        signed& repeat = this->repeat();
        repeat = to;
        return repeat;
    }
    virtual signed& repeat() const {
        return (signed&)repeat_;
    }

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

    /// ...pin...
    virtual uint8_t& pio_on_pin() const {
        return (uint8_t&)pio_on_pin_;
    }
    virtual uint8_t& pio_off_pin() const {
        return (uint8_t&)pio_off_pin_;
    }
    virtual uint8_t& pio_is_on_pin() const {
        return (uint8_t&)pio_is_on_pin_;
    }
    virtual uint8_t& pio_is_off_pin() const {
        return (uint8_t&)pio_is_off_pin_;
    }
    
    /// ...value
    virtual uint8_t& pio_on_value() const {
        if ((pio_is_active_low())) {
            return (uint8_t&)pio_off_value_;
        }
        return (uint8_t&)pio_on_value_;
    }
    virtual uint8_t& pio_off_value() const {
        if ((pio_is_active_low())) {
            return (uint8_t&)pio_on_value_;
        }
        return (uint8_t&)pio_off_value_;
    }
    virtual uint8_t& pio_is_on_value() const {
        if ((pio_is_active_low())) {
            return (uint8_t&)pio_is_off_value_;
        }
        return (uint8_t&)pio_is_on_value_;
    }
    virtual uint8_t& pio_is_off_value() const {
        if ((pio_is_active_low())) {
            return (uint8_t&)pio_is_on_value_;
        }
        return (uint8_t&)pio_is_off_value_;
    }

    /// ...is_on
    virtual bool& set_pio_is_on(const bool& to = true) {
        bool& pio_is_on = this->pio_is_on();
        pio_is_on = to;
        return pio_is_on;
    }
    virtual bool& pio_is_on() const {
        return (bool&)pio_is_on_;
    }

    /// ...is_off
    virtual bool& set_pio_is_off(const bool& to = true) {
        bool& pio_is_off = this->pio_is_off();
        pio_is_off = to;
        return pio_is_off;
    }
    virtual bool& pio_is_off() const {
        return (bool&)pio_is_off_;
    }

    /// ...is_active_low
    virtual bool& set_pio_is_active_low(const bool& to = true) {
        bool& pio_is_active_low = this->pio_is_active_low();
        pio_is_active_low = to;
        return pio_is_active_low;
    }
    virtual bool& pio_is_active_low() const {
        return (bool&)pio_is_active_low_;
    }

protected:
    signed repeat_;
    mseconds_t min_mseconds_pin_on_, max_mseconds_pin_on_, default_mseconds_pin_on_, mseconds_pin_on_;
    uint8_t pio_on_pin_, pio_off_pin_, pio_on_value_, pio_off_value_;
    uint8_t pio_is_on_pin_, pio_is_off_pin_, pio_is_on_value_, pio_is_off_value_;
    bool pio_is_on_, pio_is_off_, pio_is_active_low_;
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace onoff 
} /// namespace pio 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PIO_ONOFF_MAIN_OPT_HPP
