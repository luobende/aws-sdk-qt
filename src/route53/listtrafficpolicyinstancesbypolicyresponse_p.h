/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTTRAFFICPOLICYINSTANCESBYPOLICYRESPONSE_P_H
#define QTAWS_LISTTRAFFICPOLICYINSTANCESBYPOLICYRESPONSE_P_H

#include "route53response.h"
#include "listtrafficpolicyinstancesbypolicyrequest.h"

namespace AWS {

namespace Route53 {

class ListTrafficPolicyInstancesByPolicyResponse;

class QTAWS_EXPORT ListTrafficPolicyInstancesByPolicyResponsePrivate : public Route53ResponsePrivate {
    Q_OBJECT

public:

    ListTrafficPolicyInstancesByPolicyResponsePrivate(ListTrafficPolicyInstancesByPolicyResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrafficPolicyInstancesByPolicyResponse)
    Q_DISABLE_COPY(ListTrafficPolicyInstancesByPolicyResponsePrivate)

};

} // namespace Route53
} // namespace AWS

#endif
