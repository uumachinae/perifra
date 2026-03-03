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
#   File: gpiod.pro
#
# Author: $author$
#   Date: 8/27/2025
#
# os specific QtCreator project .pro file for framework perifra executable gpiod
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;talas;bn;mp
#
# Debug: perifra/build/os/QtCreator/Debug/bin/gpiod
# Release: perifra/build/os/QtCreator/Release/bin/gpiod
# Profile: perifra/build/os/QtCreator/Profile/bin/gpiod
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/gpiod/gpiod.pri)

TARGET = $${gpiod_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${gpiod_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${gpiod_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${gpiod_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${gpiod_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${gpiod_HEADERS} \
$${gpiod_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${gpiod_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${gpiod_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${gpiod_LIBS} \
$${FRAMEWORKS} \

########################################################################
