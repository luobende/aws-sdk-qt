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

#ifndef QTAWS_PUTATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTATTRIBUTESRESPONSE_P_H

#include "simpledbresponse.h"
#include "putattributesrequest.h"

namespace AWS {

namespace SimpleDB {

class PutAttributesResponse;

class QTAWS_EXPORT PutAttributesResponsePrivate : public SimpleDBResponsePrivate {
    Q_OBJECT

public:

    PutAttributesResponsePrivate(PutAttributesResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAttributesResponse)
    Q_DISABLE_COPY(PutAttributesResponsePrivate)

};

} // namespace SimpleDB
} // namespace AWS

#endif
