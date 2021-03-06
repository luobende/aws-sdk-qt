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

#include "createpublickeyrequest.h"
#include "createpublickeyrequest_p.h"
#include "createpublickeyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreatePublicKeyRequest
 * \brief The CreatePublicKeyRequest class provides an interface for CloudFront CreatePublicKey requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createPublicKey
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePublicKeyRequest::CreatePublicKeyRequest(const CreatePublicKeyRequest &other)
    : CloudFrontRequest(new CreatePublicKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePublicKeyRequest object.
 */
CreatePublicKeyRequest::CreatePublicKeyRequest()
    : CloudFrontRequest(new CreatePublicKeyRequestPrivate(CloudFrontRequest::CreatePublicKeyAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePublicKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePublicKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreatePublicKeyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreatePublicKeyRequestPrivate
 * \brief The CreatePublicKeyRequestPrivate class provides private implementation for CreatePublicKeyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreatePublicKeyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreatePublicKeyRequestPrivate::CreatePublicKeyRequestPrivate(
    const CloudFrontRequest::Action action, CreatePublicKeyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePublicKeyRequest
 * class' copy constructor.
 */
CreatePublicKeyRequestPrivate::CreatePublicKeyRequestPrivate(
    const CreatePublicKeyRequestPrivate &other, CreatePublicKeyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
