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

#ifndef QTAWS_DELETEENDPOINTRESPONSE_H
#define QTAWS_DELETEENDPOINTRESPONSE_H

#include "snsresponse.h"
#include "deleteendpointrequest.h"

namespace QtAws {
namespace SNS {

class DeleteEndpointResponsePrivate;

class QTAWS_EXPORT DeleteEndpointResponse : public SnsResponse {
    Q_OBJECT

public:
    DeleteEndpointResponse(const DeleteEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEndpointResponse)
    Q_DISABLE_COPY(DeleteEndpointResponse)

};

} // namespace SNS
} // namespace QtAws

#endif
