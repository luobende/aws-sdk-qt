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

#include "getgeolocationresponse.h"
#include "getgeolocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetGeoLocationResponse
 * \brief The GetGeoLocationResponse class provides an interace for Route53 GetGeoLocation responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getGeoLocation
 */

/*!
 * Constructs a GetGeoLocationResponse object for \a reply to \a request, with parent \a parent.
 */
GetGeoLocationResponse::GetGeoLocationResponse(
        const GetGeoLocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetGeoLocationResponsePrivate(this), parent)
{
    setRequest(new GetGeoLocationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGeoLocationRequest * GetGeoLocationResponse::request() const
{
    Q_D(const GetGeoLocationResponse);
    return static_cast<const GetGeoLocationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetGeoLocation \a response.
 */
void GetGeoLocationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGeoLocationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetGeoLocationResponsePrivate
 * \brief The GetGeoLocationResponsePrivate class provides private implementation for GetGeoLocationResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetGeoLocationResponsePrivate object with public implementation \a q.
 */
GetGeoLocationResponsePrivate::GetGeoLocationResponsePrivate(
    GetGeoLocationResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetGeoLocation response element from \a xml.
 */
void GetGeoLocationResponsePrivate::parseGetGeoLocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGeoLocationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
