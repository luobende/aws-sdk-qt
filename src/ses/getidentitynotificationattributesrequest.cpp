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

#include "getidentitynotificationattributesrequest.h"
#include "getidentitynotificationattributesrequest_p.h"
#include "getidentitynotificationattributesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::GetIdentityNotificationAttributesRequest
 * \brief The GetIdentityNotificationAttributesRequest class provides an interface for SES GetIdentityNotificationAttributes requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SesClient::getIdentityNotificationAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetIdentityNotificationAttributesRequest::GetIdentityNotificationAttributesRequest(const GetIdentityNotificationAttributesRequest &other)
    : SesRequest(new GetIdentityNotificationAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIdentityNotificationAttributesRequest object.
 */
GetIdentityNotificationAttributesRequest::GetIdentityNotificationAttributesRequest()
    : SesRequest(new GetIdentityNotificationAttributesRequestPrivate(SesRequest::GetIdentityNotificationAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetIdentityNotificationAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIdentityNotificationAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIdentityNotificationAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityNotificationAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::SES::GetIdentityNotificationAttributesRequestPrivate
 * \brief The GetIdentityNotificationAttributesRequestPrivate class provides private implementation for GetIdentityNotificationAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a GetIdentityNotificationAttributesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
GetIdentityNotificationAttributesRequestPrivate::GetIdentityNotificationAttributesRequestPrivate(
    const SesRequest::Action action, GetIdentityNotificationAttributesRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityNotificationAttributesRequest
 * class' copy constructor.
 */
GetIdentityNotificationAttributesRequestPrivate::GetIdentityNotificationAttributesRequestPrivate(
    const GetIdentityNotificationAttributesRequestPrivate &other, GetIdentityNotificationAttributesRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws