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
///   Date: 1/8/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_GPIO_OS_GPIO_HPP
#define XOS_GPIO_OS_GPIO_HPP

#include "xos/gpio/os/os.hpp"

#if defined(WINDOWS)  
#include "xos/gpio/microsoft/windows/gpio.hpp"
#elif defined(RASPBERRYPIOS)  
#include "xos/gpio/raspberrypi/raspberrypios/pigpio/gpio.hpp"
#elif defined(APPLEOSX)  
#include "xos/gpio/apple/osx/gpio.hpp"
#elif defined(APPLEIOS)  
#include "xos/gpio/apple/ios/gpio.hpp"
#elif defined(SOLARIS)  
#include "xos/gpio/oracle/solaris/gpio.hpp"
#elif defined(MACH)  
#include "xos/gpio/mach/gpio.hpp"
#elif defined(LINUX)  
#include "xos/gpio/linux/gpio.hpp"
#else /// defined(LINUX)  
#include "xos/gpio/posix/gpio.hpp"
#endif /// defined(LINUX) 

namespace xos {
namespace gpio {
namespace os {

#if defined(RASPBERRYPIOS)
typedef xos::gpio::os::os::pigpio::gpio gpio;
#else /// if defined(RASPBERRYPIOS) 
typedef xos::gpio::os::os::gpio gpio;
#endif /// if defined(RASPBERRYPIOS) 

} /// namespace os 
} /// namespace gpio 
} /// namespace xos 

#endif /// ndef XOS_GPIO_OS_GPIO_HPP

