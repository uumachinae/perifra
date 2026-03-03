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
#   File: libperifra.pro
#
# Author: $author$
#   Date: 8/21/2025
#
# os specific QtCreator project .pro file for framework perifra static library libperifra
########################################################################
# Depends: rostra;nadir;fila;crono;rete;stara;talas
#
# Debug: perifra/build/os/QtCreator/Debug/lib/libperifra
# Release: perifra/build/os/QtCreator/Release/lib/libperifra
# Profile: perifra/build/os/QtCreator/Profile/lib/libperifra
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/lib/libperifra/libperifra.pri)

TARGET = $${libperifra_TARGET}
TEMPLATE = $${libperifra_TEMPLATE}
CONFIG += $${libperifra_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libperifra_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libperifra_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libperifra_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libperifra_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libperifra_HEADERS} \
$${libperifra_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libperifra_SOURCES} \

########################################################################
