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
#   File: pigpiosd.pro
#
# Author: $author$
#   Date: 8/26/2025
#
# os specific QtCreator project .pro file for framework perifra executable pigpiosd
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;talas;bn;mp
#
# Debug: perifra/build/os/QtCreator/Debug/bin/pigpiosd
# Release: perifra/build/os/QtCreator/Release/bin/pigpiosd
# Profile: perifra/build/os/QtCreator/Profile/bin/pigpiosd
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/pigpiosd/pigpiosd.pri)

TARGET = $${pigpiosd_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${pigpiosd_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${pigpiosd_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${pigpiosd_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${pigpiosd_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${pigpiosd_HEADERS} \
$${pigpiosd_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${pigpiosd_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${pigpiosd_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${pigpiosd_LIBS} \
$${FRAMEWORKS} \

########################################################################
