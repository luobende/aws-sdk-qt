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

#include "createdbclustersnapshotrequest.h"
#include "createdbclustersnapshotrequest_p.h"
#include "createdbclustersnapshotresponse.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::CreateDBClusterSnapshotRequest
 * \brief The CreateDBClusterSnapshotRequest class provides an interface for Neptune CreateDBClusterSnapshot requests.
 *
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 * 
 *  </p
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network security.
 * 
 *  </p
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 * 
 *  guide>
 * 
 *  <b>Amazon Neptune API Reference</b>
 *
 * \sa NeptuneClient::createDBClusterSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBClusterSnapshotRequest::CreateDBClusterSnapshotRequest(const CreateDBClusterSnapshotRequest &other)
    : NeptuneRequest(new CreateDBClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBClusterSnapshotRequest object.
 */
CreateDBClusterSnapshotRequest::CreateDBClusterSnapshotRequest()
    : NeptuneRequest(new CreateDBClusterSnapshotRequestPrivate(NeptuneRequest::CreateDBClusterSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDBClusterSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDBClusterSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBClusterSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::Neptune::CreateDBClusterSnapshotRequestPrivate
 * \brief The CreateDBClusterSnapshotRequestPrivate class provides private implementation for CreateDBClusterSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a CreateDBClusterSnapshotRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
CreateDBClusterSnapshotRequestPrivate::CreateDBClusterSnapshotRequestPrivate(
    const NeptuneRequest::Action action, CreateDBClusterSnapshotRequest * const q)
    : NeptuneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDBClusterSnapshotRequest
 * class' copy constructor.
 */
CreateDBClusterSnapshotRequestPrivate::CreateDBClusterSnapshotRequestPrivate(
    const CreateDBClusterSnapshotRequestPrivate &other, CreateDBClusterSnapshotRequest * const q)
    : NeptuneRequestPrivate(other, q)
{

}

} // namespace Neptune
} // namespace QtAws
