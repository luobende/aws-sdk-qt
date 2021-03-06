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

#include "describeexporttasksresponse.h"
#include "describeexporttasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeExportTasksResponse
 * \brief The DescribeExportTasksResponse class provides an interace for EC2 DescribeExportTasks responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more about Amazon EC2, Amazon EBS, and Amazon VPC, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 *
 * \sa Ec2Client::describeExportTasks
 */

/*!
 * Constructs a DescribeExportTasksResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExportTasksResponse::DescribeExportTasksResponse(
        const DescribeExportTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeExportTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeExportTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExportTasksRequest * DescribeExportTasksResponse::request() const
{
    Q_D(const DescribeExportTasksResponse);
    return static_cast<const DescribeExportTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeExportTasks \a response.
 */
void DescribeExportTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExportTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeExportTasksResponsePrivate
 * \brief The DescribeExportTasksResponsePrivate class provides private implementation for DescribeExportTasksResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeExportTasksResponsePrivate object with public implementation \a q.
 */
DescribeExportTasksResponsePrivate::DescribeExportTasksResponsePrivate(
    DescribeExportTasksResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeExportTasks response element from \a xml.
 */
void DescribeExportTasksResponsePrivate::parseDescribeExportTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExportTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
