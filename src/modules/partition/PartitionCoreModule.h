/* === This file is part of Calamares - <http://github.com/calamares> ===
 *
 *   Copyright 2014, Aurélien Gâteau <agateau@kde.org>
 *
 *   Calamares is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Calamares is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Calamares. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PARTITIONCOREMODULE_H
#define PARTITIONCOREMODULE_H

#include <QList>
#include <QObject>

class Device;
class DeviceModel;

/**
 * Owns the Qt models and the PM devices
 */
class PartitionCoreModule : public QObject
{
public:
    PartitionCoreModule( QObject* parent = nullptr );

    QList< Device* > devices() const;

    DeviceModel* deviceModel() const;

private:
    QList< Device* > m_devices;
    DeviceModel* m_deviceModel;

    void listDevices();
};

#endif /* PARTITIONCOREMODULE_H */