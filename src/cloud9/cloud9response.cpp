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

#include "cloud9response.h"
#include "cloud9response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Cloud9 {

/**
 * @class  Cloud9Response
 *
 * @brief  Handles Cloud9 Cloud9 responses.
 *
 * @see    Cloud9Client::cloud9
 */

/**
 * @brief  Constructs a new Cloud9Response object.
 *
 * @param  parent   This object's parent.
 */
Cloud9Response::Cloud9Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Cloud9ResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void Cloud9Response::parseFailure(QIODevice &response)
{
    Q_D(Cloud9Response);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/**
 * @internal
 *
 * @class  Cloud9ResponsePrivate
 *
 * @brief  Private implementation for Cloud9Response.
 */

/**
 * @internal
 *
 * @brief  Constructs a new Cloud9ResponsePrivate object.
 *
 * @param  q  Pointer to this object's public Cloud9Response instance.
 */
Cloud9ResponsePrivate::Cloud9ResponsePrivate(
    Cloud9Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Cloud9
} // namespace QtAws
