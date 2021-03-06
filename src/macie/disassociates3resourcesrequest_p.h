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

#ifndef QTAWS_DISASSOCIATES3RESOURCESREQUEST_P_H
#define QTAWS_DISASSOCIATES3RESOURCESREQUEST_P_H

#include "macierequest_p.h"
#include "disassociates3resourcesrequest.h"

namespace QtAws {
namespace Macie {

class DisassociateS3ResourcesRequest;

class QTAWS_EXPORT DisassociateS3ResourcesRequestPrivate : public MacieRequestPrivate {

public:
    DisassociateS3ResourcesRequestPrivate(const MacieRequest::Action action,
                                   DisassociateS3ResourcesRequest * const q);
    DisassociateS3ResourcesRequestPrivate(const DisassociateS3ResourcesRequestPrivate &other,
                                   DisassociateS3ResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateS3ResourcesRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
