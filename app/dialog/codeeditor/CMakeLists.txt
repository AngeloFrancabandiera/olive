# Olive - Non-Linear Video Editor
# Copyright (C) 2021 Olive Team
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

set(OLIVE_SOURCES
  ${OLIVE_SOURCES}
  dialog/codeeditor/editor.h
  dialog/codeeditor/editor.cpp
  dialog/codeeditor/glslhighlighter.h
  dialog/codeeditor/glslhighlighter.cpp
  dialog/codeeditor/codeeditordialog.h
  dialog/codeeditor/codeeditordialog.cpp
  dialog/codeeditor/externaleditorproxy.h
  dialog/codeeditor/externaleditorproxy.cpp
  dialog/codeeditor/searchtextbar.h
  dialog/codeeditor/searchtextbar.cpp
  dialog/codeeditor/messagehighlighter.h
  dialog/codeeditor/messagehighlighter.cpp
  PARENT_SCOPE
)
