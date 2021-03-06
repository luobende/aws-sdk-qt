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

#include "getdeploymentstatusrequest.h"
#include "getdeploymentstatusrequest_p.h"
#include "getdeploymentstatusresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetDeploymentStatusRequest
 * \brief The GetDeploymentStatusRequest class provides an interface for Greengrass GetDeploymentStatus requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getDeploymentStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeploymentStatusRequest::GetDeploymentStatusRequest(const GetDeploymentStatusRequest &other)
    : GreengrassRequest(new GetDeploymentStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeploymentStatusRequest object.
 */
GetDeploymentStatusRequest::GetDeploymentStatusRequest()
    : GreengrassRequest(new GetDeploymentStatusRequestPrivate(GreengrassRequest::GetDeploymentStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeploymentStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeploymentStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeploymentStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetDeploymentStatusRequestPrivate
 * \brief The GetDeploymentStatusRequestPrivate class provides private implementation for GetDeploymentStatusRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetDeploymentStatusRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetDeploymentStatusRequestPrivate::GetDeploymentStatusRequestPrivate(
    const GreengrassRequest::Action action, GetDeploymentStatusRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentStatusRequest
 * class' copy constructor.
 */
GetDeploymentStatusRequestPrivate::GetDeploymentStatusRequestPrivate(
    const GetDeploymentStatusRequestPrivate &other, GetDeploymentStatusRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
