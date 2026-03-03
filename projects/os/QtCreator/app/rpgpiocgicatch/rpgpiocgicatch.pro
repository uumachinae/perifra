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
#   File: rpgpiocgicatch.pro
#
# Author: $author$
#   Date: 8/27/2025
#
# os specific QtCreator project .pro file for framework perifra executable rpgpiocgicatch
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;talas;bn;mp
#
# Debug: perifra/build/os/QtCreator/Debug/bin/rpgpiocgicatch
# Release: perifra/build/os/QtCreator/Release/bin/rpgpiocgicatch
# Profile: perifra/build/os/QtCreator/Profile/bin/rpgpiocgicatch
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/rpgpiocgicatch/rpgpiocgicatch.pri)

TARGET = $${rpgpiocgicatch_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${rpgpiocgicatch_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${rpgpiocgicatch_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${rpgpiocgicatch_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${rpgpiocgicatch_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${rpgpiocgicatch_HEADERS} \
$${rpgpiocgicatch_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${rpgpiocgicatch_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${rpgpiocgicatch_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${rpgpiocgicatch_LIBS} \
$${FRAMEWORKS} \

########################################################################
