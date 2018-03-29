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

#ifndef QTAWS_GETPLANREQUEST_P_H
#define QTAWS_GETPLANREQUEST_P_H

#include "gluerequest_p.h"
#include "getplanrequest.h"

namespace QtAws {
namespace Glue {

class GetPlanRequest;

class QTAWS_EXPORT GetPlanRequestPrivate : public GlueRequestPrivate {

public:
    GetPlanRequestPrivate(const GlueRequest::Action action,
                                   GetPlanRequest * const q);
    GetPlanRequestPrivate(const GetPlanRequestPrivate &other,
                                   GetPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPlanRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
