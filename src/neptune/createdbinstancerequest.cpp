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

#include "createdbinstancerequest.h"
#include "createdbinstancerequest_p.h"
#include "createdbinstanceresponse.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::CreateDBInstanceRequest
 * \brief The CreateDBInstanceRequest class provides an interface for Neptune CreateDBInstance requests.
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
 * \sa NeptuneClient::createDBInstance
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBInstanceRequest::CreateDBInstanceRequest(const CreateDBInstanceRequest &other)
    : NeptuneRequest(new CreateDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBInstanceRequest object.
 */
CreateDBInstanceRequest::CreateDBInstanceRequest()
    : NeptuneRequest(new CreateDBInstanceRequestPrivate(NeptuneRequest::CreateDBInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDBInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDBInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Neptune::CreateDBInstanceRequestPrivate
 * \brief The CreateDBInstanceRequestPrivate class provides private implementation for CreateDBInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a CreateDBInstanceRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
CreateDBInstanceRequestPrivate::CreateDBInstanceRequestPrivate(
    const NeptuneRequest::Action action, CreateDBInstanceRequest * const q)
    : NeptuneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDBInstanceRequest
 * class' copy constructor.
 */
CreateDBInstanceRequestPrivate::CreateDBInstanceRequestPrivate(
    const CreateDBInstanceRequestPrivate &other, CreateDBInstanceRequest * const q)
    : NeptuneRequestPrivate(other, q)
{

}

} // namespace Neptune
} // namespace QtAws
