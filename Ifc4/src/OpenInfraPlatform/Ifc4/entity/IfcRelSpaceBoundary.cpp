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
#include "include/IfcConnectionGeometry.h"
#include "include/IfcElement.h"
#include "include/IfcExternalSpatialElement.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcInternalOrExternalEnum.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcPhysicalOrVirtualEnum.h"
#include "include/IfcRelSpaceBoundary.h"
#include "include/IfcSpace.h"
#include "include/IfcSpaceBoundarySelect.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcRelSpaceBoundary 
		IfcRelSpaceBoundary::IfcRelSpaceBoundary() { m_entity_enum = IFCRELSPACEBOUNDARY; }
		IfcRelSpaceBoundary::IfcRelSpaceBoundary( int id ) { m_id = id; m_entity_enum = IFCRELSPACEBOUNDARY; }
		IfcRelSpaceBoundary::~IfcRelSpaceBoundary() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRelSpaceBoundary::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcRelSpaceBoundary> other = dynamic_pointer_cast<IfcRelSpaceBoundary>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatingSpace = other->m_RelatingSpace;
			m_RelatedBuildingElement = other->m_RelatedBuildingElement;
			m_ConnectionGeometry = other->m_ConnectionGeometry;
			m_PhysicalOrVirtualBoundary = other->m_PhysicalOrVirtualBoundary;
			m_InternalOrExternalBoundary = other->m_InternalOrExternalBoundary;
		}
		void IfcRelSpaceBoundary::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRELSPACEBOUNDARY" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_RelatingSpace ) { m_RelatingSpace->getStepParameter( stream, true ); } else { stream << "$"; }
			stream << ",";
			if( m_RelatedBuildingElement ) { stream << "#" << m_RelatedBuildingElement->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_ConnectionGeometry ) { stream << "#" << m_ConnectionGeometry->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_PhysicalOrVirtualBoundary ) { m_PhysicalOrVirtualBoundary->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_InternalOrExternalBoundary ) { m_InternalOrExternalBoundary->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcRelSpaceBoundary::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRelSpaceBoundary::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<9 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelSpaceBoundary, expecting 9, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>9 ){ std::cout << "Wrong parameter count for entity IfcRelSpaceBoundary, expecting 9, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			m_RelatingSpace = IfcSpaceBoundarySelect::readStepData( args[4], map );
			readEntityReference( args[5], m_RelatedBuildingElement, map );
			readEntityReference( args[6], m_ConnectionGeometry, map );
			m_PhysicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum::readStepData( args[7] );
			m_InternalOrExternalBoundary = IfcInternalOrExternalEnum::readStepData( args[8] );
		}
		void IfcRelSpaceBoundary::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcRelConnects::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcRelSpaceBoundary> ptr_self = dynamic_pointer_cast<IfcRelSpaceBoundary>( ptr_self_entity );
			if( !ptr_self ) { throw Ifc4Exception( "IfcRelSpaceBoundary::setInverseCounterparts: type mismatch" ); }
			if( m_RelatedBuildingElement )
			{
				m_RelatedBuildingElement->m_ProvidesBoundaries_inverse.push_back( ptr_self );
			}
			shared_ptr<IfcExternalSpatialElement>  RelatingSpace_IfcExternalSpatialElement = dynamic_pointer_cast<IfcExternalSpatialElement>( m_RelatingSpace );
			if( RelatingSpace_IfcExternalSpatialElement )
			{
				RelatingSpace_IfcExternalSpatialElement->m_BoundedBy_inverse.push_back( ptr_self );
			}
			shared_ptr<IfcSpace>  RelatingSpace_IfcSpace = dynamic_pointer_cast<IfcSpace>( m_RelatingSpace );
			if( RelatingSpace_IfcSpace )
			{
				RelatingSpace_IfcSpace->m_BoundedBy_inverse.push_back( ptr_self );
			}
		}
		void IfcRelSpaceBoundary::unlinkSelf()
		{
			IfcRelConnects::unlinkSelf();
			if( m_RelatedBuildingElement )
			{
				std::vector<weak_ptr<IfcRelSpaceBoundary> >& ProvidesBoundaries_inverse = m_RelatedBuildingElement->m_ProvidesBoundaries_inverse;
				std::vector<weak_ptr<IfcRelSpaceBoundary> >::iterator it_ProvidesBoundaries_inverse;
				for( it_ProvidesBoundaries_inverse = ProvidesBoundaries_inverse.begin(); it_ProvidesBoundaries_inverse != ProvidesBoundaries_inverse.end(); ++it_ProvidesBoundaries_inverse)
				{
					shared_ptr<IfcRelSpaceBoundary> self_candidate( *it_ProvidesBoundaries_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						ProvidesBoundaries_inverse.erase( it_ProvidesBoundaries_inverse );
						break;
					}
				}
			}
			shared_ptr<IfcExternalSpatialElement>  RelatingSpace_IfcExternalSpatialElement = dynamic_pointer_cast<IfcExternalSpatialElement>( m_RelatingSpace );
			if( RelatingSpace_IfcExternalSpatialElement )
			{
				std::vector<weak_ptr<IfcRelSpaceBoundary> >& BoundedBy_inverse = RelatingSpace_IfcExternalSpatialElement->m_BoundedBy_inverse;
				std::vector<weak_ptr<IfcRelSpaceBoundary> >::iterator it_BoundedBy_inverse;
				for( it_BoundedBy_inverse = BoundedBy_inverse.begin(); it_BoundedBy_inverse != BoundedBy_inverse.end(); ++it_BoundedBy_inverse)
				{
					shared_ptr<IfcRelSpaceBoundary> self_candidate( *it_BoundedBy_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						BoundedBy_inverse.erase( it_BoundedBy_inverse );
						break;
					}
				}
			}
			shared_ptr<IfcSpace>  RelatingSpace_IfcSpace = dynamic_pointer_cast<IfcSpace>( m_RelatingSpace );
			if( RelatingSpace_IfcSpace )
			{
				std::vector<weak_ptr<IfcRelSpaceBoundary> >& BoundedBy_inverse = RelatingSpace_IfcSpace->m_BoundedBy_inverse;
				std::vector<weak_ptr<IfcRelSpaceBoundary> >::iterator it_BoundedBy_inverse;
				for( it_BoundedBy_inverse = BoundedBy_inverse.begin(); it_BoundedBy_inverse != BoundedBy_inverse.end(); ++it_BoundedBy_inverse)
				{
					shared_ptr<IfcRelSpaceBoundary> self_candidate( *it_BoundedBy_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						BoundedBy_inverse.erase( it_BoundedBy_inverse );
						break;
					}
				}
			}
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
