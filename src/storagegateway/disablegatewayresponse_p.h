/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_DISABLEGATEWAYRESPONSE_P_H
#define QTAWS_DISABLEGATEWAYRESPONSE_P_H

#include "storagegatewayresponse.h"
#include "disablegatewayrequest.h"

namespace AWS {

namespace StorageGateway {

class DisableGatewayResponse;

class QTAWS_EXPORT DisableGatewayResponsePrivate : public StorageGatewayResponsePrivate {
    Q_OBJECT

public:

    DisableGatewayResponsePrivate(DisableGatewayResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableGatewayResponse)
    Q_DISABLE_COPY(DisableGatewayResponsePrivate)

};

} // namespace StorageGateway
} // namespace AWS

#endif
