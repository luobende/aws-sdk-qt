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

#ifndef QTAWS_DESCRIBERESERVEDCACHENODESRESPONSE_H
#define QTAWS_DESCRIBERESERVEDCACHENODESRESPONSE_H

#include "elasticacheresponse.h"
#include "describereservedcachenodesrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReservedCacheNodesResponsePrivate;

class QTAWS_EXPORT DescribeReservedCacheNodesResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeReservedCacheNodesResponse(const DescribeReservedCacheNodesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedCacheNodesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedCacheNodesResponse)
    Q_DISABLE_COPY(DescribeReservedCacheNodesResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
