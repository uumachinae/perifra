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
///   File: implement.hpp
///
/// Author: $author$
///   Date: 1/8/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_GPIO_IMPLEMENT_HPP
#define XOS_GPIO_IMPLEMENT_HPP

#include "xos/base/initialized.hpp"
#include "xos/base/finalized.hpp"
#include "xos/base/logged.hpp"
#include "xos/base/logger.hpp"
#include "xos/base/string.hpp"
#include "xos/base/to_string.hpp"

namespace xos {
namespace gpio {

/// class implementt
template 
<class TString = xos::string, class TImplement = xos::implement, 
 class TLogged = xos::loggedt<TImplement>, class TInitialized = xos::initializedt<TLogged>, 
 class TFinalized = xos::finalizedt<TInitialized>, class TImplements = TFinalized>
class exported implementt: virtual public TImplements {
public:
    typedef TImplements implements;
    typedef implementt derives;

    typedef TString string_t;
    typedef typename string_t::char_t char_t;
    typedef xos::to_stringt<uint8_t, char_t, string_t> uint8_to_string_t;
    
    typedef TInitialized initialized_t;
    typedef TFinalized finalized_t;
    typedef TLogged logged_t;
    typedef TImplement implement_t;

    /// constructor / destructor
    virtual ~implementt() {
    }

    /// ...initialize...
    virtual bool initialize() {
        bool initialized = false;
        LOGGER_IS_LOGGED_INFO("((initialized = implements::initialize()))...");
        if ((initialized = implements::initialize())) {
            LOGGER_IS_LOGGED_INFO("...((initialized = implements::initialize()))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((initialized = implements::initialize()))");
        }
        return initialized;
    }

    /// ...finalize...
    virtual bool finalize() {
        bool finalized = false;
        LOGGER_IS_LOGGED_INFO("((finalized = implements::finalize()))...");
        if ((finalized = implements::finalize())) {
            LOGGER_IS_LOGGED_INFO("...((finalized = implements::finalize()))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((finalized = implements::finalize()))");
        }
        return finalized;
    }

    /// ...value
    virtual int8_t set_value(uint8_t of, uint8_t to) {
        int8_t value = 0;
        LOGGER_IS_LOGGED_INFO("(uint8_t of = " << of << ", uint8_t to = " << to << ") ...");
        return value;
    }
    virtual int8_t get_value(uint8_t of) {
        int8_t value = 0;
        LOGGER_IS_LOGGED_INFO("(uint8_t of = " << of << ") ...");
        return value;
    }
    virtual const char_t* value_name(uint8_t of) {
        const char_t* value_name_chars = 0;
        LOGGER_IS_LOGGED_INFO("(uint8_t of = " << of << ") ...");
        return value_name_chars;
    }
    
    /// ...mode
    virtual int8_t set_mode(uint8_t of, uint8_t to) {
        int8_t mode = 0;
        LOGGER_IS_LOGGED_INFO("(uint8_t of = " << of << ", uint8_t to = " << to << ") ...");
        return mode;
    }
    virtual int8_t get_mode(uint8_t of) {
        int8_t mode = 0;
        LOGGER_IS_LOGGED_INFO("(uint8_t of = " << of << ") ...");
        return mode;
    }
    virtual const char_t* mode_name(uint8_t of) {
        const char_t* mode_name_chars = 0;
        LOGGER_IS_LOGGED_INFO("(uint8_t of = " << of << ") ...");
        return mode_name_chars;
    }
    
protected:
}; /// class implementt
typedef implementt<> implement;

} /// namespace gpio 
} /// namespace xos 

#endif /// ndef XOS_GPIO_IMPLEMENT_HPP

