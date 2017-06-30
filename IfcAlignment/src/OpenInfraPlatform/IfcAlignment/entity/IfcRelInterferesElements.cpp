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

#include "OpenInfraPlatform/IfcAlignment/model/IfcAlignmentP6Exception.h"
#include "OpenInfraPlatform/IfcAlignment/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcAlignment/IfcAlignmentP6EntityEnums.h"
#include "include/IfcConnectionGeometry.h"
#include "include/IfcElement.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcIdentifier.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcRelInterferesElements.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// ENTITY IfcRelInterferesElements 
		IfcRelInterferesElements::IfcRelInterferesElements() { m_entity_enum = IFCRELINTERFERESELEMENTS; }
		IfcRelInterferesElements::IfcRelInterferesElements( int id ) { m_id = id; m_entity_enum = IFCRELINTERFERESELEMENTS; }
		IfcRelInterferesElements::~IfcRelInterferesElements() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRelInterferesElements::setEntity( shared_ptr<IfcAlignmentP6Entity> other_entity )
		{
			shared_ptr<IfcRelInterferesElements> other = dynamic_pointer_cast<IfcRelInterferesElements>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatingElement = other->m_RelatingElement;
			m_RelatedElement = other->m_RelatedElement;
			m_InterferenceGeometry = other->m_InterferenceGeometry;
			m_InterferenceType = other->m_InterferenceType;
			m_ImpliedOrder = other->m_ImpliedOrder;
		}
		void IfcRelInterferesElements::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRELINTERFERESELEMENTS" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_RelatingElement ) { stream << "#" << m_RelatingElement->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_RelatedElement ) { stream << "#" << m_RelatedElement->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_InterferenceGeometry ) { stream << "#" << m_InterferenceGeometry->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_InterferenceType ) { m_InterferenceType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ImpliedOrder == false ) { stream << ".F."; }
			else if( m_ImpliedOrder == true ) { stream << ".T."; }
			stream << ");";
		}
		void IfcRelInterferesElements::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRelInterferesElements::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<9 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelInterferesElements, expecting 9, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignmentP6Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>9 ){ std::cout << "Wrong parameter count for entity IfcRelInterferesElements, expecting 9, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			readEntityReference( args[4], m_RelatingElement, map );
			readEntityReference( args[5], m_RelatedElement, map );
			readEntityReference( args[6], m_InterferenceGeometry, map );
			m_InterferenceType = IfcIdentifier::readStepData( args[7] );
			if( _stricmp( args[8].c_str(), ".F." ) == 0 ) { m_ImpliedOrder = false; }
			else if( _stricmp( args[8].c_str(), ".T." ) == 0 ) { m_ImpliedOrder = true; }
		}
		void IfcRelInterferesElements::setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> ptr_self_entity )
		{
			IfcRelConnects::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcRelInterferesElements> ptr_self = dynamic_pointer_cast<IfcRelInterferesElements>( ptr_self_entity );
			if( !ptr_self ) { throw IfcAlignmentP6Exception( "IfcRelInterferesElements::setInverseCounterparts: type mismatch" ); }
			if( m_RelatedElement )
			{
				m_RelatedElement->m_IsInterferedByElements_inverse.push_back( ptr_self );
			}
			if( m_RelatingElement )
			{
				m_RelatingElement->m_InterferesElements_inverse.push_back( ptr_self );
			}
		}
		void IfcRelInterferesElements::unlinkSelf()
		{
			IfcRelConnects::unlinkSelf();
			if( m_RelatedElement )
			{
				std::vector<weak_ptr<IfcRelInterferesElements> >& IsInterferedByElements_inverse = m_RelatedElement->m_IsInterferedByElements_inverse;
				std::vector<weak_ptr<IfcRelInterferesElements> >::iterator it_IsInterferedByElements_inverse;
				for( it_IsInterferedByElements_inverse = IsInterferedByElements_inverse.begin(); it_IsInterferedByElements_inverse != IsInterferedByElements_inverse.end(); ++it_IsInterferedByElements_inverse)
				{
					shared_ptr<IfcRelInterferesElements> self_candidate( *it_IsInterferedByElements_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						IsInterferedByElements_inverse.erase( it_IsInterferedByElements_inverse );
						break;
					}
				}
			}
			if( m_RelatingElement )
			{
				std::vector<weak_ptr<IfcRelInterferesElements> >& InterferesElements_inverse = m_RelatingElement->m_InterferesElements_inverse;
				std::vector<weak_ptr<IfcRelInterferesElements> >::iterator it_InterferesElements_inverse;
				for( it_InterferesElements_inverse = InterferesElements_inverse.begin(); it_InterferesElements_inverse != InterferesElements_inverse.end(); ++it_InterferesElements_inverse)
				{
					shared_ptr<IfcRelInterferesElements> self_candidate( *it_InterferesElements_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						InterferesElements_inverse.erase( it_InterferesElements_inverse );
						break;
					}
				}
			}
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
