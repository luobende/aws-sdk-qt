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

#ifndef QTAWS_VERIFYDOMAINIDENTITYRESPONSE_H
#define QTAWS_VERIFYDOMAINIDENTITYRESPONSE_H

#include "sesresponse.h"
#include "verifydomainidentityrequest.h"

namespace QtAws {
namespace SES {

class VerifyDomainIdentityResponsePrivate;

class QTAWS_EXPORT VerifyDomainIdentityResponse : public SesResponse {
    Q_OBJECT

public:
    VerifyDomainIdentityResponse(const VerifyDomainIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifyDomainIdentityRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(VerifyDomainIdentityResponse)
    Q_DISABLE_COPY(VerifyDomainIdentityResponse)

};

} // namespace SES
} // namespace QtAws

#endif