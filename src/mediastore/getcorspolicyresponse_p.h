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

#ifndef QTAWS_GETCORSPOLICYRESPONSE_P_H
#define QTAWS_GETCORSPOLICYRESPONSE_P_H

#include "mediastoreresponse.h"
#include "getcorspolicyrequest.h"

namespace AWS {

namespace MediaStore {

class GetCorsPolicyResponse;

class QTAWS_EXPORT GetCorsPolicyResponsePrivate : public MediaStoreResponsePrivate {
    Q_OBJECT

public:

    GetCorsPolicyResponsePrivate(GetCorsPolicyResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCorsPolicyResponse)
    Q_DISABLE_COPY(GetCorsPolicyResponsePrivate)

};

} // namespace MediaStore
} // namespace AWS

#endif
