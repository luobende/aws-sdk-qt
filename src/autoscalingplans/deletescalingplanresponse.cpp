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

#include "deletescalingplanresponse.h"
#include "deletescalingplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::DeleteScalingPlanResponse
 * \brief The DeleteScalingPlanResponse class provides an interace for AutoScalingPlans DeleteScalingPlan responses.
 *
 * \inmodule QtAwsAutoScalingPlans
 *
 *  <fullname>AWS Auto Scaling</fullname>
 * 
 *  Use AWS Auto Scaling to quickly discover all the scalable AWS resources for your application and configure dynamic
 *  scaling for your scalable
 * 
 *  resources>
 * 
 *  To get started, create a scaling plan with a set of instructions used to configure dynamic scaling for the scalable
 *  resources in your application. AWS Auto Scaling creates target tracking scaling policies for the scalable resources in
 *  your scaling plan. Target tracking scaling policies adjust the capacity of your scalable resource as required to
 *  maintain resource utilization at the target value that you
 *
 * \sa AutoScalingPlansClient::deleteScalingPlan
 */

/*!
 * Constructs a DeleteScalingPlanResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteScalingPlanResponse::DeleteScalingPlanResponse(
        const DeleteScalingPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingPlansResponse(new DeleteScalingPlanResponsePrivate(this), parent)
{
    setRequest(new DeleteScalingPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteScalingPlanRequest * DeleteScalingPlanResponse::request() const
{
    Q_D(const DeleteScalingPlanResponse);
    return static_cast<const DeleteScalingPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScalingPlans DeleteScalingPlan \a response.
 */
void DeleteScalingPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteScalingPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScalingPlans::DeleteScalingPlanResponsePrivate
 * \brief The DeleteScalingPlanResponsePrivate class provides private implementation for DeleteScalingPlanResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a DeleteScalingPlanResponsePrivate object with public implementation \a q.
 */
DeleteScalingPlanResponsePrivate::DeleteScalingPlanResponsePrivate(
    DeleteScalingPlanResponse * const q) : AutoScalingPlansResponsePrivate(q)
{

}

/*!
 * Parses a AutoScalingPlans DeleteScalingPlan response element from \a xml.
 */
void DeleteScalingPlanResponsePrivate::parseDeleteScalingPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteScalingPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScalingPlans
} // namespace QtAws
