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

#include "createregexpatternsetrequest.h"
#include "createregexpatternsetrequest_p.h"
#include "createregexpatternsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::CreateRegexPatternSetRequest
 * \brief The CreateRegexPatternSetRequest class provides an interface for WAF CreateRegexPatternSet requests.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::createRegexPatternSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRegexPatternSetRequest::CreateRegexPatternSetRequest(const CreateRegexPatternSetRequest &other)
    : WafRequest(new CreateRegexPatternSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRegexPatternSetRequest object.
 */
CreateRegexPatternSetRequest::CreateRegexPatternSetRequest()
    : WafRequest(new CreateRegexPatternSetRequestPrivate(WafRequest::CreateRegexPatternSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRegexPatternSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRegexPatternSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRegexPatternSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateRegexPatternSetResponse(*this, reply);
}

/*!
 * \class QtAws::WAF::CreateRegexPatternSetRequestPrivate
 * \brief The CreateRegexPatternSetRequestPrivate class provides private implementation for CreateRegexPatternSetRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a CreateRegexPatternSetRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
CreateRegexPatternSetRequestPrivate::CreateRegexPatternSetRequestPrivate(
    const WafRequest::Action action, CreateRegexPatternSetRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRegexPatternSetRequest
 * class' copy constructor.
 */
CreateRegexPatternSetRequestPrivate::CreateRegexPatternSetRequestPrivate(
    const CreateRegexPatternSetRequestPrivate &other, CreateRegexPatternSetRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
