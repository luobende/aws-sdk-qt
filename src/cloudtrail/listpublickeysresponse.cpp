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

#include "listpublickeysresponse.h"
#include "listpublickeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::ListPublicKeysResponse
 * \brief The ListPublicKeysResponse class provides an interace for CloudTrail ListPublicKeys responses.
 *
 * \inmodule QtAwsCloudTrail
 *
 *  <fullname>AWS CloudTrail</fullname>
 * 
 *  This is the CloudTrail API Reference. It provides descriptions of actions, data types, common parameters, and common
 *  errors for
 * 
 *  CloudTrail>
 * 
 *  CloudTrail is a web service that records AWS API calls for your AWS account and delivers log files to an Amazon S3
 *  bucket. The recorded information includes the identity of the user, the start time of the AWS API call, the source IP
 *  address, the request parameters, and the response elements returned by the
 * 
 *  service> <note>
 * 
 *  As an alternative to the API, you can use one of the AWS SDKs, which consist of libraries and sample code for various
 *  programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide a convenient way to create
 *  programmatic access to AWSCloudTrail. For example, the SDKs take care of cryptographically signing requests, managing
 *  errors, and retrying requests automatically. For information about the AWS SDKs, including how to download and install
 *  them, see the <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services
 * 
 *  page</a>> </note>
 * 
 *  See the <a href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">AWS CloudTrail
 *  User Guide</a> for information about the data that is included with each AWS API call listed in the log
 *
 * \sa CloudTrailClient::listPublicKeys
 */

/*!
 * Constructs a ListPublicKeysResponse object for \a reply to \a request, with parent \a parent.
 */
ListPublicKeysResponse::ListPublicKeysResponse(
        const ListPublicKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new ListPublicKeysResponsePrivate(this), parent)
{
    setRequest(new ListPublicKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPublicKeysRequest * ListPublicKeysResponse::request() const
{
    Q_D(const ListPublicKeysResponse);
    return static_cast<const ListPublicKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudTrail ListPublicKeys \a response.
 */
void ListPublicKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPublicKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudTrail::ListPublicKeysResponsePrivate
 * \brief The ListPublicKeysResponsePrivate class provides private implementation for ListPublicKeysResponse.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a ListPublicKeysResponsePrivate object with public implementation \a q.
 */
ListPublicKeysResponsePrivate::ListPublicKeysResponsePrivate(
    ListPublicKeysResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/*!
 * Parses a CloudTrail ListPublicKeys response element from \a xml.
 */
void ListPublicKeysResponsePrivate::parseListPublicKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPublicKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudTrail
} // namespace QtAws
