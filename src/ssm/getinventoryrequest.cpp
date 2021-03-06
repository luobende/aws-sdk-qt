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

#include "getinventoryrequest.h"
#include "getinventoryrequest_p.h"
#include "getinventoryresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::GetInventoryRequest
 * \brief The GetInventoryRequest class provides an interface for SSM GetInventory requests.
 *
 * \inmodule QtAwsSSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon EC2 instance or on-premises machine in
 *  your hybrid environment that has been configured for Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Systems Manager
 *  Prerequisites</a> in the <i>AWS Systems Manager User
 * 
 *  Guide</i>>
 * 
 *  For information about other API actions you can perform on Amazon EC2 instances, see the <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 *  use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 *  Requests</a>.
 *
 * \sa SsmClient::getInventory
 */

/*!
 * Constructs a copy of \a other.
 */
GetInventoryRequest::GetInventoryRequest(const GetInventoryRequest &other)
    : SsmRequest(new GetInventoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInventoryRequest object.
 */
GetInventoryRequest::GetInventoryRequest()
    : SsmRequest(new GetInventoryRequestPrivate(SsmRequest::GetInventoryAction, this))
{

}

/*!
 * \reimp
 */
bool GetInventoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInventoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInventoryRequest::response(QNetworkReply * const reply) const
{
    return new GetInventoryResponse(*this, reply);
}

/*!
 * \class QtAws::SSM::GetInventoryRequestPrivate
 * \brief The GetInventoryRequestPrivate class provides private implementation for GetInventoryRequest.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a GetInventoryRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
GetInventoryRequestPrivate::GetInventoryRequestPrivate(
    const SsmRequest::Action action, GetInventoryRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInventoryRequest
 * class' copy constructor.
 */
GetInventoryRequestPrivate::GetInventoryRequestPrivate(
    const GetInventoryRequestPrivate &other, GetInventoryRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
