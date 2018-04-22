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

#include "createhittyperequest.h"
#include "createhittyperequest_p.h"
#include "createhittyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITTypeRequest
 * \brief The CreateHITTypeRequest class provides an interface for MTurk CreateHITType requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createHITType
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHITTypeRequest::CreateHITTypeRequest(const CreateHITTypeRequest &other)
    : MTurkRequest(new CreateHITTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHITTypeRequest object.
 */
CreateHITTypeRequest::CreateHITTypeRequest()
    : MTurkRequest(new CreateHITTypeRequestPrivate(MTurkRequest::CreateHITTypeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHITTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHITTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHITTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateHITTypeResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::CreateHITTypeRequestPrivate
 * \brief The CreateHITTypeRequestPrivate class provides private implementation for CreateHITTypeRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateHITTypeRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
CreateHITTypeRequestPrivate::CreateHITTypeRequestPrivate(
    const MTurkRequest::Action action, CreateHITTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHITTypeRequest
 * class' copy constructor.
 */
CreateHITTypeRequestPrivate::CreateHITTypeRequestPrivate(
    const CreateHITTypeRequestPrivate &other, CreateHITTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws