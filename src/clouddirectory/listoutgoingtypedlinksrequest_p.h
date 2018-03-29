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

#ifndef QTAWS_LISTOUTGOINGTYPEDLINKSREQUEST_P_H
#define QTAWS_LISTOUTGOINGTYPEDLINKSREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listoutgoingtypedlinksrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListOutgoingTypedLinksRequest;

class QTAWS_EXPORT ListOutgoingTypedLinksRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListOutgoingTypedLinksRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListOutgoingTypedLinksRequest * const q);
    ListOutgoingTypedLinksRequestPrivate(const ListOutgoingTypedLinksRequestPrivate &other,
                                   ListOutgoingTypedLinksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOutgoingTypedLinksRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
