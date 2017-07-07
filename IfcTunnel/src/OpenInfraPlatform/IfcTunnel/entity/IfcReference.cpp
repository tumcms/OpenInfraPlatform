// Copied and modified code from "IfcPlusPlus" library.
// This library is available under the OpenSceneGraph Public License. Original copyright notice:

/* -*-c++-*- IfcPlusPlus - www.ifcplusplus.com - Copyright (C) 2011 Fabian Gerold
*
* This library is open source and may be redistributed and / or modified under
* the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or
* (at your option) any later version.The full license is in LICENSE file
* included with this distribution, and on the openscenegraph.org website.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
* OpenSceneGraph Public License for more details.
*/

/* This file has been automatically generated using the TUM Open Infra Platform
Early Binding EXPRESS Generator. Any changes to this file my be lost in the future. */

#include <sstream>
#include <limits>

#include "model/IfcTunnelException.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "IfcTunnelEntityEnums.h"
#include "include/IfcIdentifier.h"
#include "include/IfcLabel.h"
#include "include/IfcReference.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// ENTITY IfcReference 
		IfcReference::IfcReference() { m_entity_enum = IFCREFERENCE; }
		IfcReference::IfcReference( int id ) { m_id = id; m_entity_enum = IFCREFERENCE; }
		IfcReference::~IfcReference() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcReference::setEntity( shared_ptr<IfcTunnelEntity> other_entity )
		{
			shared_ptr<IfcReference> other = dynamic_pointer_cast<IfcReference>(other_entity);
			if( !other) { return; }
			m_TypeIdentifier = other->m_TypeIdentifier;
			m_AttributeIdentifier = other->m_AttributeIdentifier;
			m_InstanceName = other->m_InstanceName;
			m_ListPositions = other->m_ListPositions;
			m_InnerReference = other->m_InnerReference;
		}
		void IfcReference::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCREFERENCE" << "(";
			if( m_TypeIdentifier ) { m_TypeIdentifier->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_AttributeIdentifier ) { m_AttributeIdentifier->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_InstanceName ) { m_InstanceName->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeIntList( stream, m_ListPositions );
			stream << ",";
			if( m_InnerReference ) { stream << "#" << m_InnerReference->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcReference::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcReference::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<5 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcReference, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcTunnelException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>5 ){ std::cout << "Wrong parameter count for entity IfcReference, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_TypeIdentifier = IfcIdentifier::readStepData( args[0] );
			m_AttributeIdentifier = IfcIdentifier::readStepData( args[1] );
			m_InstanceName = IfcLabel::readStepData( args[2] );
			readIntList(  args[3], m_ListPositions );
			readEntityReference( args[4], m_InnerReference, map );
		}
		void IfcReference::setInverseCounterparts( shared_ptr<IfcTunnelEntity> )
		{
		}
		void IfcReference::unlinkSelf()
		{
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
