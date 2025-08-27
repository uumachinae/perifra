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
///   Date: 12/29/2022, 5/2/2023
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PIO_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PIO_MAIN_OPT_HPP

#include "xos/app/console/framework/version/main.hpp"
#include "xos/pio/implement.hpp"

#define XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER 17
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPT "number"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTARG "[0..n]"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTUSE "pin number"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTVAL_S "N::"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTVAL_C 'N'
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTION \
   {XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPT, \
    XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE 1
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPT "value"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_VALUE "[0..n]"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_LOW "low"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_HIGH "high"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_CHANGE "change"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_FALLING "falling"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_RISING "rising"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG \
    "[{ " XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_VALUE \
    " | " XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_LOW \
    " | " XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_HIGH \
    " | " XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_CHANGE \
    " | " XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_FALLING \
    " | " XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_RISING " }]"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTUSE "pin value"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTVAL_S "V::"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTVAL_C 'V'
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTION \
   {XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPT, \
    XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTVAL_C}, \

/*/
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE 1
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPT "mode"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_VALUE "[0..n]"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_INPUT "input"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_OUTPUT "output"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_PULLUP "pullup"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_PULLDOWN "pulldown"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG \
    "[{ " XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_VALUE \
    " | " XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_INPUT \
    " | " XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_OUTPUT \
    " | " XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_PULLUP \
    " | " XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_PULLDOWN " }]"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTUSE "pin mode"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTVAL_S "D::"
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTVAL_C 'D'
#define XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTION \
   {XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPT, \
    XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTVAL_C}, \
/*/

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PIO_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTVAL_S \
   XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTVAL_S \

/*/
   XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTVAL_S \
/*/

#define XOS_APP_CONSOLE_PIO_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTION \
   XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTION \

/*/
   XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTION \
/*/

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PIO_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PIO_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_FRAMEWORK_VERSION_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_PIO_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PIO_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_FRAMEWORK_VERSION_MAIN_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PIO_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PIO_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace pio {

/// class main_optt
template 
<class TExtends = xos::app::console::framework::version::main, 
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
      verbose_output_(false), 
      pio_pin_(XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER), 
      pio_value_(XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE)
      /*/,
      pio_mode_(XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE)
      /*/ {
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

    typedef xos::pio::implement pio_t;
    
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

    /// ...pio...run
    virtual int pio_initialize_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pio_t& pio = this->pio();
        LOGGER_IS_LOGGED_INFO("(err = (!(pio.initialize())?(1):(0)))...");
        if ((err = (!(pio.initialize())?(1):(0)))) {
            LOGGER_IS_LOGGED_ERROR("...failed on (" << err << " = (!(pio.initialize())?(1):(0)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...(" << err << " = (!(pio.initialize())?(1):(0)))");
        }
        return err;
    }
    virtual int pio_finalize_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pio_t& pio = this->pio();
        LOGGER_IS_LOGGED_INFO("(err = (!(pio.finalize())?(1):(0)))...");
        if ((err = (!(pio.finalize())?(1):(0)))) {
            LOGGER_IS_LOGGED_ERROR("...failed on (" << err << " = (!(pio.finalize())?(1):(0)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...(" << err << " = (!(pio.finalize())?(1):(0)))");
        }
        return err;
    }
    virtual int before_pio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->pio_initialize_run(argc, argv, env)...");
        if (!(err = this->pio_initialize_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->pio_initialize_run(argc, argv, env)");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed " << err << " = this->before_pio_pin_run(argc, argv, env)");
        }
        return err;
    }
    virtual int after_pio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->pio_finalize_run(argc, argv, env)...");
        if (!(err = this->pio_finalize_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->pio_finalize_run(argc, argv, env)");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed " << err << " = this->pio_finalize_run(argc, argv, env)");
        }
        return err;
    }

    /// ...set_pio_pin_value_run
    virtual int set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pio_t& pio = this->pio();
        uint8_t pio_pin = this->pio_pin();
        uint8_t pio_value = this->pio_value();
        LOGGER_IS_LOGGED_INFO("pio.set_value(pio_pin = " << pio_pin << ", pio_value = " << pio_value << ")...");
        pio.set_value(pio_pin, pio_value);
        LOGGER_IS_LOGGED_INFO("...pio.set_value(pio_pin = " << pio_pin << ", pio_value = " << pio_value << ")");
        return err;
    }
    virtual int before_set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_pio_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int after_set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = after_pio_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int all_set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_pio_pin_value_run(argc, argv, env))) {
            int err2 = 0;
            err = set_pio_pin_value_run(argc, argv, env);
            if ((err2 = after_set_pio_pin_value_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_set_pio_pin_value_run;
        return err;
    }
    virtual int set_pio_pin_value_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int set_pio_pin_value_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...get_pio_pin_value_run
    virtual int get_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pio_t& pio = this->pio();
        uint8_t pio_pin = this->pio_pin();
        uint8_t pio_value = this->pio_value();

        LOGGER_IS_LOGGED_INFO("pio.get_value(pio_pin = " << pio_pin << ")...");
        pio_value = pio.get_value(pio_pin);
        this->set_pio_value(pio_value);
        LOGGER_IS_LOGGED_INFO("..." << pio_value << " = pio.get_value(pio_pin = " << pio_pin << ")");

        if (!(err = all_output_pio_pin_value_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_get_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_pio_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int after_get_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = after_pio_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int all_get_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_get_pio_pin_value_run(argc, argv, env))) {
            int err2 = 0;
            err = get_pio_pin_value_run(argc, argv, env);
            if ((err2 = after_get_pio_pin_value_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_get_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_get_pio_pin_value_run;
        return err;
    }
    virtual int get_pio_pin_value_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_get_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int get_pio_pin_value_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

/*/
    /// ...set_pio_pin_mode_run
    virtual int set_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pio_t& pio = this->pio();
        uint8_t pio_pin = this->pio_pin();
        uint8_t pio_mode = this->pio_mode();
        pio.set_mode(pio_pin, pio_mode);
        pio_mode = pio.get_mode(pio_pin);
        unsigned_to_string s(pio_mode);
        this->outln(s.chars());
        return err;
    }
    virtual int before_set_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_pio_pin_mode_run(argc, argv, env))) {
            int err2 = 0;
            err = set_pio_pin_mode_run(argc, argv, env);
            if ((err2 = after_set_pio_pin_mode_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_set_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_set_pio_pin_mode_run;
        return err;
    }
    virtual int set_pio_pin_mode_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_set_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int set_pio_pin_mode_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    /// ...get_pio_pin_mode_run
    virtual int get_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pio_t& pio = this->pio();
        uint8_t pio_pin = this->pio_pin();
        uint8_t pio_mode = this->pio_mode();
        pio_mode = pio.get_mode(pio_pin);
        unsigned_to_string s(pio_mode);
        this->outln(s.chars());
        return err;
    }
    virtual int before_get_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_get_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_get_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_get_pio_pin_mode_run(argc, argv, env))) {
            int err2 = 0;
            err = get_pio_pin_mode_run(argc, argv, env);
            if ((err2 = after_get_pio_pin_mode_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_get_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_get_pio_pin_mode_run;
        return err;
    }
    virtual int get_pio_pin_mode_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_get_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int get_pio_pin_mode_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
/*/

    /// ...output_pio_pin_number_run
    virtual int output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        unsigned_to_string s(this->pio_pin());
        this->outln(s.chars());
        return err;
    }
    virtual int before_output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_pio_pin_number_run(argc, argv, env))) {
            int err2 = 0;
            err = output_pio_pin_number_run(argc, argv, env);
            if ((err2 = after_output_pio_pin_number_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_pio_pin_number_run;
        return err;
    }
    virtual int output_pio_pin_number_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_pio_pin_number_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_pio_pin_value_run
    virtual int output_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        uint8_t pio_value = this->pio_value();
        this->outln(unsigned_to_string(pio_value).chars());
        return err;
    }
    virtual int before_output_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_pio_pin_value_run(argc, argv, env))) {
            int err2 = 0;
            err = output_pio_pin_value_run(argc, argv, env);
            if ((err2 = after_output_pio_pin_value_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_pio_pin_value_run;
        return err;
    }
    virtual int output_pio_pin_value_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_pio_pin_value_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

/*/
    /// ...output_pio_pin_mode_run
    virtual int output_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_pio_pin_mode_run(argc, argv, env))) {
            int err2 = 0;
            err = output_pio_pin_mode_run(argc, argv, env);
            if ((err2 = after_output_pio_pin_mode_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_pio_pin_mode_run;
        return err;
    }
    virtual int output_pio_pin_mode_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_pio_pin_mode_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
/*/

    /// ...pio_pin_number_option...
    virtual int on_get_pio_pin_number_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_pio_pin_number_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_set_pio_pin_number_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            this->set_pio_pin(arg.to_unsigned());
        } else {
        }
        return err;
    }
    virtual int on_pio_pin_number_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_pio_pin_number_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_pio_pin_number_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_pio_pin_number_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_pio_pin_number_run(argc, argv, env))) {
                        if (!(err = output_pio_pin_number_run_set(argc, argv, env))) {
                        } else {
                        }
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_pio_pin_number_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_pio_pin_number_option_get(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_pio_pin_number_run(argc, argv, env))) {
                        if (!(err = output_pio_pin_number_run_set(argc, argv, env))) {
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
    virtual const char_t* pio_pin_number_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTUSE;
        optarg = XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTARG;
        return chars;
    }

    /// ...pio_pin_value_option...
    virtual int on_get_pio_pin_value_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_pio_pin_value_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_set_pio_pin_value_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            this->set_pio_value(arg.to_unsigned());
        } else {
        }
        return err;
    }
    virtual int on_pio_pin_value_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_pio_pin_value_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_pio_pin_value_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_pio_pin_value_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_set_pio_pin_value_run(argc, argv, env))) {
                        if (!(err = set_pio_pin_value_run_set(argc, argv, env))) {
                        } else {
                        }
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_pio_pin_value_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_pio_pin_value_option_get(optarg, optind, argc, argv, env))) {
                    if (!(err = set_get_pio_pin_value_run(argc, argv, env))) {
                        if (!(err = get_pio_pin_value_run_set(argc, argv, env))) {
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
    virtual const char_t* pio_pin_value_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTARG;
        return chars;
    }

/*/
    /// ...pio_pin_mode_option...
    virtual int on_get_pio_pin_mode_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_pio_pin_mode_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_set_pio_pin_mode_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            this->set_pio_mode(arg.to_unsigned());
        } else {
        }
        return err;
    }
    virtual int on_pio_pin_mode_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_pio_pin_mode_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_pio_pin_mode_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_pio_pin_mode_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_set_pio_pin_mode_run(argc, argv, env))) {
                        if (!(err = set_pio_pin_mode_run_set(argc, argv, env))) {
                        } else {
                        }
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_set_pio_pin_mode_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_pio_pin_mode_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_get_pio_pin_mode_run(argc, argv, env))) {
                        if (!(err = get_pio_pin_mode_run_set(argc, argv, env))) {
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
    virtual const char_t* pio_pin_mode_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTARG;
        return chars;
    }
/*/

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTVAL_C:
            err = this->on_pio_pin_number_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTVAL_C:
            err = this->on_pio_pin_value_option(optval, optarg, optname, optind, argc, argv, env);
            break;
/*/
        case XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTVAL_C:
            err = this->on_pio_pin_mode_option(optval, optarg, optname, optind, argc, argv, env);
            break;
/*/
            
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_PIO_MAIN_PIN_NUMBER_OPTVAL_C:
            chars = this->pio_pin_number_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PIO_MAIN_PIN_VALUE_OPTVAL_C:
            chars = this->pio_pin_value_option_usage(optarg, longopt);
            break;
/*/
        case XOS_APP_CONSOLE_PIO_MAIN_PIN_MODE_OPTVAL_C:
            chars = this->pio_pin_mode_option_usage(optarg, longopt);
            break;
/*/
            
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PIO_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PIO_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PIO_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PIO_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

    /// ...verbose_output
    virtual bool& set_verbose_output(bool to = true) {
        bool& verbose_output = this->verbose_output();
        verbose_output = to;
        return verbose_output;
    }
    virtual bool& verbose_output() const {
        return (bool&)verbose_output_;
    }

    /// ...pio...
/*/
    virtual uint8_t& set_pio_mode(uint8_t to) {
        uint8_t& pio_mode = this->pio_mode();
        pio_mode = to;
        return pio_mode;
    }
    virtual uint8_t& pio_mode() const {
        return (uint8_t&)pio_mode_;
    }
/*/
    virtual uint8_t& set_pio_value(uint8_t to) {
        uint8_t& pio_value = this->pio_value();
        pio_value = to;
        return pio_value;
    }
    virtual uint8_t& pio_value() const {
        return (uint8_t&)pio_value_;
    }
    virtual uint8_t& set_pio_pin(uint8_t to) {
        uint8_t& pio_pin = this->pio_pin();
        pio_pin = to;
        return pio_pin;
    }
    virtual uint8_t& pio_pin() const {
        return (uint8_t&)pio_pin_;
    }
    virtual pio_t& pio() const {
        return (pio_t&)pio_;
    }
    
protected:
    bool verbose_output_;
    uint8_t pio_pin_, pio_value_/*/, pio_mode_/*/; pio_t pio_;
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace pio
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PIO_MAIN_OPT_HPP
