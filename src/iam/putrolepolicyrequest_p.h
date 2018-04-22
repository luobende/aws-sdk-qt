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

#ifndef QTAWS_PUTROLEPOLICYREQUEST_P_H
#define QTAWS_PUTROLEPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "putrolepolicyrequest.h"

namespace QtAws {
namespace IAM {

class PutRolePolicyRequest;

class QTAWS_EXPORT PutRolePolicyRequestPrivate : public IamRequestPrivate {

public:
    PutRolePolicyRequestPrivate(const IamRequest::Action action,
                                   PutRolePolicyRequest * const q);
    PutRolePolicyRequestPrivate(const PutRolePolicyRequestPrivate &other,
                                   PutRolePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRolePolicyRequest)

};

} // namespace IAM
} // namespace QtAws

#endif
