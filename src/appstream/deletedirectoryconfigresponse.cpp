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

#include "deletedirectoryconfigresponse.h"
#include "deletedirectoryconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DeleteDirectoryConfigResponse
 * \brief The DeleteDirectoryConfigResponse class provides an interace for AppStream DeleteDirectoryConfig responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::deleteDirectoryConfig
 */

/*!
 * Constructs a DeleteDirectoryConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDirectoryConfigResponse::DeleteDirectoryConfigResponse(
        const DeleteDirectoryConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DeleteDirectoryConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteDirectoryConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDirectoryConfigRequest * DeleteDirectoryConfigResponse::request() const
{
    Q_D(const DeleteDirectoryConfigResponse);
    return static_cast<const DeleteDirectoryConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DeleteDirectoryConfig \a response.
 */
void DeleteDirectoryConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDirectoryConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DeleteDirectoryConfigResponsePrivate
 * \brief The DeleteDirectoryConfigResponsePrivate class provides private implementation for DeleteDirectoryConfigResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DeleteDirectoryConfigResponsePrivate object with public implementation \a q.
 */
DeleteDirectoryConfigResponsePrivate::DeleteDirectoryConfigResponsePrivate(
    DeleteDirectoryConfigResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DeleteDirectoryConfig response element from \a xml.
 */
void DeleteDirectoryConfigResponsePrivate::parseDeleteDirectoryConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDirectoryConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
