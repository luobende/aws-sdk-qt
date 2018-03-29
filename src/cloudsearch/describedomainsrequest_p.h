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

#ifndef QTAWS_DESCRIBEDOMAINSREQUEST_P_H
#define QTAWS_DESCRIBEDOMAINSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "describedomainsrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeDomainsRequest;

class QTAWS_EXPORT DescribeDomainsRequestPrivate : public CloudSearchRequestPrivate {

public:
    DescribeDomainsRequestPrivate(const CloudSearchRequest::Action action,
                                   DescribeDomainsRequest * const q);
    DescribeDomainsRequestPrivate(const DescribeDomainsRequestPrivate &other,
                                   DescribeDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDomainsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
