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

#include "describecertificateresponse.h"
#include "describecertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeCertificateResponse
 * \brief The DescribeCertificateResponse class provides an interace for IoT DescribeCertificate responses.
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
 * \sa IoTClient::describeCertificate
 */

/*!
 * Constructs a DescribeCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCertificateResponse::DescribeCertificateResponse(
        const DescribeCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeCertificateResponsePrivate(this), parent)
{
    setRequest(new DescribeCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCertificateRequest * DescribeCertificateResponse::request() const
{
    Q_D(const DescribeCertificateResponse);
    return static_cast<const DescribeCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DescribeCertificate \a response.
 */
void DescribeCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DescribeCertificateResponsePrivate
 * \brief The DescribeCertificateResponsePrivate class provides private implementation for DescribeCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DescribeCertificateResponsePrivate object with public implementation \a q.
 */
DescribeCertificateResponsePrivate::DescribeCertificateResponsePrivate(
    DescribeCertificateResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DescribeCertificate response element from \a xml.
 */
void DescribeCertificateResponsePrivate::parseDescribeCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
