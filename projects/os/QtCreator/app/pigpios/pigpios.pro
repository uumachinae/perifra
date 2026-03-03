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
#   File: pigpios.pro
#
# Author: $author$
#   Date: 8/26/2025
#
# os specific QtCreator project .pro file for framework perifra executable pigpios
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;talas;bn;mp
#
# Debug: perifra/build/os/QtCreator/Debug/bin/pigpios
# Release: perifra/build/os/QtCreator/Release/bin/pigpios
# Profile: perifra/build/os/QtCreator/Profile/bin/pigpios
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/pigpios/pigpios.pri)

TARGET = $${pigpios_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${pigpios_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${pigpios_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${pigpios_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${pigpios_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${pigpios_HEADERS} \
$${pigpios_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${pigpios_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${pigpios_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${pigpios_LIBS} \
$${FRAMEWORKS} \

########################################################################
