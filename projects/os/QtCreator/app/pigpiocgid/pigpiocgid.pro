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
#   File: pigpiocgid.pro
#
# Author: $author$
#   Date: 8/22/2025
#
# os specific QtCreator project .pro file for framework perifra executable pigpiocgid
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;talas
#
# Debug: perifra/build/os/QtCreator/Debug/bin/pigpiocgid
# Release: perifra/build/os/QtCreator/Release/bin/pigpiocgid
# Profile: perifra/build/os/QtCreator/Profile/bin/pigpiocgid
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/pigpiocgid/pigpiocgid.pri)

TARGET = $${pigpiocgid_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${pigpiocgid_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${pigpiocgid_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${pigpiocgid_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${pigpiocgid_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${pigpiocgid_HEADERS} \
$${pigpiocgid_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${pigpiocgid_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${pigpiocgid_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${pigpiocgid_LIBS} \
$${FRAMEWORKS} \

########################################################################
