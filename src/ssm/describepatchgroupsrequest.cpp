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

#include "describepatchgroupsrequest.h"
#include "describepatchgroupsrequest_p.h"
#include "describepatchgroupsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::DescribePatchGroupsRequest
 * \brief The DescribePatchGroupsRequest class provides an interface for SSM DescribePatchGroups requests.
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
 * \sa SsmClient::describePatchGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePatchGroupsRequest::DescribePatchGroupsRequest(const DescribePatchGroupsRequest &other)
    : SsmRequest(new DescribePatchGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePatchGroupsRequest object.
 */
DescribePatchGroupsRequest::DescribePatchGroupsRequest()
    : SsmRequest(new DescribePatchGroupsRequestPrivate(SsmRequest::DescribePatchGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePatchGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePatchGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePatchGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribePatchGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::SSM::DescribePatchGroupsRequestPrivate
 * \brief The DescribePatchGroupsRequestPrivate class provides private implementation for DescribePatchGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a DescribePatchGroupsRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
DescribePatchGroupsRequestPrivate::DescribePatchGroupsRequestPrivate(
    const SsmRequest::Action action, DescribePatchGroupsRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePatchGroupsRequest
 * class' copy constructor.
 */
DescribePatchGroupsRequestPrivate::DescribePatchGroupsRequestPrivate(
    const DescribePatchGroupsRequestPrivate &other, DescribePatchGroupsRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
