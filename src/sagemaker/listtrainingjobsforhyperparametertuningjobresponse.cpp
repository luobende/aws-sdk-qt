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

#include "listtrainingjobsforhyperparametertuningjobresponse.h"
#include "listtrainingjobsforhyperparametertuningjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTrainingJobsForHyperParameterTuningJobResponse
 * \brief The ListTrainingJobsForHyperParameterTuningJobResponse class provides an interace for SageMaker ListTrainingJobsForHyperParameterTuningJob responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::listTrainingJobsForHyperParameterTuningJob
 */

/*!
 * Constructs a ListTrainingJobsForHyperParameterTuningJobResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrainingJobsForHyperParameterTuningJobResponse::ListTrainingJobsForHyperParameterTuningJobResponse(
        const ListTrainingJobsForHyperParameterTuningJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListTrainingJobsForHyperParameterTuningJobResponsePrivate(this), parent)
{
    setRequest(new ListTrainingJobsForHyperParameterTuningJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrainingJobsForHyperParameterTuningJobRequest * ListTrainingJobsForHyperParameterTuningJobResponse::request() const
{
    Q_D(const ListTrainingJobsForHyperParameterTuningJobResponse);
    return static_cast<const ListTrainingJobsForHyperParameterTuningJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListTrainingJobsForHyperParameterTuningJob \a response.
 */
void ListTrainingJobsForHyperParameterTuningJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrainingJobsForHyperParameterTuningJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListTrainingJobsForHyperParameterTuningJobResponsePrivate
 * \brief The ListTrainingJobsForHyperParameterTuningJobResponsePrivate class provides private implementation for ListTrainingJobsForHyperParameterTuningJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTrainingJobsForHyperParameterTuningJobResponsePrivate object with public implementation \a q.
 */
ListTrainingJobsForHyperParameterTuningJobResponsePrivate::ListTrainingJobsForHyperParameterTuningJobResponsePrivate(
    ListTrainingJobsForHyperParameterTuningJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListTrainingJobsForHyperParameterTuningJob response element from \a xml.
 */
void ListTrainingJobsForHyperParameterTuningJobResponsePrivate::parseListTrainingJobsForHyperParameterTuningJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrainingJobsForHyperParameterTuningJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
