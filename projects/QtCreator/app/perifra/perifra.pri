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
#   File: perifra.pri
#
# Author: $author$
#   Date: 8/22/2025
#
# generic QtCreator project .pri file for framework perifra executable perifra
########################################################################

########################################################################
# perifra

# perifra_exe TARGET
#
perifra_exe_TARGET = perifra

# perifra_exe INCLUDEPATH
#
perifra_exe_INCLUDEPATH += \
$${perifra_INCLUDEPATH} \

# perifra_exe DEFINES
#
perifra_exe_DEFINES += \
$${perifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# perifra_exe OBJECTIVE_HEADERS
#
#perifra_exe_OBJECTIVE_HEADERS += \
#$${PERIFRA_SRC}/xos/app/console/perifra/main.hh \

# perifra_exe OBJECTIVE_SOURCES
#
#perifra_exe_OBJECTIVE_SOURCES += \
#$${PERIFRA_SRC}/xos/app/console/perifra/main.mm \

########################################################################
# perifra_exe HEADERS
#
perifra_exe_HEADERS += \
$${PERIFRA_SRC}/xos/app/console/framework/version/main.hpp \
$${PERIFRA_SRC}/xos/app/console/framework/version/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/perifra/version/main.hpp \
$${PERIFRA_SRC}/xos/app/console/perifra/version/main_opt.hpp \

# perifra_exe SOURCES
#
perifra_exe_SOURCES += \
$${PERIFRA_SRC}/xos/app/console/perifra/version/main.cpp \
$${PERIFRA_SRC}/xos/app/console/perifra/version/main_opt.cpp \

########################################################################
# perifra_exe FRAMEWORKS
#
perifra_exe_FRAMEWORKS += \
$${perifra_FRAMEWORKS} \

# perifra_exe LIBS
#
perifra_exe_LIBS += \
$${perifra_LIBS} \

########################################################################
# NO Qt
QT -= gui core
