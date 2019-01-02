/*
  CommandImportFromXml.h

  This file is part of Charm, a task-based time tracking application.

  Copyright (C) 2007-2019 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com

  Author: Mirko Boehm <mirko.boehm@kdab.com>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef COMMANDIMPORTFROMXML_H
#define COMMANDIMPORTFROMXML_H

#include <Core/CharmCommand.h>

class QObject;

class CommandImportFromXml : public CharmCommand
{
    Q_OBJECT
public:
    explicit CommandImportFromXml(QString filename, QObject *parent);
    ~CommandImportFromXml() override;

    bool prepare() override;
    bool execute(Controller *) override;
    bool finalize() override;

private:
    QString m_error;
    QString m_filename;
};

#endif
