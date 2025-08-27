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
///   Date: 1/5/2025, 8/26/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_OPT_HPP

#include "xos/app/console/protocol/crlf/base/main.hpp"

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_MAIN_NUMBER_OPTARG "[0..n]"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPT "write"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTARG XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_MAIN_NUMBER_OPTARG
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTUSE "write gpio " 
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTVAL_S "W::"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTVAL_C 'W'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPT "read"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTARG XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_MAIN_NUMBER_OPTARG
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTUSE "read gpio " 
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTVAL_S "R::"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPT "number"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTARG XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_MAIN_NUMBER_OPTARG
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTUSE "gpio number "
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTVAL_S "N::"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTVAL_C 'N'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPT "value"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTARG XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_MAIN_NUMBER_OPTARG
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTUSE "gpio value"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTVAL_S "V::"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTVAL_C 'V'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPT "restart"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTUSE "restart gpio"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTVAL_S "S"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPT "stop"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTUSE "stop gpio"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTVAL_S "T"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTVAL_C 'T'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_CRLF_BASE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_CRLF_BASE_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace perifra {
namespace control {
namespace gpio {
namespace base {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::crlf::base::maint
 <xos::app::console::protocol::crlf::base::main_optt
 <xos::app::console::protocol::base::maint
 <xos::app::console::protocol::base::main_optt<> > > >,  class TImplements = typename TExtends::implements>

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
    //////////////////////////////////////////////////////////////////////////

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
        if (!(err = this->set_output_request_run(argc, argv, env))) {
            if (!(err = this->output_request_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
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
            if (!(err = this->set_output_request_run(argc, argv, env))) {
                if (!(err = this->output_request_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
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
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTARG;
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
        if (!(err = this->set_output_request_run(argc, argv, env))) {
            if (!(err = this->output_request_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
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
            if (!(err = this->set_output_request_run(argc, argv, env))) {
                if (!(err = this->output_request_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
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
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...number_option...
    virtual int on_get_number_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_number_option_get
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
    virtual int on_set_number_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_number_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = this->set_output_request_run(argc, argv, env))) {
                if (!(err = this->output_request_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_number_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_number_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_number_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_number_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_number_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* number_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...value_option...
    virtual int on_get_value_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_value_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_set_value_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_value_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_value_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_value_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_value_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_value_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_value_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* value_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTARG;
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
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTARG;
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
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTARG;
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

        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTVAL_C:
            err = this->on_write_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTVAL_C:
            err = this->on_read_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTVAL_C:
            err = this->on_number_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTVAL_C:
            err = this->on_value_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTVAL_C:
            err = this->on_restart_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTVAL_C:
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

        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_WRITE_OPTVAL_C:
            chars = this->write_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_READ_OPTVAL_C:
            chars = this->read_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_NUMBER_OPTVAL_C:
            chars = this->number_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_VALUE_OPTVAL_C:
            chars = this->value_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_RESTART_OPTVAL_C:
            chars = this->restart_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_STOP_OPTVAL_C:
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
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_ARGV
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
} /// namespace gpio 
} /// namespace control 
} /// namespace perifra 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_GPIO_BASE_MAIN_OPT_HPP

