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

#ifndef QTAWS_ATHENACLIENT_H
#define QTAWS_ATHENACLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Athena {

class AthenaClientPrivate;

class QTAWS_EXPORT AthenaClient : public AwsAbstractClient {
    Q_OBJECT

public:
    AthenaClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AthenaClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchGetNamedQueryResponse * batchGetNamedQuery(const BatchGetNamedQueryRequest &request);
    BatchGetQueryExecutionResponse * batchGetQueryExecution(const BatchGetQueryExecutionRequest &request);
    CreateNamedQueryResponse * createNamedQuery(const CreateNamedQueryRequest &request);
    DeleteNamedQueryResponse * deleteNamedQuery(const DeleteNamedQueryRequest &request);
    GetNamedQueryResponse * getNamedQuery(const GetNamedQueryRequest &request);
    GetQueryExecutionResponse * getQueryExecution(const GetQueryExecutionRequest &request);
    GetQueryResultsResponse * getQueryResults(const GetQueryResultsRequest &request);
    ListNamedQueriesResponse * listNamedQueries(const ListNamedQueriesRequest &request);
    ListQueryExecutionsResponse * listQueryExecutions(const ListQueryExecutionsRequest &request);
    StartQueryExecutionResponse * startQueryExecution(const StartQueryExecutionRequest &request);
    StopQueryExecutionResponse * stopQueryExecution(const StopQueryExecutionRequest &request);

private:
    Q_DECLARE_PRIVATE(AthenaClient)
    Q_DISABLE_COPY(AthenaClient)

};

} // namespace Athena
} // namespace AWS

#endif