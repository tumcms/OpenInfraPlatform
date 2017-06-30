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
#include "OpenInfraPlatform/IfcAlignment1x1/model/Exception.h"
#include "OpenInfraPlatform/IfcAlignment1x1/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/IfcAlignment1x1EntityEnums.h"
#include "IfcRelAssignsToControl.h"
#include "IfcGloballyUniqueId.h"
#include "IfcOwnerHistory.h"
#include "IfcLabel.h"
#include "IfcText.h"
#include "IfcObjectDefinition.h"
#include "IfcObjectTypeEnum.h"
#include "IfcControl.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcRelAssignsToControl
			IfcRelAssignsToControl::IfcRelAssignsToControl() { m_entity_enum = IFCRELASSIGNSTOCONTROL;}
			IfcRelAssignsToControl::IfcRelAssignsToControl( int id ) { m_id = id; m_entity_enum = IFCRELASSIGNSTOCONTROL;}
			IfcRelAssignsToControl::~IfcRelAssignsToControl() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcRelAssignsToControl::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcRelAssignsToControl> other = std::dynamic_pointer_cast<IfcRelAssignsToControl>(other_entity);
				if( !other) { return; }
				m_GlobalId = other->m_GlobalId;
				m_OwnerHistory = other->m_OwnerHistory;
				m_Name = other->m_Name;
				m_Description = other->m_Description;
				m_RelatedObjects = other->m_RelatedObjects;
				m_RelatedObjectsType = other->m_RelatedObjectsType;
				m_RelatingControl = other->m_RelatingControl;
			}
			void IfcRelAssignsToControl::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCRELASSIGNSTOCONTROL" << "(";
				if( m_GlobalId) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_OwnerHistory) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
				stream << ",";
				if( m_Name) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Description) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				writeEntityList( stream, m_RelatedObjects );
				stream << ",";
				if( m_RelatedObjectsType) { m_RelatedObjectsType->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_RelatingControl) { stream << "#" << m_RelatingControl->getId(); } else { stream << "$"; }
				stream << ");";
			}
			void IfcRelAssignsToControl::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcRelAssignsToControl::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<7 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelAssignsToControl, expecting 7, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<7 ){ std::cout << "Wrong parameter count for entity IfcRelAssignsToControl, expecting 7, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
				readEntityReference( args[1], m_OwnerHistory, map);
				m_Name = IfcLabel::readStepData( args[2] );
				m_Description = IfcText::readStepData( args[3] );
				readEntityReferenceList( args[4], m_RelatedObjects , map);
				m_RelatedObjectsType = IfcObjectTypeEnum::readStepData( args[5] );
				readEntityReference( args[6], m_RelatingControl, map);
			}
			void IfcRelAssignsToControl::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcRelAssigns::setInverseCounterparts(ptr_self_entity);
			}
			void IfcRelAssignsToControl::unlinkSelf()
			{
				IfcRelAssigns::unlinkSelf();
			}
	}
}
