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

#include "OpenInfraPlatform/IfcRoad/model/IfcRoadException.h"
#include "OpenInfraPlatform/IfcRoad/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcRoad/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcRoad/IfcRoadEntityEnums.h"
#include "include/IfcClassification.h"
#include "include/IfcClassificationReference.h"
#include "include/IfcClassificationSelect.h"
#include "include/IfcDefinitionSelect.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcRelAssociatesClassification.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcRelAssociatesClassification 
		IfcRelAssociatesClassification::IfcRelAssociatesClassification() { m_entity_enum = IFCRELASSOCIATESCLASSIFICATION; }
		IfcRelAssociatesClassification::IfcRelAssociatesClassification( int id ) { m_id = id; m_entity_enum = IFCRELASSOCIATESCLASSIFICATION; }
		IfcRelAssociatesClassification::~IfcRelAssociatesClassification() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRelAssociatesClassification::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcRelAssociatesClassification> other = dynamic_pointer_cast<IfcRelAssociatesClassification>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatedObjects = other->m_RelatedObjects;
			m_RelatingClassification = other->m_RelatingClassification;
		}
		void IfcRelAssociatesClassification::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRELASSOCIATESCLASSIFICATION" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeTypeList( stream, m_RelatedObjects, true );
			stream << ",";
			if( m_RelatingClassification ) { m_RelatingClassification->getStepParameter( stream, true ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcRelAssociatesClassification::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRelAssociatesClassification::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelAssociatesClassification, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcRelAssociatesClassification, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			readSelectList( args[4], m_RelatedObjects, map );
			m_RelatingClassification = IfcClassificationSelect::readStepData( args[5], map );
		}
		void IfcRelAssociatesClassification::setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self_entity )
		{
			IfcRelAssociates::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcRelAssociatesClassification> ptr_self = dynamic_pointer_cast<IfcRelAssociatesClassification>( ptr_self_entity );
			if( !ptr_self ) { throw IfcRoadException( "IfcRelAssociatesClassification::setInverseCounterparts: type mismatch" ); }
			shared_ptr<IfcClassification>  RelatingClassification_IfcClassification = dynamic_pointer_cast<IfcClassification>( m_RelatingClassification );
			if( RelatingClassification_IfcClassification )
			{
				RelatingClassification_IfcClassification->m_ClassificationForObjects_inverse.push_back( ptr_self );
			}
			shared_ptr<IfcClassificationReference>  RelatingClassification_IfcClassificationReference = dynamic_pointer_cast<IfcClassificationReference>( m_RelatingClassification );
			if( RelatingClassification_IfcClassificationReference )
			{
				RelatingClassification_IfcClassificationReference->m_ClassificationRefForObjects_inverse.push_back( ptr_self );
			}
		}
		void IfcRelAssociatesClassification::unlinkSelf()
		{
			IfcRelAssociates::unlinkSelf();
			shared_ptr<IfcClassification>  RelatingClassification_IfcClassification = dynamic_pointer_cast<IfcClassification>( m_RelatingClassification );
			if( RelatingClassification_IfcClassification )
			{
				std::vector<weak_ptr<IfcRelAssociatesClassification> >& ClassificationForObjects_inverse = RelatingClassification_IfcClassification->m_ClassificationForObjects_inverse;
				std::vector<weak_ptr<IfcRelAssociatesClassification> >::iterator it_ClassificationForObjects_inverse;
				for( it_ClassificationForObjects_inverse = ClassificationForObjects_inverse.begin(); it_ClassificationForObjects_inverse != ClassificationForObjects_inverse.end(); ++it_ClassificationForObjects_inverse)
				{
					shared_ptr<IfcRelAssociatesClassification> self_candidate( *it_ClassificationForObjects_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						ClassificationForObjects_inverse.erase( it_ClassificationForObjects_inverse );
						break;
					}
				}
			}
			shared_ptr<IfcClassificationReference>  RelatingClassification_IfcClassificationReference = dynamic_pointer_cast<IfcClassificationReference>( m_RelatingClassification );
			if( RelatingClassification_IfcClassificationReference )
			{
				std::vector<weak_ptr<IfcRelAssociatesClassification> >& ClassificationRefForObjects_inverse = RelatingClassification_IfcClassificationReference->m_ClassificationRefForObjects_inverse;
				std::vector<weak_ptr<IfcRelAssociatesClassification> >::iterator it_ClassificationRefForObjects_inverse;
				for( it_ClassificationRefForObjects_inverse = ClassificationRefForObjects_inverse.begin(); it_ClassificationRefForObjects_inverse != ClassificationRefForObjects_inverse.end(); ++it_ClassificationRefForObjects_inverse)
				{
					shared_ptr<IfcRelAssociatesClassification> self_candidate( *it_ClassificationRefForObjects_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						ClassificationRefForObjects_inverse.erase( it_ClassificationRefForObjects_inverse );
						break;
					}
				}
			}
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
