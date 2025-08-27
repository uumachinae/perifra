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
///   File: pinout.cpp
///
/// Author: $author$
///   Date: 1/10/2025
//////////////////////////////////////////////////////////////////////////
#include "xos/platform/raspberrypi/pinout.hpp"

#ifndef XOS_PLATFORM_RASPBERRYPI_PINOUT_INSTANCE
/// #define XOS_PLATFORM_RASPBERRYPI_PINOUT_INSTANCE 
#else /// ndef XOS_PLATFORM_RASPBERRYPI_PINOUT_INSTANCE 
#endif /// ndef XOS_PLATFORM_RASPBERRYPI_PINOUT_INSTANCE 

namespace xos {
namespace platform {
namespace raspberrypi {

/// class pinoutt
#ifdef XOS_PLATFORM_RASPBERRYPI_PINOUT_INSTANCE
static pinout the_pinout;
#endif /// def XOS_PLATFORM_RASPBERRYPI_PINOUT_INSTANCE 

} /// namespace raspberrypi 
} /// namespace platform 
} /// namespace xos 

