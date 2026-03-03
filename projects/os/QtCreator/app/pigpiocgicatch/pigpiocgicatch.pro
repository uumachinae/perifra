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
#   File: pigpiocgicatch.pro
#
# Author: $author$
#   Date: 8/21/2025
#
# os specific QtCreator project .pro file for framework perifra executable pigpiocgicatch
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;talas
#
# Debug: perifra/build/os/QtCreator/Debug/bin/pigpiocgicatch
# Release: perifra/build/os/QtCreator/Release/bin/pigpiocgicatch
# Profile: perifra/build/os/QtCreator/Profile/bin/pigpiocgicatch
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/pigpiocgicatch/pigpiocgicatch.pri)

TARGET = $${pigpiocgicatch_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${pigpiocgicatch_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${pigpiocgicatch_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${pigpiocgicatch_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${pigpiocgicatch_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${pigpiocgicatch_HEADERS} \
$${pigpiocgicatch_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${pigpiocgicatch_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${pigpiocgicatch_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${pigpiocgicatch_LIBS} \
$${FRAMEWORKS} \

########################################################################
