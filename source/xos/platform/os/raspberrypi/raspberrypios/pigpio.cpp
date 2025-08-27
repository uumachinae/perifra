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
///   File: pigpio.cpp
///
/// Author: $author$
///   Date: 1/10/2025
//////////////////////////////////////////////////////////////////////////
#include "xos/platform/os/raspberrypi/raspberrypios/pigpio.hpp"
#include "xos/platform/os/raspberrypi/raspberrypios/pigpio.c"
#include "xos/platform/raspberrypi/gpio.hpp"

namespace xos {
namespace platform {
namespace os {
namespace raspberrypi {
namespace raspberrypios {

} /// namespace raspberrypios 
} /// namespace raspberrypi 
} /// namespace os 
} /// namespace platform 
} /// namespace xos 

#if !defined(RASPBERRYPIOS)
static xos::platform::raspberrypi::pinout* the_pinout = 0;
static xos::platform::raspberrypi::gpio* the_gpio = 0;

/// ...Initialise / ...Terminate
int gpioInitialise(void) {
    int err = 1;
    LOGGER_LOG_INFO("((the_pinout = new xos::platform::raspberrypi::pinout()))...");
    if ((the_pinout = new xos::platform::raspberrypi::pinout())) {
        LOGGER_LOG_INFO("((the_gpio = new xos::platform::raspberrypi::gpio()))...");
        if ((the_gpio = new xos::platform::raspberrypi::gpio())) {
            LOGGER_LOG_INFO("return err = 0...");
            return err = 0;
        }
        LOGGER_LOG_INFO("delete the_pinout...");
        delete the_pinout;
        LOGGER_LOG_INFO("the_pinout = 0...");
        the_pinout = 0;
    }
    return err;
}
void gpioTerminate(void) {
    LOGGER_LOG_INFO("((the_gpio))...");
    if ((the_gpio)) {
        LOGGER_LOG_INFO("delete the_gpio...");
        delete the_gpio;
        LOGGER_LOG_INFO("the_gpio = 0...");
        the_gpio = 0;
    }
    LOGGER_LOG_INFO("((the_pinout))...");
    if ((the_pinout)) {
        LOGGER_LOG_INFO("delete the_pinout...");
        delete the_pinout;
        LOGGER_LOG_INFO("the_pinout = 0...");
        the_pinout = 0;
    }
}

/// ...Mode
int gpioGetMode(unsigned gpio) {
    int err = 0;
    LOGGER_LOG_INFO("(unsigned gpio = " << gpio << ")...");
    return err;
}
int gpioSetMode(unsigned gpio, unsigned mode) {
    int err = 0;
    LOGGER_LOG_INFO("(unsigned gpio = " << gpio << ", unsigned mode = " << mode << ")...");
    return err;
}

/// ...Read / ...Write
int gpioRead(unsigned gpio) {
    int err = -1;
    LOGGER_LOG_INFO("xos::platform::raspberrypi::gpio::read(unsigned gpio = " << gpio << ")...");
    err = xos::platform::raspberrypi::gpio::read(gpio);
    LOGGER_LOG_INFO("..." << err << " = xos::platform::raspberrypi::gpio::read(unsigned gpio = " << gpio << ")");
    return err;
}
int gpioWrite(unsigned gpio, unsigned level) {
    int err = -1;
    LOGGER_LOG_INFO("xos::platform::raspberrypi::gpio::write((unsigned gpio = " << gpio << ", unsigned level = " << level << ")...");
    err = xos::platform::raspberrypi::gpio::write(gpio, level);
    LOGGER_LOG_INFO("..." << err << " = xos::platform::raspberrypi::gpio::write((unsigned gpio = " << gpio << ", unsigned level = " << level << ")");
    return err;
}
#else /// !defined(RASPBERRYPIOS)
#endif /// !defined(RASPBERRYPIOS)
