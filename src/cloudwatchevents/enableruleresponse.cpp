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

#include "enableruleresponse.h"
#include "enableruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::EnableRuleResponse
 * \brief The EnableRuleResponse class provides an interace for CloudWatchEvents EnableRule responses.
 *
 * \inmodule QtAwsCloudWatchEvents
 *
 *  Amazon CloudWatch Events helps you to respond to state changes in your AWS resources. When your resources change state,
 *  they automatically send events into an event stream. You can create rules that match selected events in the stream and
 *  route them to targets to take action. You can also use rules to take action on a pre-determined schedule. For example,
 *  you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from CloudTrail to an Amazon Kinesis stream for detailed analysis of potential security or
 *  availability
 * 
 *  risks> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volume> </li> </ul>
 * 
 *  For more information about the features of Amazon CloudWatch Events, see the <a
 *  href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events">Amazon CloudWatch Events User
 *
 * \sa CloudWatchEventsClient::enableRule
 */

/*!
 * Constructs a EnableRuleResponse object for \a reply to \a request, with parent \a parent.
 */
EnableRuleResponse::EnableRuleResponse(
        const EnableRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new EnableRuleResponsePrivate(this), parent)
{
    setRequest(new EnableRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableRuleRequest * EnableRuleResponse::request() const
{
    Q_D(const EnableRuleResponse);
    return static_cast<const EnableRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents EnableRule \a response.
 */
void EnableRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::EnableRuleResponsePrivate
 * \brief The EnableRuleResponsePrivate class provides private implementation for EnableRuleResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a EnableRuleResponsePrivate object with public implementation \a q.
 */
EnableRuleResponsePrivate::EnableRuleResponsePrivate(
    EnableRuleResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents EnableRule response element from \a xml.
 */
void EnableRuleResponsePrivate::parseEnableRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
