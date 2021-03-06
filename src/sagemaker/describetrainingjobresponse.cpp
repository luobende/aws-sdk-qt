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

#include "describetrainingjobresponse.h"
#include "describetrainingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeTrainingJobResponse
 * \brief The DescribeTrainingJobResponse class provides an interace for SageMaker DescribeTrainingJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::describeTrainingJob
 */

/*!
 * Constructs a DescribeTrainingJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTrainingJobResponse::DescribeTrainingJobResponse(
        const DescribeTrainingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeTrainingJobResponsePrivate(this), parent)
{
    setRequest(new DescribeTrainingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTrainingJobRequest * DescribeTrainingJobResponse::request() const
{
    Q_D(const DescribeTrainingJobResponse);
    return static_cast<const DescribeTrainingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeTrainingJob \a response.
 */
void DescribeTrainingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTrainingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeTrainingJobResponsePrivate
 * \brief The DescribeTrainingJobResponsePrivate class provides private implementation for DescribeTrainingJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeTrainingJobResponsePrivate object with public implementation \a q.
 */
DescribeTrainingJobResponsePrivate::DescribeTrainingJobResponsePrivate(
    DescribeTrainingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeTrainingJob response element from \a xml.
 */
void DescribeTrainingJobResponsePrivate::parseDescribeTrainingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrainingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
