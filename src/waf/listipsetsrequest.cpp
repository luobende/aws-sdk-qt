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

#include "listipsetsrequest.h"
#include "listipsetsrequest_p.h"
#include "listipsetsresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::ListIPSetsRequest
 * \brief The ListIPSetsRequest class provides an interface for WAF ListIPSets requests.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::listIPSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListIPSetsRequest::ListIPSetsRequest(const ListIPSetsRequest &other)
    : WafRequest(new ListIPSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIPSetsRequest object.
 */
ListIPSetsRequest::ListIPSetsRequest()
    : WafRequest(new ListIPSetsRequestPrivate(WafRequest::ListIPSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListIPSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIPSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIPSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListIPSetsResponse(*this, reply);
}

/*!
 * \class QtAws::WAF::ListIPSetsRequestPrivate
 * \brief The ListIPSetsRequestPrivate class provides private implementation for ListIPSetsRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a ListIPSetsRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
ListIPSetsRequestPrivate::ListIPSetsRequestPrivate(
    const WafRequest::Action action, ListIPSetsRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIPSetsRequest
 * class' copy constructor.
 */
ListIPSetsRequestPrivate::ListIPSetsRequestPrivate(
    const ListIPSetsRequestPrivate &other, ListIPSetsRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
