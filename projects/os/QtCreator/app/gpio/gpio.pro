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
#   File: gpio.pro
#
# Author: $author$
#   Date: 8/27/2025
#
# os specific QtCreator project .pro file for framework perifra executable gpio
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;talas;bn;mp
#
# Debug: perifra/build/os/QtCreator/Debug/bin/gpio
# Release: perifra/build/os/QtCreator/Release/bin/gpio
# Profile: perifra/build/os/QtCreator/Profile/bin/gpio
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/gpio/gpio.pri)

TARGET = $${gpio_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${gpio_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${gpio_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${gpio_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${gpio_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${gpio_HEADERS} \
$${gpio_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${gpio_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${gpio_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${gpio_LIBS} \
$${FRAMEWORKS} \

########################################################################
