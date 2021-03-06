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

#include "describeautoscalinginstancesrequest.h"
#include "describeautoscalinginstancesrequest_p.h"
#include "describeautoscalinginstancesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingInstancesRequest
 * \brief The DescribeAutoScalingInstancesRequest class provides an interface for AutoScaling DescribeAutoScalingInstances requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::describeAutoScalingInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAutoScalingInstancesRequest::DescribeAutoScalingInstancesRequest(const DescribeAutoScalingInstancesRequest &other)
    : AutoScalingRequest(new DescribeAutoScalingInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAutoScalingInstancesRequest object.
 */
DescribeAutoScalingInstancesRequest::DescribeAutoScalingInstancesRequest()
    : AutoScalingRequest(new DescribeAutoScalingInstancesRequestPrivate(AutoScalingRequest::DescribeAutoScalingInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAutoScalingInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAutoScalingInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAutoScalingInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAutoScalingInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingInstancesRequestPrivate
 * \brief The DescribeAutoScalingInstancesRequestPrivate class provides private implementation for DescribeAutoScalingInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAutoScalingInstancesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeAutoScalingInstancesRequestPrivate::DescribeAutoScalingInstancesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeAutoScalingInstancesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAutoScalingInstancesRequest
 * class' copy constructor.
 */
DescribeAutoScalingInstancesRequestPrivate::DescribeAutoScalingInstancesRequestPrivate(
    const DescribeAutoScalingInstancesRequestPrivate &other, DescribeAutoScalingInstancesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
