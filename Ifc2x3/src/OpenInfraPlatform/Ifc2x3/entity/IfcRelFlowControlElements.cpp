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

#include "model/Ifc2x3Exception.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "Ifc2x3EntityEnums.h"
#include "include/IfcDistributionControlElement.h"
#include "include/IfcDistributionFlowElement.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcRelFlowControlElements.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcRelFlowControlElements 
		IfcRelFlowControlElements::IfcRelFlowControlElements() { m_entity_enum = IFCRELFLOWCONTROLELEMENTS; }
		IfcRelFlowControlElements::IfcRelFlowControlElements( int id ) { m_id = id; m_entity_enum = IFCRELFLOWCONTROLELEMENTS; }
		IfcRelFlowControlElements::~IfcRelFlowControlElements() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRelFlowControlElements::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcRelFlowControlElements> other = dynamic_pointer_cast<IfcRelFlowControlElements>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatedControlElements = other->m_RelatedControlElements;
			m_RelatingFlowElement = other->m_RelatingFlowElement;
		}
		void IfcRelFlowControlElements::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRELFLOWCONTROLELEMENTS" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_RelatedControlElements );
			stream << ",";
			if( m_RelatingFlowElement ) { stream << "#" << m_RelatingFlowElement->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcRelFlowControlElements::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRelFlowControlElements::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelFlowControlElements, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcRelFlowControlElements, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			readEntityReferenceList( args[4], m_RelatedControlElements, map );
			readEntityReference( args[5], m_RelatingFlowElement, map );
		}
		void IfcRelFlowControlElements::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcRelConnects::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcRelFlowControlElements> ptr_self = dynamic_pointer_cast<IfcRelFlowControlElements>( ptr_self_entity );
			if( !ptr_self ) { throw Ifc2x3Exception( "IfcRelFlowControlElements::setInverseCounterparts: type mismatch" ); }
			for( int i=0; i<m_RelatedControlElements.size(); ++i )
			{
				if( m_RelatedControlElements[i] )
				{
					m_RelatedControlElements[i]->m_AssignedToFlowElement_inverse.push_back( ptr_self );
				}
			}
			if( m_RelatingFlowElement )
			{
				m_RelatingFlowElement->m_HasControlElements_inverse.push_back( ptr_self );
			}
		}
		void IfcRelFlowControlElements::unlinkSelf()
		{
			IfcRelConnects::unlinkSelf();
			for( int i=0; i<m_RelatedControlElements.size(); ++i )
			{
				if( m_RelatedControlElements[i] )
				{
					std::vector<weak_ptr<IfcRelFlowControlElements> >& AssignedToFlowElement_inverse = m_RelatedControlElements[i]->m_AssignedToFlowElement_inverse;
					std::vector<weak_ptr<IfcRelFlowControlElements> >::iterator it_AssignedToFlowElement_inverse;
					for( it_AssignedToFlowElement_inverse = AssignedToFlowElement_inverse.begin(); it_AssignedToFlowElement_inverse != AssignedToFlowElement_inverse.end(); ++it_AssignedToFlowElement_inverse)
					{
						shared_ptr<IfcRelFlowControlElements> self_candidate( *it_AssignedToFlowElement_inverse );
						if( self_candidate->getId() == this->getId() )
						{
							AssignedToFlowElement_inverse.erase( it_AssignedToFlowElement_inverse );
							break;
						}
					}
				}
			}
			if( m_RelatingFlowElement )
			{
				std::vector<weak_ptr<IfcRelFlowControlElements> >& HasControlElements_inverse = m_RelatingFlowElement->m_HasControlElements_inverse;
				std::vector<weak_ptr<IfcRelFlowControlElements> >::iterator it_HasControlElements_inverse;
				for( it_HasControlElements_inverse = HasControlElements_inverse.begin(); it_HasControlElements_inverse != HasControlElements_inverse.end(); ++it_HasControlElements_inverse)
				{
					shared_ptr<IfcRelFlowControlElements> self_candidate( *it_HasControlElements_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						HasControlElements_inverse.erase( it_HasControlElements_inverse );
						break;
					}
				}
			}
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
