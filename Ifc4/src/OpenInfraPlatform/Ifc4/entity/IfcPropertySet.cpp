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

#include "OpenInfraPlatform/Ifc4/model/Ifc4Exception.h"
#include "OpenInfraPlatform/Ifc4/reader/ReaderUtil.h"
#include "OpenInfraPlatform/Ifc4/writer/WriterUtil.h"
#include "OpenInfraPlatform/Ifc4/Ifc4EntityEnums.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcProperty.h"
#include "include/IfcPropertySet.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelDeclares.h"
#include "include/IfcRelDefinesByProperties.h"
#include "include/IfcRelDefinesByTemplate.h"
#include "include/IfcText.h"
#include "include/IfcTypeObject.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcPropertySet 
		IfcPropertySet::IfcPropertySet() { m_entity_enum = IFCPROPERTYSET; }
		IfcPropertySet::IfcPropertySet( int id ) { m_id = id; m_entity_enum = IFCPROPERTYSET; }
		IfcPropertySet::~IfcPropertySet() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcPropertySet::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcPropertySet> other = dynamic_pointer_cast<IfcPropertySet>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_HasProperties = other->m_HasProperties;
		}
		void IfcPropertySet::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCPROPERTYSET" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_HasProperties );
			stream << ");";
		}
		void IfcPropertySet::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcPropertySet::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<5 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcPropertySet, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>5 ){ std::cout << "Wrong parameter count for entity IfcPropertySet, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			readEntityReferenceList( args[4], m_HasProperties, map );
		}
		void IfcPropertySet::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcPropertySetDefinition::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcPropertySet> ptr_self = dynamic_pointer_cast<IfcPropertySet>( ptr_self_entity );
			if( !ptr_self ) { throw Ifc4Exception( "IfcPropertySet::setInverseCounterparts: type mismatch" ); }
			for( int i=0; i<m_HasProperties.size(); ++i )
			{
				if( m_HasProperties[i] )
				{
					m_HasProperties[i]->m_PartOfPset_inverse.push_back( ptr_self );
				}
			}
		}
		void IfcPropertySet::unlinkSelf()
		{
			IfcPropertySetDefinition::unlinkSelf();
			for( int i=0; i<m_HasProperties.size(); ++i )
			{
				if( m_HasProperties[i] )
				{
					std::vector<weak_ptr<IfcPropertySet> >& PartOfPset_inverse = m_HasProperties[i]->m_PartOfPset_inverse;
					std::vector<weak_ptr<IfcPropertySet> >::iterator it_PartOfPset_inverse;
					for( it_PartOfPset_inverse = PartOfPset_inverse.begin(); it_PartOfPset_inverse != PartOfPset_inverse.end(); ++it_PartOfPset_inverse)
					{
						shared_ptr<IfcPropertySet> self_candidate( *it_PartOfPset_inverse );
						if( self_candidate->getId() == this->getId() )
						{
							PartOfPset_inverse.erase( it_PartOfPset_inverse );
							break;
						}
					}
				}
			}
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
