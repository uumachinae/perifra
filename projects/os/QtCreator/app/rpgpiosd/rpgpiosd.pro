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
#   File: rpgpiosd.pro
#
# Author: $author$
#   Date: 8/27/2025
#
# os specific QtCreator project .pro file for framework perifra executable rpgpiosd
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;talas;bn;mp
#
# Debug: perifra/build/os/QtCreator/Debug/bin/rpgpiosd
# Release: perifra/build/os/QtCreator/Release/bin/rpgpiosd
# Profile: perifra/build/os/QtCreator/Profile/bin/rpgpiosd
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/rpgpiosd/rpgpiosd.pri)

TARGET = $${rpgpiosd_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${rpgpiosd_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${rpgpiosd_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${rpgpiosd_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${rpgpiosd_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${rpgpiosd_HEADERS} \
$${rpgpiosd_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${rpgpiosd_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${rpgpiosd_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${rpgpiosd_LIBS} \
$${FRAMEWORKS} \

########################################################################
