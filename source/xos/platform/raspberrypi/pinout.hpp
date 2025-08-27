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
///   File: pinout.hpp
///
/// Author: $author$
///   Date: 1/10/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_PLATFORM_RASPBERRYPI_PINOUT_HPP
#define XOS_PLATFORM_RASPBERRYPI_PINOUT_HPP

#include "xos/platform/os/raspberrypi/raspberrypios/pigpio.hpp"

namespace xos {
namespace platform {
namespace raspberrypi {

/// class pinoutt
template <class TExtends = extended::logged, class TImplements = typename TExtends::implements>
class exported pinoutt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef pinoutt derives;

    /// enum pin_t
    typedef int pin_t;
    enum {
        pin_first = 1,
        pin_next = 41,
        pin_last = pin_next - 1,
        pin_size = pin_next - pin_first
    }; /// enum pin_t

    enum { connect_size = pin_size };
    typedef pin_t connect_t[connect_size];

    typedef unsigned level_t;
    typedef level_t output_t[connect_size];

    /// constructor / destructor
    pinoutt() {
        derives*& the_pinout = derives::the_pinout();
        if ((the_pinout)) {
            throw (exception_exists);
        } else {
            the_pinout = this;
        }
        construct();
    }
    virtual ~pinoutt() {
        destruct();
        derives*& the_pinout = derives::the_pinout();
        if ((the_pinout)) {
            if ((the_pinout != this)) {
                throw (exception_unexpected);
            } else {
                the_pinout = 0;
            }
        } else {
            throw (exception_exist);
        }
    }
private:
    pinoutt(const pinoutt &copy): extends(copy) {
        throw exception(exception_unexpected);
    }
    void construct() {
        disconnect();
        clear();
    }
    void destruct() {
        clear();
        disconnect();
    }
public:

    /// ...input / ...output
    static level_t input(const pin_t& n) {
        level_t input = 0;
        LOGGER_LOG_INFO("((" << pin_first << " <= " << n << ") && (" << pin_last << " >= " << n << "))...");
        if ((pin_first <= n) && (pin_last >= n)) {
            derives* the_pinout = 0;
            LOGGER_LOG_INFO("...((" << pin_first << " <= " << n << ") && (" << pin_last << " >= " << n << "))");
            LOGGER_LOG_INFO("derives::the_pinout()...");
            if ((the_pinout = derives::the_pinout())) {
                pin_t n2 = (*the_pinout).connect_[n - pin_first];
                LOGGER_LOG_INFO("derives::the_pinout()...");
                LOGGER_LOG_INFO("..." << n2 << " = (*the_pinout).connect_[" << n - pin_first << "]");
                LOGGER_LOG_INFO("((" << pin_first << " <= " << n2 << ") && (" << pin_last << " >= " << n2 << "))...");
                if ((pin_first <= n2) && (pin_last >= n2)) {
                    LOGGER_LOG_INFO("...((" << pin_first << " <= " << n2 << ") && (" << pin_last << " >= " << n2 << "))");
                    LOGGER_LOG_INFO("(*the_pinout).output_[" << n2 - pin_first << "]...");
                    input = (*the_pinout).output_[n2 - pin_first];
                    LOGGER_LOG_INFO("..." << input << " = (*the_pinout).output_[" << n2 - pin_first << "]");
                }
            }
        }
        return input;
    }
    static level_t output(const pin_t& n, const level_t& v) {
        level_t value = 0;
        LOGGER_LOG_INFO("((" << pin_first << " <= " << n << ") && (" << pin_last << " >= " << n << "))...");
        if ((pin_first <= n) && (pin_last >= n)) {
            derives* the_pinout = 0;
            LOGGER_LOG_INFO("...((" << pin_first << " <= " << n << ") && (" << pin_last << " >= " << n << "))");
            LOGGER_LOG_INFO("derives::the_pinout()...");
            if ((the_pinout = derives::the_pinout())) {
                LOGGER_LOG_INFO("...derives::the_pinout()");
                value = ((*the_pinout).output_[n - pin_first] = v);
                LOGGER_LOG_INFO("..." << value << " = ((*the_pinout).output_[" << n - pin_first << "] = " << v << ")");
            }
        }
        return value;
    }

    /// ...connect
    static void connect(const pin_t& n, const pin_t& n2) {
        LOGGER_LOG_INFO("((" << pin_first << " <= " << n << ") && (" << pin_last << " >= " << n << "))...");
        LOGGER_LOG_INFO("((" << pin_first << " <= " << n2 << ") && (" << pin_last << " >= " << n2 << "))...");
        if (((pin_first <= n) && (pin_last >= n))
            && ((pin_first <= n2) && (pin_last >= n2))) {
            derives* the_pinout = 0;
            LOGGER_LOG_INFO("...((" << pin_first << " <= " << n << ") && (" << pin_last << " >= " << n << "))");
            LOGGER_LOG_INFO("...((" << pin_first << " <= " << n2 << ") && (" << pin_last << " >= " << n2 << "))");
            LOGGER_LOG_INFO("derives::the_pinout()...");
            if ((the_pinout = derives::the_pinout())) {
                LOGGER_LOG_INFO("...derives::the_pinout()");
                LOGGER_LOG_INFO("(*the_pinout).connect_[" << n - pin_first << "] = " << n2 << "...");
                (*the_pinout).connect_[n - pin_first] = n2;
            }
        }
    }
    static void disconnect(const pin_t& n) {
        if ((pin_first >= n) && (pin_last <= n)) {
            derives* the_pinout = 0;
            if ((the_pinout = derives::the_pinout())) {
                (*the_pinout).connect_[n - pin_first] = 0;
            }
        }
    }

protected:
    virtual connect_t& disconnect() {
        for (pin_t n = 0; n < connect_size; ++n) {
            connect_[n] = 0;
        }
        return connect_;
    }
    virtual output_t& clear() {
        for (pin_t n = 0; n < connect_size; ++n) {
            output_[n] = 0;
        }
        return output_;
    }
    static derives*& the_pinout() {
        static derives* the_pinout = 0;
        return the_pinout;
    }

protected:
    connect_t connect_;
    output_t output_;
}; /// class pinoutt
typedef pinoutt<> pinout;

} /// namespace raspberrypi 
} /// namespace platform 
} /// namespace xos 

#endif /// ndef XOS_PLATFORM_RASPBERRYPI_PINOUT_HPP

