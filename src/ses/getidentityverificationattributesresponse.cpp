/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getidentityverificationattributesresponse.h"
#include "getidentityverificationattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::GetIdentityVerificationAttributesResponse
 * \brief The GetIdentityVerificationAttributesResponse class provides an interace for SES GetIdentityVerificationAttributes responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SesClient::getIdentityVerificationAttributes
 */

/*!
 * Constructs a GetIdentityVerificationAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetIdentityVerificationAttributesResponse::GetIdentityVerificationAttributesResponse(
        const GetIdentityVerificationAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new GetIdentityVerificationAttributesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityVerificationAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIdentityVerificationAttributesRequest * GetIdentityVerificationAttributesResponse::request() const
{
    Q_D(const GetIdentityVerificationAttributesResponse);
    return static_cast<const GetIdentityVerificationAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES GetIdentityVerificationAttributes \a response.
 */
void GetIdentityVerificationAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetIdentityVerificationAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::GetIdentityVerificationAttributesResponsePrivate
 * \brief The GetIdentityVerificationAttributesResponsePrivate class provides private implementation for GetIdentityVerificationAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a GetIdentityVerificationAttributesResponsePrivate object with public implementation \a q.
 */
GetIdentityVerificationAttributesResponsePrivate::GetIdentityVerificationAttributesResponsePrivate(
    GetIdentityVerificationAttributesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES GetIdentityVerificationAttributes response element from \a xml.
 */
void GetIdentityVerificationAttributesResponsePrivate::parseGetIdentityVerificationAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityVerificationAttributesResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
