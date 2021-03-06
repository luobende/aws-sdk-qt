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

#include "listotaupdatesresponse.h"
#include "listotaupdatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListOTAUpdatesResponse
 * \brief The ListOTAUpdatesResponse class provides an interace for IoT ListOTAUpdates responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::listOTAUpdates
 */

/*!
 * Constructs a ListOTAUpdatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListOTAUpdatesResponse::ListOTAUpdatesResponse(
        const ListOTAUpdatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListOTAUpdatesResponsePrivate(this), parent)
{
    setRequest(new ListOTAUpdatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOTAUpdatesRequest * ListOTAUpdatesResponse::request() const
{
    Q_D(const ListOTAUpdatesResponse);
    return static_cast<const ListOTAUpdatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ListOTAUpdates \a response.
 */
void ListOTAUpdatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOTAUpdatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ListOTAUpdatesResponsePrivate
 * \brief The ListOTAUpdatesResponsePrivate class provides private implementation for ListOTAUpdatesResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListOTAUpdatesResponsePrivate object with public implementation \a q.
 */
ListOTAUpdatesResponsePrivate::ListOTAUpdatesResponsePrivate(
    ListOTAUpdatesResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ListOTAUpdates response element from \a xml.
 */
void ListOTAUpdatesResponsePrivate::parseListOTAUpdatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOTAUpdatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
