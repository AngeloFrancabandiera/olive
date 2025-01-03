/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2022 Olive Team

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#ifndef RICHTEXTDIALOG_H
#define RICHTEXTDIALOG_H

#include <QDialog>
#include <QFontComboBox>
#include <QPlainTextEdit>
#include <QSyntaxHighlighter>

#include "common/define.h"
#include "widget/slider/floatslider.h"

namespace olive {

class TextDialog : public QDialog
{
  Q_OBJECT
public:
  TextDialog(const QString &start, QWidget* parent = nullptr);

  QString text() const
  {
    return text_edit_->toPlainText();
  }

  void setSyntaxHighlight( QSyntaxHighlighter * highlighter) const
  {
    highlighter->setDocument(text_edit_->document());
  }

private:
  QPlainTextEdit* text_edit_;

};

}

#endif // RICHTEXTDIALOG_H
