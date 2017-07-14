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
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcPropertySetDefinition.h"
#include "include/IfcPropertySetTemplate.h"
#include "include/IfcRelDefinesByTemplate.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// ENTITY IfcRelDefinesByTemplate 
		IfcRelDefinesByTemplate::IfcRelDefinesByTemplate() { m_entity_enum = IFCRELDEFINESBYTEMPLATE; }
		IfcRelDefinesByTemplate::IfcRelDefinesByTemplate( int id ) { m_id = id; m_entity_enum = IFCRELDEFINESBYTEMPLATE; }
		IfcRelDefinesByTemplate::~IfcRelDefinesByTemplate() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRelDefinesByTemplate::setEntity( shared_ptr<IfcAlignmentP6Entity> other_entity )
		{
			shared_ptr<IfcRelDefinesByTemplate> other = dynamic_pointer_cast<IfcRelDefinesByTemplate>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatedPropertySets = other->m_RelatedPropertySets;
			m_RelatingTemplate = other->m_RelatingTemplate;
		}
		void IfcRelDefinesByTemplate::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRELDEFINESBYTEMPLATE" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_RelatedPropertySets );
			stream << ",";
			if( m_RelatingTemplate ) { stream << "#" << m_RelatingTemplate->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcRelDefinesByTemplate::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRelDefinesByTemplate::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelDefinesByTemplate, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignmentP6Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcRelDefinesByTemplate, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			readEntityReferenceList( args[4], m_RelatedPropertySets, map );
			readEntityReference( args[5], m_RelatingTemplate, map );
		}
		void IfcRelDefinesByTemplate::setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> ptr_self_entity )
		{
			IfcRelDefines::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcRelDefinesByTemplate> ptr_self = dynamic_pointer_cast<IfcRelDefinesByTemplate>( ptr_self_entity );
			if( !ptr_self ) { throw IfcAlignmentP6Exception( "IfcRelDefinesByTemplate::setInverseCounterparts: type mismatch" ); }
			for( int i=0; i<m_RelatedPropertySets.size(); ++i )
			{
				if( m_RelatedPropertySets[i] )
				{
					m_RelatedPropertySets[i]->m_IsDefinedBy_inverse.push_back( ptr_self );
				}
			}
			if( m_RelatingTemplate )
			{
				m_RelatingTemplate->m_Defines_inverse.push_back( ptr_self );
			}
		}
		void IfcRelDefinesByTemplate::unlinkSelf()
		{
			IfcRelDefines::unlinkSelf();
			for( int i=0; i<m_RelatedPropertySets.size(); ++i )
			{
				if( m_RelatedPropertySets[i] )
				{
					std::vector<weak_ptr<IfcRelDefinesByTemplate> >& IsDefinedBy_inverse = m_RelatedPropertySets[i]->m_IsDefinedBy_inverse;
					std::vector<weak_ptr<IfcRelDefinesByTemplate> >::iterator it_IsDefinedBy_inverse;
					for( it_IsDefinedBy_inverse = IsDefinedBy_inverse.begin(); it_IsDefinedBy_inverse != IsDefinedBy_inverse.end(); ++it_IsDefinedBy_inverse)
					{
						shared_ptr<IfcRelDefinesByTemplate> self_candidate( *it_IsDefinedBy_inverse );
						if( self_candidate->getId() == this->getId() )
						{
							IsDefinedBy_inverse.erase( it_IsDefinedBy_inverse );
							break;
						}
					}
				}
			}
			if( m_RelatingTemplate )
			{
				std::vector<weak_ptr<IfcRelDefinesByTemplate> >& Defines_inverse = m_RelatingTemplate->m_Defines_inverse;
				std::vector<weak_ptr<IfcRelDefinesByTemplate> >::iterator it_Defines_inverse;
				for( it_Defines_inverse = Defines_inverse.begin(); it_Defines_inverse != Defines_inverse.end(); ++it_Defines_inverse)
				{
					shared_ptr<IfcRelDefinesByTemplate> self_candidate( *it_Defines_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						Defines_inverse.erase( it_Defines_inverse );
						break;
					}
				}
			}
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
