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
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcLibrarySelect.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcRelAssociatesLibrary.h"
#include "include/IfcRoot.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcRelAssociatesLibrary 
		IfcRelAssociatesLibrary::IfcRelAssociatesLibrary() { m_entity_enum = IFCRELASSOCIATESLIBRARY; }
		IfcRelAssociatesLibrary::IfcRelAssociatesLibrary( int id ) { m_id = id; m_entity_enum = IFCRELASSOCIATESLIBRARY; }
		IfcRelAssociatesLibrary::~IfcRelAssociatesLibrary() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRelAssociatesLibrary::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcRelAssociatesLibrary> other = dynamic_pointer_cast<IfcRelAssociatesLibrary>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatedObjects = other->m_RelatedObjects;
			m_RelatingLibrary = other->m_RelatingLibrary;
		}
		void IfcRelAssociatesLibrary::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRELASSOCIATESLIBRARY" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_RelatedObjects );
			stream << ",";
			if( m_RelatingLibrary ) { m_RelatingLibrary->getStepParameter( stream, true ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcRelAssociatesLibrary::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRelAssociatesLibrary::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelAssociatesLibrary, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcRelAssociatesLibrary, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			readEntityReferenceList( args[4], m_RelatedObjects, map );
			m_RelatingLibrary = IfcLibrarySelect::readStepData( args[5], map );
		}
		void IfcRelAssociatesLibrary::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcRelAssociates::setInverseCounterparts( ptr_self_entity );
		}
		void IfcRelAssociatesLibrary::unlinkSelf()
		{
			IfcRelAssociates::unlinkSelf();
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
