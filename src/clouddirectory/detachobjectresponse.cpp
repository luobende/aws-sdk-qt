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

#include "detachobjectresponse.h"
#include "detachobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::DetachObjectResponse
 * \brief The DetachObjectResponse class provides an interace for CloudDirectory DetachObject responses.
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
 * \sa CloudDirectoryClient::detachObject
 */

/*!
 * Constructs a DetachObjectResponse object for \a reply to \a request, with parent \a parent.
 */
DetachObjectResponse::DetachObjectResponse(
        const DetachObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DetachObjectResponsePrivate(this), parent)
{
    setRequest(new DetachObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetachObjectRequest * DetachObjectResponse::request() const
{
    Q_D(const DetachObjectResponse);
    return static_cast<const DetachObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory DetachObject \a response.
 */
void DetachObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetachObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::DetachObjectResponsePrivate
 * \brief The DetachObjectResponsePrivate class provides private implementation for DetachObjectResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a DetachObjectResponsePrivate object with public implementation \a q.
 */
DetachObjectResponsePrivate::DetachObjectResponsePrivate(
    DetachObjectResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory DetachObject response element from \a xml.
 */
void DetachObjectResponsePrivate::parseDetachObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
