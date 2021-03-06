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

#include "gettelemetrymetadataresponse.h"
#include "gettelemetrymetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::GetTelemetryMetadataResponse
 * \brief The GetTelemetryMetadataResponse class provides an interace for Inspector GetTelemetryMetadata responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::getTelemetryMetadata
 */

/*!
 * Constructs a GetTelemetryMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
GetTelemetryMetadataResponse::GetTelemetryMetadataResponse(
        const GetTelemetryMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new GetTelemetryMetadataResponsePrivate(this), parent)
{
    setRequest(new GetTelemetryMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTelemetryMetadataRequest * GetTelemetryMetadataResponse::request() const
{
    Q_D(const GetTelemetryMetadataResponse);
    return static_cast<const GetTelemetryMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector GetTelemetryMetadata \a response.
 */
void GetTelemetryMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTelemetryMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::GetTelemetryMetadataResponsePrivate
 * \brief The GetTelemetryMetadataResponsePrivate class provides private implementation for GetTelemetryMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a GetTelemetryMetadataResponsePrivate object with public implementation \a q.
 */
GetTelemetryMetadataResponsePrivate::GetTelemetryMetadataResponsePrivate(
    GetTelemetryMetadataResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector GetTelemetryMetadata response element from \a xml.
 */
void GetTelemetryMetadataResponsePrivate::parseGetTelemetryMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTelemetryMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
