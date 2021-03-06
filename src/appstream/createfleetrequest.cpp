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

#include "createfleetrequest.h"
#include "createfleetrequest_p.h"
#include "createfleetresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateFleetRequest
 * \brief The CreateFleetRequest class provides an interface for AppStream CreateFleet requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::createFleet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFleetRequest::CreateFleetRequest(const CreateFleetRequest &other)
    : AppStreamRequest(new CreateFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFleetRequest object.
 */
CreateFleetRequest::CreateFleetRequest()
    : AppStreamRequest(new CreateFleetRequestPrivate(AppStreamRequest::CreateFleetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFleetRequest::response(QNetworkReply * const reply) const
{
    return new CreateFleetResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::CreateFleetRequestPrivate
 * \brief The CreateFleetRequestPrivate class provides private implementation for CreateFleetRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CreateFleetRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
CreateFleetRequestPrivate::CreateFleetRequestPrivate(
    const AppStreamRequest::Action action, CreateFleetRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFleetRequest
 * class' copy constructor.
 */
CreateFleetRequestPrivate::CreateFleetRequestPrivate(
    const CreateFleetRequestPrivate &other, CreateFleetRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
