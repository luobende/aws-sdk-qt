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

#include "createauthorizerresponse.h"
#include "createauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CreateAuthorizerResponse
 * \brief The CreateAuthorizerResponse class provides an interace for IoT CreateAuthorizer responses.
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
 * \sa IoTClient::createAuthorizer
 */

/*!
 * Constructs a CreateAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAuthorizerResponse::CreateAuthorizerResponse(
        const CreateAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CreateAuthorizerResponsePrivate(this), parent)
{
    setRequest(new CreateAuthorizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAuthorizerRequest * CreateAuthorizerResponse::request() const
{
    Q_D(const CreateAuthorizerResponse);
    return static_cast<const CreateAuthorizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT CreateAuthorizer \a response.
 */
void CreateAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::CreateAuthorizerResponsePrivate
 * \brief The CreateAuthorizerResponsePrivate class provides private implementation for CreateAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CreateAuthorizerResponsePrivate object with public implementation \a q.
 */
CreateAuthorizerResponsePrivate::CreateAuthorizerResponsePrivate(
    CreateAuthorizerResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT CreateAuthorizer response element from \a xml.
 */
void CreateAuthorizerResponsePrivate::parseCreateAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
