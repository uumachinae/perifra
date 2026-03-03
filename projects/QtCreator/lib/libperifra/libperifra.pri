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
#   File: libperifra.pri
#
# Author: $author$
#   Date: 8/21/2025
#
# generic QtCreator project .pri file for framework perifra static library libperifra
########################################################################

########################################################################
# libperifra
XOS_LIB_PERIFRA_VERSION_BUILD_DATE = 8/21/2025 #$$system(~/bin/utility/tdate)

# libperifra TARGET
#
libperifra_TARGET = perifra
libperifra_TEMPLATE = lib
libperifra_CONFIG += staticlib

# libperifra INCLUDEPATH
#
libperifra_INCLUDEPATH += \
$${perifra_INCLUDEPATH} \

# libperifra DEFINES
#
libperifra_DEFINES += \
$${perifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_PERIFRA_VERSION_BUILD_DATE=$${XOS_LIB_PERIFRA_VERSION_BUILD_DATE} \

########################################################################
# libperifra OBJECTIVE_HEADERS
#
#libperifra_OBJECTIVE_HEADERS += \
#$${PERIFRA_SRC}/xos/lib/perifra/version.hh \

# libperifra OBJECTIVE_SOURCES
#
#libperifra_OBJECTIVE_SOURCES += \
#$${PERIFRA_SRC}/xos/lib/perifra/version.mm \

########################################################################
# libperifra HEADERS
#
libperifra_HEADERS += \
$${PERIFRA_SRC}/xos/lib/perifra/version.hpp \

# libperifra SOURCES
#
libperifra_SOURCES += \
$${PERIFRA_SRC}/xos/lib/perifra/version.cpp \

########################################################################
