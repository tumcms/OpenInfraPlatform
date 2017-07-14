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
#include "include/IfcElement.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcPort.h"
#include "include/IfcRelConnectsPortToElement.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcRelConnectsPortToElement 
		IfcRelConnectsPortToElement::IfcRelConnectsPortToElement() { m_entity_enum = IFCRELCONNECTSPORTTOELEMENT; }
		IfcRelConnectsPortToElement::IfcRelConnectsPortToElement( int id ) { m_id = id; m_entity_enum = IFCRELCONNECTSPORTTOELEMENT; }
		IfcRelConnectsPortToElement::~IfcRelConnectsPortToElement() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRelConnectsPortToElement::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcRelConnectsPortToElement> other = dynamic_pointer_cast<IfcRelConnectsPortToElement>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatingPort = other->m_RelatingPort;
			m_RelatedElement = other->m_RelatedElement;
		}
		void IfcRelConnectsPortToElement::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRELCONNECTSPORTTOELEMENT" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_RelatingPort ) { stream << "#" << m_RelatingPort->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_RelatedElement ) { stream << "#" << m_RelatedElement->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcRelConnectsPortToElement::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRelConnectsPortToElement::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelConnectsPortToElement, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcRelConnectsPortToElement, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			readEntityReference( args[4], m_RelatingPort, map );
			readEntityReference( args[5], m_RelatedElement, map );
		}
		void IfcRelConnectsPortToElement::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcRelConnects::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcRelConnectsPortToElement> ptr_self = dynamic_pointer_cast<IfcRelConnectsPortToElement>( ptr_self_entity );
			if( !ptr_self ) { throw Ifc2x3Exception( "IfcRelConnectsPortToElement::setInverseCounterparts: type mismatch" ); }
			if( m_RelatedElement )
			{
				m_RelatedElement->m_HasPorts_inverse.push_back( ptr_self );
			}
			if( m_RelatingPort )
			{
				m_RelatingPort->m_ContainedIn_inverse = ptr_self;
			}
		}
		void IfcRelConnectsPortToElement::unlinkSelf()
		{
			IfcRelConnects::unlinkSelf();
			if( m_RelatedElement )
			{
				std::vector<weak_ptr<IfcRelConnectsPortToElement> >& HasPorts_inverse = m_RelatedElement->m_HasPorts_inverse;
				std::vector<weak_ptr<IfcRelConnectsPortToElement> >::iterator it_HasPorts_inverse;
				for( it_HasPorts_inverse = HasPorts_inverse.begin(); it_HasPorts_inverse != HasPorts_inverse.end(); ++it_HasPorts_inverse)
				{
					shared_ptr<IfcRelConnectsPortToElement> self_candidate( *it_HasPorts_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						HasPorts_inverse.erase( it_HasPorts_inverse );
						break;
					}
				}
			}
			if( m_RelatingPort )
			{
				shared_ptr<IfcRelConnectsPortToElement> self_candidate( m_RelatingPort->m_ContainedIn_inverse );
				if( self_candidate->getId() == this->getId() )
				{
					weak_ptr<IfcRelConnectsPortToElement>& self_candidate_weak = m_RelatingPort->m_ContainedIn_inverse;
					self_candidate_weak.reset();
				}
			}
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
