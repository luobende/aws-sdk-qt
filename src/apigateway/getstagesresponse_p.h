/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETSTAGESRESPONSE_P_H
#define QTAWS_GETSTAGESRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace APIGateway {

class GetStagesResponse;

class QTAWS_EXPORT GetStagesResponsePrivate : public APIGatewayResponsePrivate {

public:

    GetStagesResponsePrivate(GetStagesResponse * const q);

    void parseGetStagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStagesResponse)
    Q_DISABLE_COPY(GetStagesResponsePrivate)

};

} // namespace APIGateway
} // namespace QtAws

#endif
