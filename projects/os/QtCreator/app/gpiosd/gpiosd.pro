########################################################################
# Copyright (c) 1988-2025 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: gpiosd.pro
#
# Author: $author$
#   Date: 8/27/2025
#
# os specific QtCreator project .pro file for framework perifra executable gpiosd
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;talas;bn;mp
#
# Debug: perifra/build/os/QtCreator/Debug/bin/gpiosd
# Release: perifra/build/os/QtCreator/Release/bin/gpiosd
# Profile: perifra/build/os/QtCreator/Profile/bin/gpiosd
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/gpiosd/gpiosd.pri)

TARGET = $${gpiosd_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${gpiosd_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${gpiosd_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${gpiosd_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${gpiosd_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${gpiosd_HEADERS} \
$${gpiosd_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${gpiosd_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${gpiosd_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${gpiosd_LIBS} \
$${FRAMEWORKS} \

########################################################################
