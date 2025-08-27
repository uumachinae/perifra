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
///   File: gpio.hpp
///
/// Author: $author$
///   Date: 1/10/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_PLATFORM_RASPBERRYPI_GPIO_HPP
#define XOS_PLATFORM_RASPBERRYPI_GPIO_HPP

#include "xos/platform/raspberrypi/pinout.hpp"

namespace xos {
namespace platform {
namespace raspberrypi {

/// class gpiot
template
<class TPinout = xos::platform::raspberrypi::pinout,
 class TExtends = extended::logged, class TImplements = typename TExtends::implements>
class exported gpiot: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef gpiot derives;

    /// enum gpio_t
    typedef int gpio_t;
    enum {
        gpio_first = 2,
        gpio_next = 28,
        gpio_last = gpio_next - 1,
        gpio_size = gpio_next - gpio_first
    }; /// enum gpio_t

    enum { connect_size = gpio_size };
    typedef gpio_t connect_t[connect_size];

    /// enum pin_t
    typedef TPinout pinout_t;
    typedef typename pinout_t::level_t level_t;
    typedef typename pinout_t::pin_t pin_t;
    enum {
        pin_first = pinout_t::pin_first,
        pin_next = pinout_t::pin_next,
        pin_last = pinout_t::pin_last,
        pin_size = pinout_t::pin_size
    }; /// enum pin_t

    /// constructor / destructor
    gpiot() {
        derives*& the_gpio = derives::the_gpio();
        if ((the_gpio)) {
            throw (exception_exists);
        } else {
            the_gpio = this;
        }
        construct();
    }
    virtual ~gpiot() {
        destruct();
        derives*& the_gpio = derives::the_gpio();
        if ((the_gpio)) {
            if ((the_gpio != this)) {
                throw (exception_unexpected);
            } else {
                the_gpio = 0;
            }
        } else {
            throw (exception_exist);
        }
    }
private:
    gpiot(const gpiot &copy): extends(copy) {
        throw exception(exception_unexpected);
    }
    void construct() {
        connect();
    }
    void destruct() {
        disconnect();
    }
public:

    /// ...read / ...write
    static int read(gpio_t gpio) {
        int result = -1;
        LOGGER_LOG_INFO("(" << gpio_first << " <= " << gpio << ") && (" << gpio_last << " >= " << gpio << ")...");
        if ((gpio_first <= gpio) && (gpio_last >= gpio)) {
            derives* the_gpio = 0;
            LOGGER_LOG_INFO("...(" << gpio_first << " <= " << gpio << ") && (" << gpio_last << " >= " << gpio << ")");
            LOGGER_LOG_INFO("((the_gpio = derives::the_gpio()))...");
            if ((the_gpio = derives::the_gpio())) {
                pin_t pin = 0;
                LOGGER_LOG_INFO("...((the_gpio = derives::the_gpio()))");
                LOGGER_LOG_INFO("(*the_gpio).connect_[" << gpio << " - " << gpio_first << "]...");
                if ((pin = (*the_gpio).connect_[gpio - gpio_first])) {
                    LOGGER_LOG_INFO("..." << pin << " = (*the_gpio).connect_[" << gpio - gpio_first << "]");
                    LOGGER_LOG_INFO("pinout_t::input(pin = " << pin << ")...");
                    result = pinout_t::input(pin);
                    LOGGER_LOG_INFO("..." << result << " = pinout_t::input(pin = " << pin << ")");
                } else {
                    LOGGER_LOG_ERROR("...failed " << pin << " = (*the_gpio).connect_[" << gpio - gpio_first << "]");
                }
            } else {
                LOGGER_LOG_INFO("failed on ...((the_gpio = derives::the_gpio()))");
            }
        }
        return result;
    }
    static int write(gpio_t gpio, const level_t& level) {
        int result = -1;
        LOGGER_LOG_INFO("(" << gpio_first << " <= " << gpio << ") && (" << gpio_last << " >= " << gpio << ")...");
        if ((gpio_first <= gpio) && (gpio_last >= gpio)) {
            derives* the_gpio = 0;
            LOGGER_LOG_INFO("...(" << gpio_first << " <= " << gpio << ") && (" << gpio_last << " >= " << gpio << ")");
            LOGGER_LOG_INFO("((the_gpio = derives::the_gpio()))...");
            if ((the_gpio = derives::the_gpio())) {
                pin_t pin = 0;
                LOGGER_LOG_INFO("...((the_gpio = derives::the_gpio()))");
                LOGGER_LOG_INFO("(*the_gpio).connect_[" << gpio << " - " << gpio_first << "]...");
                if ((pin = (*the_gpio).connect_[gpio - gpio_first])) {
                    LOGGER_LOG_INFO("..." << pin << " = (*the_gpio).connect_[" << gpio - gpio_first << "]");
                    LOGGER_LOG_INFO("pinout_t::output(" << pin << ", " << level << ")...");
                    pinout_t::output(pin, level);
                    LOGGER_LOG_INFO("...pinout_t::output(" << pin << ", " << level << ")");
                    result = 0;
                } else {
                    LOGGER_LOG_ERROR("...failed " << pin << " = (*the_gpio).connect_[" << gpio - gpio_first << "]");
                }
            } else {
                LOGGER_LOG_INFO("failed on ...((the_gpio = derives::the_gpio()))");
            }
        }
        return result;
    }

protected:
    virtual connect_t& connect() {
        for (gpio_t b = gpio_first; b < gpio_next; ++b) {
            gpio_t n = b - gpio_first;
            connect_[n] = 0;
            switch(b) {
            case 17:
                LOGGER_LOG_INFO("...connect_[" << n << "] = 11");
                connect_[n] = 11;
                break;
            case 22:
                LOGGER_LOG_INFO("...connect_[" << n << "] = 15");
                connect_[n] = 15;
                LOGGER_LOG_INFO("pinout_t::connect(15, 11)...");
                pinout_t::connect(15, 11);
                break;
            case 23:
                LOGGER_LOG_INFO("...connect_[" << n << "] = 16");
                connect_[n] = 16;
                LOGGER_LOG_INFO("pinout_t::connect(16, 13)...");
                pinout_t::connect(16, 13);
                break;
            case 24:
                LOGGER_LOG_INFO("...connect_[" << n << "] = 18");
                connect_[n] = 18;
                break;
            case 25:
                LOGGER_LOG_INFO("...connect_[" << n << "] = 22");
                connect_[n] = 22;
                LOGGER_LOG_INFO("pinout_t::connect(22, 18)...");
                pinout_t::connect(22, 18);
                break;
            case 27:
                LOGGER_LOG_INFO("...connect_[" << n << "] = 13");
                connect_[n] = 13;
                break;
            default:
                break;
            }
        }
        return connect_;
    }
    virtual connect_t& disconnect() {
        for (gpio_t b = gpio_first; b < gpio_last; ++b) {
            gpio_t n = b - gpio_first;
            connect_[n] = 0;
            switch(b) {
            case 22:
                pinout_t::disconnect(15);
                break;
            case 23:
                pinout_t::disconnect(16);
                break;
            case 24:
                pinout_t::disconnect(18);
                break;
            default:
                break;
            }
        }
        return connect_;
    }
    static derives*& the_gpio() {
        static derives* the_gpio = 0;
        return the_gpio;
    }

protected:
    connect_t connect_;
}; /// class gpiot
typedef gpiot<> gpio;

} /// namespace raspberrypi 
} /// namespace platform 
} /// namespace xos 

#endif /// ndef XOS_PLATFORM_RASPBERRYPI_GPIO_HPP

