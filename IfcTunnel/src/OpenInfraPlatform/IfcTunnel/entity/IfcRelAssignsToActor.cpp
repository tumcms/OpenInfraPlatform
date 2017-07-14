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
#include "include/IfcActor.h"
#include "include/IfcActorRole.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcObjectDefinition.h"
#include "include/IfcObjectTypeEnum.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcRelAssignsToActor.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// ENTITY IfcRelAssignsToActor 
		IfcRelAssignsToActor::IfcRelAssignsToActor() { m_entity_enum = IFCRELASSIGNSTOACTOR; }
		IfcRelAssignsToActor::IfcRelAssignsToActor( int id ) { m_id = id; m_entity_enum = IFCRELASSIGNSTOACTOR; }
		IfcRelAssignsToActor::~IfcRelAssignsToActor() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRelAssignsToActor::setEntity( shared_ptr<IfcTunnelEntity> other_entity )
		{
			shared_ptr<IfcRelAssignsToActor> other = dynamic_pointer_cast<IfcRelAssignsToActor>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatedObjects = other->m_RelatedObjects;
			m_RelatedObjectsType = other->m_RelatedObjectsType;
			m_RelatingActor = other->m_RelatingActor;
			m_ActingRole = other->m_ActingRole;
		}
		void IfcRelAssignsToActor::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRELASSIGNSTOACTOR" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_RelatedObjects );
			stream << ",";
			if( m_RelatedObjectsType ) { m_RelatedObjectsType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_RelatingActor ) { stream << "#" << m_RelatingActor->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_ActingRole ) { stream << "#" << m_ActingRole->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcRelAssignsToActor::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRelAssignsToActor::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<8 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelAssignsToActor, expecting 8, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcTunnelException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>8 ){ std::cout << "Wrong parameter count for entity IfcRelAssignsToActor, expecting 8, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			readEntityReferenceList( args[4], m_RelatedObjects, map );
			m_RelatedObjectsType = IfcObjectTypeEnum::readStepData( args[5] );
			readEntityReference( args[6], m_RelatingActor, map );
			readEntityReference( args[7], m_ActingRole, map );
		}
		void IfcRelAssignsToActor::setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self_entity )
		{
			IfcRelAssigns::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcRelAssignsToActor> ptr_self = dynamic_pointer_cast<IfcRelAssignsToActor>( ptr_self_entity );
			if( !ptr_self ) { throw IfcTunnelException( "IfcRelAssignsToActor::setInverseCounterparts: type mismatch" ); }
			if( m_RelatingActor )
			{
				m_RelatingActor->m_IsActingUpon_inverse.push_back( ptr_self );
			}
		}
		void IfcRelAssignsToActor::unlinkSelf()
		{
			IfcRelAssigns::unlinkSelf();
			if( m_RelatingActor )
			{
				std::vector<weak_ptr<IfcRelAssignsToActor> >& IsActingUpon_inverse = m_RelatingActor->m_IsActingUpon_inverse;
				std::vector<weak_ptr<IfcRelAssignsToActor> >::iterator it_IsActingUpon_inverse;
				for( it_IsActingUpon_inverse = IsActingUpon_inverse.begin(); it_IsActingUpon_inverse != IsActingUpon_inverse.end(); ++it_IsActingUpon_inverse)
				{
					shared_ptr<IfcRelAssignsToActor> self_candidate( *it_IsActingUpon_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						IsActingUpon_inverse.erase( it_IsActingUpon_inverse );
						break;
					}
				}
			}
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
