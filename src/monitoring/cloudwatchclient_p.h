/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CLOUDWATCHCLIENT_P_H
#define QTAWS_CLOUDWATCHCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace AWS {
namespace CloudWatch {

class CloudWatchClient;

class QTAWS_EXPORT CloudWatchClientPrivate : public AwsAbstractClientPrivate {

public:
    CloudWatchClientPrivate(CloudWatchClient * const q);

private:
    Q_DECLARE_PUBLIC(CloudWatchClient)
    Q_DISABLE_COPY(CloudWatchClientPrivate)

};

} // namespace CloudWatch
} // namespace AWS

#endif