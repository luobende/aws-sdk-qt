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

#include "updatescalingplanresponse.h"
#include "updatescalingplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::UpdateScalingPlanResponse
 * \brief The UpdateScalingPlanResponse class provides an interace for AutoScalingPlans UpdateScalingPlan responses.
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
 * \sa AutoScalingPlansClient::updateScalingPlan
 */

/*!
 * Constructs a UpdateScalingPlanResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateScalingPlanResponse::UpdateScalingPlanResponse(
        const UpdateScalingPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingPlansResponse(new UpdateScalingPlanResponsePrivate(this), parent)
{
    setRequest(new UpdateScalingPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateScalingPlanRequest * UpdateScalingPlanResponse::request() const
{
    Q_D(const UpdateScalingPlanResponse);
    return static_cast<const UpdateScalingPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScalingPlans UpdateScalingPlan \a response.
 */
void UpdateScalingPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateScalingPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScalingPlans::UpdateScalingPlanResponsePrivate
 * \brief The UpdateScalingPlanResponsePrivate class provides private implementation for UpdateScalingPlanResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a UpdateScalingPlanResponsePrivate object with public implementation \a q.
 */
UpdateScalingPlanResponsePrivate::UpdateScalingPlanResponsePrivate(
    UpdateScalingPlanResponse * const q) : AutoScalingPlansResponsePrivate(q)
{

}

/*!
 * Parses a AutoScalingPlans UpdateScalingPlan response element from \a xml.
 */
void UpdateScalingPlanResponsePrivate::parseUpdateScalingPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateScalingPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScalingPlans
} // namespace QtAws
