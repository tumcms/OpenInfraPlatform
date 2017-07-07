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

#include "model/IfcBridgeException.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "IfcBridgeEntityEnums.h"
#include "include/IfcAnnotation.h"
#include "include/IfcElement.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcGrid.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcProduct.h"
#include "include/IfcRelContainedInSpatialStructure.h"
#include "include/IfcSpatialStructureElement.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// ENTITY IfcRelContainedInSpatialStructure 
		IfcRelContainedInSpatialStructure::IfcRelContainedInSpatialStructure() { m_entity_enum = IFCRELCONTAINEDINSPATIALSTRUCTURE; }
		IfcRelContainedInSpatialStructure::IfcRelContainedInSpatialStructure( int id ) { m_id = id; m_entity_enum = IFCRELCONTAINEDINSPATIALSTRUCTURE; }
		IfcRelContainedInSpatialStructure::~IfcRelContainedInSpatialStructure() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRelContainedInSpatialStructure::setEntity( shared_ptr<IfcBridgeEntity> other_entity )
		{
			shared_ptr<IfcRelContainedInSpatialStructure> other = dynamic_pointer_cast<IfcRelContainedInSpatialStructure>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatedElements = other->m_RelatedElements;
			m_RelatingStructure = other->m_RelatingStructure;
		}
		void IfcRelContainedInSpatialStructure::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRELCONTAINEDINSPATIALSTRUCTURE" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_RelatedElements );
			stream << ",";
			if( m_RelatingStructure ) { stream << "#" << m_RelatingStructure->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcRelContainedInSpatialStructure::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRelContainedInSpatialStructure::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelContainedInSpatialStructure, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcBridgeException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcRelContainedInSpatialStructure, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			readEntityReferenceList( args[4], m_RelatedElements, map );
			readEntityReference( args[5], m_RelatingStructure, map );
		}
		void IfcRelContainedInSpatialStructure::setInverseCounterparts( shared_ptr<IfcBridgeEntity> ptr_self_entity )
		{
			IfcRelConnects::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcRelContainedInSpatialStructure> ptr_self = dynamic_pointer_cast<IfcRelContainedInSpatialStructure>( ptr_self_entity );
			if( !ptr_self ) { throw IfcBridgeException( "IfcRelContainedInSpatialStructure::setInverseCounterparts: type mismatch" ); }
			for( int i=0; i<m_RelatedElements.size(); ++i )
			{
				shared_ptr<IfcAnnotation>  RelatedElements_IfcAnnotation = dynamic_pointer_cast<IfcAnnotation>( m_RelatedElements[i] );
				if( RelatedElements_IfcAnnotation )
				{
					RelatedElements_IfcAnnotation->m_ContainedInStructure_inverse.push_back( ptr_self );
				}
				shared_ptr<IfcElement>  RelatedElements_IfcElement = dynamic_pointer_cast<IfcElement>( m_RelatedElements[i] );
				if( RelatedElements_IfcElement )
				{
					RelatedElements_IfcElement->m_ContainedInStructure_inverse.push_back( ptr_self );
				}
				shared_ptr<IfcGrid>  RelatedElements_IfcGrid = dynamic_pointer_cast<IfcGrid>( m_RelatedElements[i] );
				if( RelatedElements_IfcGrid )
				{
					RelatedElements_IfcGrid->m_ContainedInStructure_inverse.push_back( ptr_self );
				}
			}
			if( m_RelatingStructure )
			{
				m_RelatingStructure->m_ContainsElements_inverse.push_back( ptr_self );
			}
		}
		void IfcRelContainedInSpatialStructure::unlinkSelf()
		{
			IfcRelConnects::unlinkSelf();
			for( int i=0; i<m_RelatedElements.size(); ++i )
			{
				shared_ptr<IfcAnnotation>  RelatedElements_IfcAnnotation = dynamic_pointer_cast<IfcAnnotation>( m_RelatedElements[i] );
				if( RelatedElements_IfcAnnotation )
				{
					std::vector<weak_ptr<IfcRelContainedInSpatialStructure> >& ContainedInStructure_inverse = RelatedElements_IfcAnnotation->m_ContainedInStructure_inverse;
					std::vector<weak_ptr<IfcRelContainedInSpatialStructure> >::iterator it_ContainedInStructure_inverse;
					for( it_ContainedInStructure_inverse = ContainedInStructure_inverse.begin(); it_ContainedInStructure_inverse != ContainedInStructure_inverse.end(); ++it_ContainedInStructure_inverse)
					{
						shared_ptr<IfcRelContainedInSpatialStructure> self_candidate( *it_ContainedInStructure_inverse );
						if( self_candidate->getId() == this->getId() )
						{
							ContainedInStructure_inverse.erase( it_ContainedInStructure_inverse );
							break;
						}
					}
				}
				shared_ptr<IfcElement>  RelatedElements_IfcElement = dynamic_pointer_cast<IfcElement>( m_RelatedElements[i] );
				if( RelatedElements_IfcElement )
				{
					std::vector<weak_ptr<IfcRelContainedInSpatialStructure> >& ContainedInStructure_inverse = RelatedElements_IfcElement->m_ContainedInStructure_inverse;
					std::vector<weak_ptr<IfcRelContainedInSpatialStructure> >::iterator it_ContainedInStructure_inverse;
					for( it_ContainedInStructure_inverse = ContainedInStructure_inverse.begin(); it_ContainedInStructure_inverse != ContainedInStructure_inverse.end(); ++it_ContainedInStructure_inverse)
					{
						shared_ptr<IfcRelContainedInSpatialStructure> self_candidate( *it_ContainedInStructure_inverse );
						if( self_candidate->getId() == this->getId() )
						{
							ContainedInStructure_inverse.erase( it_ContainedInStructure_inverse );
							break;
						}
					}
				}
				shared_ptr<IfcGrid>  RelatedElements_IfcGrid = dynamic_pointer_cast<IfcGrid>( m_RelatedElements[i] );
				if( RelatedElements_IfcGrid )
				{
					std::vector<weak_ptr<IfcRelContainedInSpatialStructure> >& ContainedInStructure_inverse = RelatedElements_IfcGrid->m_ContainedInStructure_inverse;
					std::vector<weak_ptr<IfcRelContainedInSpatialStructure> >::iterator it_ContainedInStructure_inverse;
					for( it_ContainedInStructure_inverse = ContainedInStructure_inverse.begin(); it_ContainedInStructure_inverse != ContainedInStructure_inverse.end(); ++it_ContainedInStructure_inverse)
					{
						shared_ptr<IfcRelContainedInSpatialStructure> self_candidate( *it_ContainedInStructure_inverse );
						if( self_candidate->getId() == this->getId() )
						{
							ContainedInStructure_inverse.erase( it_ContainedInStructure_inverse );
							break;
						}
					}
				}
			}
			if( m_RelatingStructure )
			{
				std::vector<weak_ptr<IfcRelContainedInSpatialStructure> >& ContainsElements_inverse = m_RelatingStructure->m_ContainsElements_inverse;
				std::vector<weak_ptr<IfcRelContainedInSpatialStructure> >::iterator it_ContainsElements_inverse;
				for( it_ContainsElements_inverse = ContainsElements_inverse.begin(); it_ContainsElements_inverse != ContainsElements_inverse.end(); ++it_ContainsElements_inverse)
				{
					shared_ptr<IfcRelContainedInSpatialStructure> self_candidate( *it_ContainsElements_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						ContainsElements_inverse.erase( it_ContainsElements_inverse );
						break;
					}
				}
			}
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
