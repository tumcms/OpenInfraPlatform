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
#include "include/IfcApproval.h"
#include "include/IfcLabel.h"
#include "include/IfcResourceApprovalRelationship.h"
#include "include/IfcResourceObjectSelect.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// ENTITY IfcResourceApprovalRelationship 
		IfcResourceApprovalRelationship::IfcResourceApprovalRelationship() { m_entity_enum = IFCRESOURCEAPPROVALRELATIONSHIP; }
		IfcResourceApprovalRelationship::IfcResourceApprovalRelationship( int id ) { m_id = id; m_entity_enum = IFCRESOURCEAPPROVALRELATIONSHIP; }
		IfcResourceApprovalRelationship::~IfcResourceApprovalRelationship() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcResourceApprovalRelationship::setEntity( shared_ptr<IfcTunnelEntity> other_entity )
		{
			shared_ptr<IfcResourceApprovalRelationship> other = dynamic_pointer_cast<IfcResourceApprovalRelationship>(other_entity);
			if( !other) { return; }
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatedResourceObjects = other->m_RelatedResourceObjects;
			m_RelatingApproval = other->m_RelatingApproval;
		}
		void IfcResourceApprovalRelationship::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRESOURCEAPPROVALRELATIONSHIP" << "(";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeTypeList( stream, m_RelatedResourceObjects, true );
			stream << ",";
			if( m_RelatingApproval ) { stream << "#" << m_RelatingApproval->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcResourceApprovalRelationship::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcResourceApprovalRelationship::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<4 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcResourceApprovalRelationship, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcTunnelException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>4 ){ std::cout << "Wrong parameter count for entity IfcResourceApprovalRelationship, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Name = IfcLabel::readStepData( args[0] );
			m_Description = IfcText::readStepData( args[1] );
			readSelectList( args[2], m_RelatedResourceObjects, map );
			readEntityReference( args[3], m_RelatingApproval, map );
		}
		void IfcResourceApprovalRelationship::setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self_entity )
		{
			IfcResourceLevelRelationship::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcResourceApprovalRelationship> ptr_self = dynamic_pointer_cast<IfcResourceApprovalRelationship>( ptr_self_entity );
			if( !ptr_self ) { throw IfcTunnelException( "IfcResourceApprovalRelationship::setInverseCounterparts: type mismatch" ); }
			if( m_RelatingApproval )
			{
				m_RelatingApproval->m_ApprovedResources_inverse.push_back( ptr_self );
			}
		}
		void IfcResourceApprovalRelationship::unlinkSelf()
		{
			IfcResourceLevelRelationship::unlinkSelf();
			if( m_RelatingApproval )
			{
				std::vector<weak_ptr<IfcResourceApprovalRelationship> >& ApprovedResources_inverse = m_RelatingApproval->m_ApprovedResources_inverse;
				std::vector<weak_ptr<IfcResourceApprovalRelationship> >::iterator it_ApprovedResources_inverse;
				for( it_ApprovedResources_inverse = ApprovedResources_inverse.begin(); it_ApprovedResources_inverse != ApprovedResources_inverse.end(); ++it_ApprovedResources_inverse)
				{
					shared_ptr<IfcResourceApprovalRelationship> self_candidate( *it_ApprovedResources_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						ApprovedResources_inverse.erase( it_ApprovedResources_inverse );
						break;
					}
				}
			}
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
