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

#ifndef QTAWS_WAFREQUEST_P_H
#define QTAWS_WAFREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "wafrequest.h"

namespace QtAws {
namespace WAF {

class WAFRequest;

class QTAWS_EXPORT WAFRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WAFRequest::Action action; ///< WAF action to be performed.
    QString apiVersion;        ///< WAF API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WAF request (query string) parameters. @todo?

    WAFRequestPrivate(const WAFRequest::Action action, WAFRequest * const q);
    WAFRequestPrivate(const WAFRequestPrivate &other, WAFRequest * const q);

    static QString toString(const WAFRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WAFRequest)

};

} // namespace WAF
} // namespace QtAws

#endif