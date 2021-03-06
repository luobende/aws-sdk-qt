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

#include "copyimagerequest.h"
#include "copyimagerequest_p.h"
#include "copyimageresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CopyImageRequest
 * \brief The CopyImageRequest class provides an interface for AppStream CopyImage requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::copyImage
 */

/*!
 * Constructs a copy of \a other.
 */
CopyImageRequest::CopyImageRequest(const CopyImageRequest &other)
    : AppStreamRequest(new CopyImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyImageRequest object.
 */
CopyImageRequest::CopyImageRequest()
    : AppStreamRequest(new CopyImageRequestPrivate(AppStreamRequest::CopyImageAction, this))
{

}

/*!
 * \reimp
 */
bool CopyImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyImageRequest::response(QNetworkReply * const reply) const
{
    return new CopyImageResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::CopyImageRequestPrivate
 * \brief The CopyImageRequestPrivate class provides private implementation for CopyImageRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CopyImageRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
CopyImageRequestPrivate::CopyImageRequestPrivate(
    const AppStreamRequest::Action action, CopyImageRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyImageRequest
 * class' copy constructor.
 */
CopyImageRequestPrivate::CopyImageRequestPrivate(
    const CopyImageRequestPrivate &other, CopyImageRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
