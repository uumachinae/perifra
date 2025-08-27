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
///   Date: 5/12/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OPT_HPP

#include "xos/app/console/protocol/json/base/main.hpp"
#include "xos/app/console/protocol/crlf/base/main.hpp"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_GPIO_OPTUSE "gpio "
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_GPIO_OPTARG "[gpio]"

#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPT "on"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTARG XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_GPIO_OPTARG
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTUSE XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_GPIO_OPTUSE "on"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTVAL_S "N::"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTVAL_C 'N'
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPT "off"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTARG XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_GPIO_OPTARG
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTUSE XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_GPIO_OPTUSE "off"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTVAL_S "F::"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTVAL_C 'F'
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPT "read"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTARG XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_GPIO_OPTARG
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTUSE XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_GPIO_OPTUSE "read"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTVAL_S "R::"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPT "write"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTARG XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_GPIO_OPTARG
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTUSE XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_GPIO_OPTUSE "write"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTVAL_S "W::"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTVAL_C 'W'
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPT "level"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTARG "[level]"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTUSE XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_GPIO_OPTUSE "level"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTVAL_S "L::"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTVAL_C 'L'
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPT "restart"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTUSE "restart gpio"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTVAL_S "S"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPT "stop"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTUSE "stop gpio"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTVAL_S "T"
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTVAL_C 'T'
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OFF_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OFF_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OFF_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OFF_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OFF_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OFF_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace pigpio {
namespace base {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::json::base::maint
 <xos::app::console::protocol::json::base::main_optt
 <xos::app::console::protocol::crlf::base::maint
 <xos::app::console::protocol::crlf::base::main_optt
 <xos::app::console::protocol::base::maint
 <xos::app::console::protocol::base::main_optt<> > > > > >,  class TImplements = typename TExtends::implements>

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
    /// ...write_gpio_level_on_run
    virtual int write_gpio_level_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_write_gpio_level_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_write_gpio_level_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_write_gpio_level_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_write_gpio_level_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_write_gpio_level_on_run(argc, argv, env))) {
            int err2 = 0;
            err = write_gpio_level_on_run(argc, argv, env);
            if ((err2 = after_write_gpio_level_on_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_write_gpio_level_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_write_gpio_level_on_run;
        return err;
    }
    virtual int write_gpio_level_on_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_write_gpio_level_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int write_gpio_level_on_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...write_gpio_level_off_run
    virtual int write_gpio_level_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_write_gpio_level_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_write_gpio_level_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_write_gpio_level_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_write_gpio_level_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_write_gpio_level_off_run(argc, argv, env))) {
            int err2 = 0;
            err = write_gpio_level_off_run(argc, argv, env);
            if ((err2 = after_write_gpio_level_off_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_write_gpio_level_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_write_gpio_level_off_run;
        return err;
    }
    virtual int write_gpio_level_off_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_write_gpio_level_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int write_gpio_level_off_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...write_gpio_level_run
    virtual int write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_output_request_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_write_gpio_level_run(argc, argv, env))) {
            int err2 = 0;
            err = write_gpio_level_run(argc, argv, env);
            if ((err2 = after_write_gpio_level_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_write_gpio_level_run;
        return err;
    }
    virtual int write_gpio_level_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int write_gpio_level_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...read_gpio_level_run
    virtual int read_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_output_request_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_read_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_read_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_read_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_read_gpio_level_run(argc, argv, env))) {
            int err2 = 0;
            err = read_gpio_level_run(argc, argv, env);
            if ((err2 = after_read_gpio_level_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_read_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_read_gpio_level_run;
        return err;
    }
    virtual int read_gpio_level_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_read_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int read_gpio_level_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...output_read_gpio_run
    virtual int output_read_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_read_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_read_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_read_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_read_gpio_run(argc, argv, env))) {
            int err2 = 0;
            err = output_read_gpio_run(argc, argv, env);
            if ((err2 = after_output_read_gpio_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_read_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_read_gpio_run;
        return err;
    }
    virtual int output_read_gpio_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_read_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_read_gpio_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...output_write_gpio_run
    virtual int output_write_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_write_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_write_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_write_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_write_gpio_run(argc, argv, env))) {
            int err2 = 0;
            err = output_write_gpio_run(argc, argv, env);
            if ((err2 = after_output_write_gpio_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_write_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_write_gpio_run;
        return err;
    }
    virtual int output_write_gpio_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_write_gpio_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_write_gpio_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...output_write_gpio_level_run
    virtual int output_write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_write_gpio_level_run(argc, argv, env))) {
            int err2 = 0;
            err = output_write_gpio_level_run(argc, argv, env);
            if ((err2 = after_output_write_gpio_level_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_write_gpio_level_run;
        return err;
    }
    virtual int output_write_gpio_level_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_write_gpio_level_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_write_gpio_level_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
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
        if (!(err = set_write_gpio_level_on_run(argc, argv, env))) {
            if (!(err = write_gpio_level_on_run_set(argc, argv, env))) {} else {}
        } else {}
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
            if (!(err = set_write_gpio_level_on_run(argc, argv, env))) {
                if (!(err = write_gpio_level_on_run_set(argc, argv, env))) {} else {}
            } else {}
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
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTARG;
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
        if (!(err = set_write_gpio_level_off_run(argc, argv, env))) {
            if (!(err = write_gpio_level_off_run_set(argc, argv, env))) {} else {}
        } else {}
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
            if (!(err = set_write_gpio_level_off_run(argc, argv, env))) {
                if (!(err = write_gpio_level_off_run_set(argc, argv, env))) {} else {}
            } else {}
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
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...read_option...
    virtual int on_get_read_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_read_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_read_gpio_level_run(argc, argv, env))) {
            if (!(err = read_gpio_level_run_set(argc, argv, env))) {} else {}
        } else {}
        return err;
    }
    virtual int on_set_read_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_read_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_read_gpio_level_run(argc, argv, env))) {
                if (!(err = read_gpio_level_run_set(argc, argv, env))) {} else {}
            } else {}
        } else {
        }
        return err;
    }
    virtual int on_read_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_read_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_read_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_read_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_read_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* read_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...write_option...
    virtual int on_get_write_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_write_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_write_gpio_level_run(argc, argv, env))) {
            if (!(err = write_gpio_level_run_set(argc, argv, env))) {} else {}
        } else {}
        return err;
    }
    virtual int on_set_write_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_write_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_write_gpio_level_run(argc, argv, env))) {
                if (!(err = write_gpio_level_run_set(argc, argv, env))) {} else {}
            } else {}
        } else {
        }
        return err;
    }
    virtual int on_write_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_write_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_write_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_write_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_write_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* write_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...level_option...
    virtual int on_get_level_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_level_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_output_write_gpio_level_run(argc, argv, env))) {
            if (!(err = output_write_gpio_level_run_set(argc, argv, env))) {} else {}
        } else {}
        return err;
    }
    virtual int on_set_level_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_level_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_output_write_gpio_level_run(argc, argv, env))) {
                if (!(err = output_write_gpio_level_run_set(argc, argv, env))) {} else {}
            } else {}
        } else {
        }
        return err;
    }
    virtual int on_level_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_level_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_level_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_level_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_level_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* level_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...restart_option...
    virtual int on_set_restart_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_to_restart_request();
        return err;
    }
    virtual int on_restart_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = this->set_output_request_run(argc, argv, env))) {
            if (!(err = this->output_request_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_restart_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_restart_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_restart_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* restart_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...stop_option...
    virtual int on_set_stop_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_to_stop_request();
        return err;
    }
    virtual int on_stop_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = this->set_output_request_run(argc, argv, env))) {
            if (!(err = this->output_request_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_stop_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_stop_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_stop_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* stop_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTARG;
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

        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTVAL_C:
            err = this->on_on_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTVAL_C:
            err = this->on_off_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTVAL_C:
            err = this->on_read_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTVAL_C:
            err = this->on_write_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTVAL_C:
            err = this->on_level_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTVAL_C:
            err = this->on_restart_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTVAL_C:
            err = this->on_stop_option(optval, optarg, optname, optind, argc, argv, env);
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

        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ON_OPTVAL_C:
            chars = this->on_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OFF_OPTVAL_C:
            chars = this->off_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_READ_OPTVAL_C:
            chars = this->read_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_WRITE_OPTVAL_C:
            chars = this->write_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_LEVEL_OPTVAL_C:
            chars = this->level_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_RESTART_OPTVAL_C:
            chars = this->restart_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_STOP_OPTVAL_C:
            chars = this->stop_option_usage(optarg, longopt);
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
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace base 
} /// namespace pigpio 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_PIGPIO_BASE_MAIN_OPT_HPP

