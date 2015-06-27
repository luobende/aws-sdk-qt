/*
    Copyright 2013-2015 Paul Colby

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

#include "sqscreatequeueresponse.h"
#include "sqscreatequeueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsResponse
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param parent       This object's parent.
 */
SqsCreateQueueResponse::SqsCreateQueueResponse(QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(parent), d_ptr(new SqsCreateQueueResponsePrivate(this))
{
    setReply(reply);
}

bool SqsCreateQueueResponse::isValid() const
{
    Q_D(const SqsCreateQueueResponse);
    return !d->queueUrl.isEmpty();
}

QString SqsCreateQueueResponse::queueUrl() const
{
    Q_D(const SqsCreateQueueResponse);
    return d->queueUrl;
}

/**
 * This function parses XML elements like:
 *
 * @code{xml}
 * <CreateQueueResponse>
 *   <CreateQueueResult>
 *     <QueueUrl>http://&useast1-query;/123456789012/testQueue</QueueUrl>
 *   </CreateQueueResult>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </CreateQueueResponse>
 * @endcode
 */
void SqsCreateQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsCreateQueueResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("CreateQueueResponse")) {
            d->parseCreateQueueResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsCreateQueueResponsePrivate
 *
 * @brief  Private implementation for SqsCreateQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsCreateQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsCreateQueueResponse instance.
 */
SqsCreateQueueResponsePrivate::SqsCreateQueueResponsePrivate(SqsCreateQueueResponse * const q)
    : SqsResponsePrivate(q), q_ptr(q)
{

}

void SqsCreateQueueResponsePrivate::parseCreateQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQueueResponse"));
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("CreateQueueResult")) {
            parseCreateQueueResult(xml);
        } else if (xml.name() == QLatin1String("ResponseMetadata")) {
            parseResponseMetadata(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

void SqsCreateQueueResponsePrivate::parseCreateQueueResult(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQueueResult"));
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("QueueUrl")) {
            queueUrl = xml.readElementText();
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

QTAWS_END_NAMESPACE