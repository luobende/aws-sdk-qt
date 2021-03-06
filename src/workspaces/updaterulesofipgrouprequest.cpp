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

#include "updaterulesofipgrouprequest.h"
#include "updaterulesofipgrouprequest_p.h"
#include "updaterulesofipgroupresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::UpdateRulesOfIpGroupRequest
 * \brief The UpdateRulesOfIpGroupRequest class provides an interface for WorkSpaces UpdateRulesOfIpGroup requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::updateRulesOfIpGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRulesOfIpGroupRequest::UpdateRulesOfIpGroupRequest(const UpdateRulesOfIpGroupRequest &other)
    : WorkSpacesRequest(new UpdateRulesOfIpGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRulesOfIpGroupRequest object.
 */
UpdateRulesOfIpGroupRequest::UpdateRulesOfIpGroupRequest()
    : WorkSpacesRequest(new UpdateRulesOfIpGroupRequestPrivate(WorkSpacesRequest::UpdateRulesOfIpGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRulesOfIpGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRulesOfIpGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRulesOfIpGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRulesOfIpGroupResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::UpdateRulesOfIpGroupRequestPrivate
 * \brief The UpdateRulesOfIpGroupRequestPrivate class provides private implementation for UpdateRulesOfIpGroupRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a UpdateRulesOfIpGroupRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
UpdateRulesOfIpGroupRequestPrivate::UpdateRulesOfIpGroupRequestPrivate(
    const WorkSpacesRequest::Action action, UpdateRulesOfIpGroupRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRulesOfIpGroupRequest
 * class' copy constructor.
 */
UpdateRulesOfIpGroupRequestPrivate::UpdateRulesOfIpGroupRequestPrivate(
    const UpdateRulesOfIpGroupRequestPrivate &other, UpdateRulesOfIpGroupRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
