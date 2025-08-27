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
///   File: version.cpp
///
/// Author: $author$
///   Date: 1/11/2025
//////////////////////////////////////////////////////////////////////////
#include "xos/lib/pigpio/version.hpp"

#ifndef XOS_LIB_PIGPIO_VERSION_NAME
#define XOS_LIB_PIGPIO_VERSION_NAME "libpigpio"
#endif /// ndef XOS_LIB_PIGPIO_VERSION_NAME 

#ifndef XOS_LIB_PIGPIO_VERSION_MAJOR
#define XOS_LIB_PIGPIO_VERSION_MAJOR 0
#endif /// ndef XOS_LIB_PIGPIO_VERSION_MAJOR 

#ifndef XOS_LIB_PIGPIO_VERSION_MINOR
#define XOS_LIB_PIGPIO_VERSION_MINOR 0
#endif /// ndef XOS_LIB_PIGPIO_VERSION_MINOR 

#ifndef XOS_LIB_PIGPIO_VERSION_RELEASE
#define XOS_LIB_PIGPIO_VERSION_RELEASE 0
#endif /// ndef XOS_LIB_PIGPIO_VERSION_RELEASE 

#ifndef XOS_LIB_PIGPIO_VERSION_BUILD_PREFIX
/// #define XOS_LIB_PIGPIO_VERSION_BUILD_PREFIX build 
#endif /// ndef XOS_LIB_PIGPIO_VERSION_BUILD_PREFIX 

#ifndef XOS_LIB_PIGPIO_VERSION_BUILD_DATE
#define XOS_LIB_PIGPIO_VERSION_BUILD_DATE 1/11/2025
#endif /// ndef XOS_LIB_PIGPIO_VERSION_BUILD_DATE 

#ifndef XOS_LIB_PIGPIO_VERSION_BUILD
#ifndef XOS_LIB_PIGPIO_VERSION_BUILD_PREFIX
#define  XOS_LIB_PIGPIO_VERSION_BUILD  XOS_LIB_PIGPIO_VERSION_BUILD_DATE
#else /// ndef XOS_LIB_PIGPIO_VERSION_BUILD_PREFIX 
#define  XOS_LIB_PIGPIO_VERSION_BUILD  XOS_LIB_PIGPIO_VERSION_BUILD_PREFIX-XOS_LIB_PIGPIO_VERSION_BUILD_DATE
#endif /// ndef XOS_LIB_PIGPIO_VERSION_BUILD_PREFIX 
#endif /// ndef XOS_LIB_PIGPIO_VERSION_BUILD 

#ifndef XOS_LIB_PIGPIO_VERSION_BUILD_CHARS
#define XOS_LIB_PIGPIO_VERSION_BUILD_CHARS XOS_2CHARS(XOS_LIB_PIGPIO_VERSION_BUILD)
#endif /// ndef XOS_LIB_PIGPIO_VERSION_BUILD_CHARS 

namespace xos {
namespace lib {
namespace pigpio {

namespace which {
/// class versiont
template <class TExtends = lib::extended::version, class TImplements = typename TExtends::implements>
class exported versiont: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef versiont derives;

    /// constructor / destructor 
    versiont(const versiont& copy): extends(copy) {
    }
    versiont(): extends
    (XOS_LIB_PIGPIO_VERSION_NAME, 
     XOS_LIB_PIGPIO_VERSION_MAJOR, XOS_LIB_PIGPIO_VERSION_MINOR, 
     XOS_LIB_PIGPIO_VERSION_RELEASE, XOS_LIB_PIGPIO_VERSION_BUILD_CHARS) {
    }
    virtual ~versiont() {
    }
}; /// class versiont 
typedef versiont<> version;
} /// namespace which 

/// class version
const xos::lib::version &version::which() {
    static const xos::lib::pigpio::which::version version;
    return version;
}

} /// namespace pigpio 
} /// namespace lib 
} /// namespace xos 

