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

#include "detachfromindexresponse.h"
#include "detachfromindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::DetachFromIndexResponse
 * \brief The DetachFromIndexResponse class provides an interace for CloudDirectory DetachFromIndex responses.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 *
 * \sa CloudDirectoryClient::detachFromIndex
 */

/*!
 * Constructs a DetachFromIndexResponse object for \a reply to \a request, with parent \a parent.
 */
DetachFromIndexResponse::DetachFromIndexResponse(
        const DetachFromIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DetachFromIndexResponsePrivate(this), parent)
{
    setRequest(new DetachFromIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetachFromIndexRequest * DetachFromIndexResponse::request() const
{
    Q_D(const DetachFromIndexResponse);
    return static_cast<const DetachFromIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory DetachFromIndex \a response.
 */
void DetachFromIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetachFromIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::DetachFromIndexResponsePrivate
 * \brief The DetachFromIndexResponsePrivate class provides private implementation for DetachFromIndexResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a DetachFromIndexResponsePrivate object with public implementation \a q.
 */
DetachFromIndexResponsePrivate::DetachFromIndexResponsePrivate(
    DetachFromIndexResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory DetachFromIndex response element from \a xml.
 */
void DetachFromIndexResponsePrivate::parseDetachFromIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachFromIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
