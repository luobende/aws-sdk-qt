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

#include "createnatgatewayrequest.h"
#include "createnatgatewayrequest_p.h"
#include "createnatgatewayresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateNatGatewayRequest
 * \brief The CreateNatGatewayRequest class provides an interface for EC2 CreateNatGateway requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more about Amazon EC2, Amazon EBS, and Amazon VPC, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 *
 * \sa Ec2Client::createNatGateway
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNatGatewayRequest::CreateNatGatewayRequest(const CreateNatGatewayRequest &other)
    : Ec2Request(new CreateNatGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNatGatewayRequest object.
 */
CreateNatGatewayRequest::CreateNatGatewayRequest()
    : Ec2Request(new CreateNatGatewayRequestPrivate(Ec2Request::CreateNatGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNatGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNatGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNatGatewayRequest::response(QNetworkReply * const reply) const
{
    return new CreateNatGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CreateNatGatewayRequestPrivate
 * \brief The CreateNatGatewayRequestPrivate class provides private implementation for CreateNatGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateNatGatewayRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
CreateNatGatewayRequestPrivate::CreateNatGatewayRequestPrivate(
    const Ec2Request::Action action, CreateNatGatewayRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNatGatewayRequest
 * class' copy constructor.
 */
CreateNatGatewayRequestPrivate::CreateNatGatewayRequestPrivate(
    const CreateNatGatewayRequestPrivate &other, CreateNatGatewayRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
