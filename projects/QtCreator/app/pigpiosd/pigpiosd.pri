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
#   File: pigpiosd.pri
#
# Author: $author$
#   Date: 8/26/2025
#
# generic QtCreator project .pri file for framework perifra executable pigpiosd
########################################################################

########################################################################
# pigpiosd

# pigpiosd TARGET
#
pigpiosd_TARGET = pigpiosd

# pigpiosd INCLUDEPATH
#
pigpiosd_INCLUDEPATH += \
$${perifra_INCLUDEPATH} \

# pigpiosd DEFINES
#
pigpiosd_DEFINES += \
$${perifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# pigpiosd OBJECTIVE_HEADERS
#
#pigpiosd_OBJECTIVE_HEADERS += \
#$${PERIFRA_SRC}/xos/app/console/pigpiosd/main.hh \

# pigpiosd OBJECTIVE_SOURCES
#
#pigpiosd_OBJECTIVE_SOURCES += \
#$${PERIFRA_SRC}/xos/app/console/pigpiosd/main.mm \

########################################################################
# pigpiosd HEADERS
#
pigpiosd_HEADERS += \
$${NADIR_SRC}/xos/base/acquired.hpp \
$${NADIR_SRC}/xos/base/argv.hpp \
$${NADIR_SRC}/xos/base/array.hpp \
$${NADIR_SRC}/xos/base/arrays.hpp \
$${NADIR_SRC}/xos/base/attached.hpp \
$${NADIR_SRC}/xos/base/base.hpp \
$${NADIR_SRC}/xos/base/chars.hpp \
$${NADIR_SRC}/xos/base/created.hpp \
$${NADIR_SRC}/xos/base/error.hpp \
$${NADIR_SRC}/xos/base/exception.hpp \
$${NADIR_SRC}/xos/base/extended/creator.hpp \
$${NADIR_SRC}/xos/base/finalized.hpp \
$${NADIR_SRC}/xos/base/forked.hpp \
$${NADIR_SRC}/xos/base/initialized.hpp \
$${NADIR_SRC}/xos/base/joined.hpp \
$${NADIR_SRC}/xos/base/location.hpp \
$${NADIR_SRC}/xos/base/locked.hpp \
$${NADIR_SRC}/xos/base/logged.hpp \
$${NADIR_SRC}/xos/base/opened.hpp \
$${NADIR_SRC}/xos/base/pointed.hpp \
$${NADIR_SRC}/xos/base/ran.hpp \
$${NADIR_SRC}/xos/base/resumed.hpp \
$${NADIR_SRC}/xos/base/signaled.hpp \
$${NADIR_SRC}/xos/base/string.hpp \
$${NADIR_SRC}/xos/base/suspended.hpp \
$${NADIR_SRC}/xos/base/time.hpp \
$${NADIR_SRC}/xos/base/to_string.hpp \
$${NADIR_SRC}/xos/base/waited.hpp \
$${NADIR_SRC}/xos/base/wrapped.hpp \
\
$${NADIR_SRC}/xos/io/array/reader.hpp \
$${NADIR_SRC}/xos/io/base64/output_to.hpp \
$${NADIR_SRC}/xos/io/base64/read_to_output.hpp \
$${NADIR_SRC}/xos/io/base64/reader_to.hpp \
$${NADIR_SRC}/xos/io/base64/reader_to_events.hpp \
$${NADIR_SRC}/xos/io/base64/to_array.hpp \
$${NADIR_SRC}/xos/io/base64/write_to_output.hpp \
$${NADIR_SRC}/xos/io/base64/writer_to.hpp \
$${NADIR_SRC}/xos/io/base64/writer_to_events.hpp \
$${NADIR_SRC}/xos/io/console/output.hpp \
$${NADIR_SRC}/xos/io/crt/file/attached.hpp \
$${NADIR_SRC}/xos/io/crt/file/opened.hpp \
$${NADIR_SRC}/xos/io/crt/file/output.hpp \
$${NADIR_SRC}/xos/io/crt/file/reader.hpp \
$${NADIR_SRC}/xos/io/crt/file/stream.hpp \
$${NADIR_SRC}/xos/io/crt/file/writer.hpp \
$${NADIR_SRC}/xos/io/delegated/reader.hpp \
$${NADIR_SRC}/xos/io/delegated/reader_events.hpp \
$${NADIR_SRC}/xos/io/delegated/writer.hpp \
$${NADIR_SRC}/xos/io/delegated/writer_events.hpp \
$${NADIR_SRC}/xos/io/file/reader.hpp \
$${NADIR_SRC}/xos/io/file/writer.hpp \
$${NADIR_SRC}/xos/io/hex/output_to.hpp \
$${NADIR_SRC}/xos/io/hex/read_to_array.hpp \
$${NADIR_SRC}/xos/io/hex/read_to_arrays.hpp \
$${NADIR_SRC}/xos/io/hex/read_to_output.hpp \
$${NADIR_SRC}/xos/io/hex/read_to_string.hpp \
$${NADIR_SRC}/xos/io/hex/reader.hpp \
$${NADIR_SRC}/xos/io/hex/reader_to.hpp \
$${NADIR_SRC}/xos/io/hex/reader_to_events.hpp \
$${NADIR_SRC}/xos/io/hex/write_to_output.hpp \
$${NADIR_SRC}/xos/io/hex/writer_to.hpp \
$${NADIR_SRC}/xos/io/hex/writer_to_events.hpp \
$${NADIR_SRC}/xos/io/output.hpp \
$${NADIR_SRC}/xos/io/reader.hpp \
$${NADIR_SRC}/xos/io/seeker.hpp \
$${NADIR_SRC}/xos/io/sequence.hpp \
$${NADIR_SRC}/xos/io/stream.hpp \
$${NADIR_SRC}/xos/io/string/output.hpp \
$${NADIR_SRC}/xos/io/string/reader.hpp \
$${NADIR_SRC}/xos/io/string/writer.hpp \
$${NADIR_SRC}/xos/io/told.hpp \
$${NADIR_SRC}/xos/io/writer.hpp \
\
$${NADIR_SRC}/xos/console/error.hpp \
$${NADIR_SRC}/xos/console/getopt/main.hpp \
$${NADIR_SRC}/xos/console/getopt/main_opt.hpp \
$${NADIR_SRC}/xos/console/input.hpp \
$${NADIR_SRC}/xos/console/io.hpp \
$${NADIR_SRC}/xos/console/main.hpp \
$${NADIR_SRC}/xos/console/main_main.hpp \
$${NADIR_SRC}/xos/console/main_opt.hpp \
$${NADIR_SRC}/xos/console/out.hpp \
$${NADIR_SRC}/xos/console/output.hpp \
$${NADIR_SRC}/xos/console/sequence.hpp \
\
$${RETE_SRC}/xos/app/console/protocol/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/base/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/client/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/server/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/server/main_opt.hpp \
\
$${RETE_SRC}/xos/app/console/protocol/cr/base/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/cr/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/cr/client/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/cr/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/cr/server/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/cr/server/main_opt.hpp \
\
$${RETE_SRC}/xos/app/console/protocol/lf/base/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/lf/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/lf/client/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/lf/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/lf/server/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/lf/server/main_opt.hpp \
\
$${RETE_SRC}/xos/app/console/protocol/crlf/base/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/crlf/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/crlf/client/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/crlf/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/crlf/server/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/crlf/server/main_opt.hpp \
\
$${RETE_SRC}/xos/app/console/protocol/crlf2/base/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/crlf2/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/crlf2/client/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/crlf2/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/crlf2/server/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/crlf2/server/main_opt.hpp \
\
$${RETE_SRC}/xos/app/console/network/sockets/protocol/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/server/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/server/main_opt.hpp \
\
$${RETE_SRC}/xos/app/console/network/sockets/protocol/cr/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/cr/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/cr/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/cr/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/cr/server/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/cr/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/crlf/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/crlf/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/crlf/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/crlf/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/crlf/server/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/crlf/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/crlf2/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/crlf2/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/crlf2/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/crlf2/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/crlf2/server/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/crlf2/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/lf/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/lf/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/lf/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/lf/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/lf/server/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/lf/server/main_opt.hpp \
\
$${STARA_SRC}/xos/protocol/http/content/disposition/name.hpp \
$${STARA_SRC}/xos/protocol/http/content/disposition/nameof.hpp \
$${STARA_SRC}/xos/protocol/http/content/disposition/which.hpp \
$${STARA_SRC}/xos/protocol/http/content/encoding/name.hpp \
$${STARA_SRC}/xos/protocol/http/content/encoding/nameof.hpp \
$${STARA_SRC}/xos/protocol/http/content/encoding/which.hpp \
$${STARA_SRC}/xos/protocol/http/content/media/subtype/name.hpp \
$${STARA_SRC}/xos/protocol/http/content/media/subtype/nameof.hpp \
$${STARA_SRC}/xos/protocol/http/content/media/subtype/which.hpp \
$${STARA_SRC}/xos/protocol/http/content/media/type/name.hpp \
$${STARA_SRC}/xos/protocol/http/content/media/type/nameof.hpp \
$${STARA_SRC}/xos/protocol/http/content/media/type/which.hpp \
$${STARA_SRC}/xos/protocol/http/content/type/json_name.hpp \
$${STARA_SRC}/xos/protocol/http/content/type/name.hpp \
$${STARA_SRC}/xos/protocol/http/content/type/nameof.hpp \
$${STARA_SRC}/xos/protocol/http/content/type/text_name.hpp \
$${STARA_SRC}/xos/protocol/http/content/type/which.hpp \
\
$${STARA_SRC}/xos/protocol/http/message/body/content.hpp \
$${STARA_SRC}/xos/protocol/http/message/header/content/disposition.hpp \
$${STARA_SRC}/xos/protocol/http/message/header/content/encoding.hpp \
$${STARA_SRC}/xos/protocol/http/message/header/content/length.hpp \
$${STARA_SRC}/xos/protocol/http/message/header/content/type.hpp \
$${STARA_SRC}/xos/protocol/http/message/header/field.hpp \
$${STARA_SRC}/xos/protocol/http/message/header/fields.hpp \
$${STARA_SRC}/xos/protocol/http/message/part.hpp \
$${STARA_SRC}/xos/protocol/http/message/parts.hpp \
$${STARA_SRC}/xos/protocol/http/message/reader.hpp \
\
$${STARA_SRC}/xos/protocol/http/form/content.hpp \
$${STARA_SRC}/xos/protocol/http/form/field.hpp \
$${STARA_SRC}/xos/protocol/http/form/fields.hpp \
$${STARA_SRC}/xos/protocol/http/protocol/identifier.hpp \
$${STARA_SRC}/xos/protocol/http/protocol/name.hpp \
$${STARA_SRC}/xos/protocol/http/protocol/version.hpp \
$${STARA_SRC}/xos/protocol/http/text/content.hpp \
$${STARA_SRC}/xos/protocol/http/text/json/content/type.hpp \
$${STARA_SRC}/xos/protocol/http/text/plain/content/type.hpp \
$${STARA_SRC}/xos/protocol/http/url/encoded/form/content/type.hpp \
$${STARA_SRC}/xos/protocol/http/url/encoded/reader.hpp \
\
$${STARA_SRC}/xos/protocol/http/request/line.hpp \
$${STARA_SRC}/xos/protocol/http/request/message.hpp \
$${STARA_SRC}/xos/protocol/http/request/method/name.hpp \
$${STARA_SRC}/xos/protocol/http/request/method/nameof.hpp \
$${STARA_SRC}/xos/protocol/http/request/method/which.hpp \
$${STARA_SRC}/xos/protocol/http/request/resource/identifier.hpp \
$${STARA_SRC}/xos/protocol/http/request/resource/identifierof.hpp \
$${STARA_SRC}/xos/protocol/http/request/resource/which.hpp \
\
$${STARA_SRC}/xos/protocol/http/response/line.hpp \
$${STARA_SRC}/xos/protocol/http/response/message.hpp \
$${STARA_SRC}/xos/protocol/http/response/status/code.hpp \
$${STARA_SRC}/xos/protocol/http/response/status/codeof.hpp \
$${STARA_SRC}/xos/protocol/http/response/status/reason.hpp \
$${STARA_SRC}/xos/protocol/http/response/status/reasonof.hpp \
$${STARA_SRC}/xos/protocol/http/response/status/which.hpp \
\
$${STARA_SRC}/xos/protocol/http/cgi/configure/name.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/setting.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/settings.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/value.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/values.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/which.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/name.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/setting.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/value.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/values.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/which.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/identifier.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/name.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/version.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/http/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/client/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/server/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/server/response/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/server/response/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/ttp/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/ttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/ttp/client/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/ttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/ttp/server/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/ttp/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/client/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/server/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/server/main_opt.hpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/base/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/client/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/server/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/ttp/base/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/ttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/ttp/client/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/ttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/ttp/server/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/ttp/server/main_opt.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/http/cgi/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/catcher/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/catcher/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/thrower/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/thrower/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/environment/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/environment/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/parameters/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/parameters/main_opt.hpp \
\
$${PERIFRA_SRC}/xos/gpio/apple/osx/gpio.hpp \
$${PERIFRA_SRC}/xos/gpio/extend.hpp \
$${PERIFRA_SRC}/xos/gpio/gpios.hpp \
$${PERIFRA_SRC}/xos/gpio/implement.hpp \
$${PERIFRA_SRC}/xos/gpio/linux/gpio.hpp \
$${PERIFRA_SRC}/xos/gpio/os/gpio.hpp \
$${PERIFRA_SRC}/xos/gpio/os/os.hpp \
$${PERIFRA_SRC}/xos/gpio/posix/gpio.hpp \
$${PERIFRA_SRC}/xos/gpio/raspberrypi/raspberrypios/pigpio/gpio.hpp \
$${PERIFRA_SRC}/xos/platform/os/raspberrypi/raspberrypios/pigpio.hpp \
\
$${PERIFRA_SRC}/xos/app/console/gpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/base/onoff/main.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/base/onoff/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/main.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/onoff/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/onoff/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/onoff/main.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/onoff/main_opt.hpp \
\
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/server/main.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/server/main_opt.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/pigpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/pigpio/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/pigpio/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/pigpio/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/pigpio/server/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/pigpio/server/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/pigpio/http/cgi/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/pigpio/http/cgi/client/main_opt.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/onoff/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/onoff/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/onoff/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/onoff/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/pigpio/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/pigpio/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/pigpio/http/cgi/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/pigpio/http/cgi/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/pigpio/server/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/pigpio/server/main_opt.hpp \
\
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/sttp/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/sttp/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/sttp/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/sttp/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/sttp/server/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/sttp/server/main.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/sttp/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/sttp/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/sttp/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/sttp/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/sttp/server/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/sttp/server/main.hpp \

# pigpiosd SOURCES
#
pigpiosd_SOURCES += \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/sttp/server/main_opt.cpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/pigpio/sttp/server/main.cpp \

########################################################################
# pigpiosd FRAMEWORKS
#
pigpiosd_FRAMEWORKS += \
$${perifra_talas_FRAMEWORKS} \

# pigpiosd LIBS
#
pigpiosd_LIBS += \
$${perifra_talas_LIBS} \

########################################################################
# NO Qt
QT -= gui core
