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
#include "include/IfcLocalPlacement.h"
#include "include/IfcProduct.h"
#include "include/IfcReferencePlacement.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// ENTITY IfcReferencePlacement 
		IfcReferencePlacement::IfcReferencePlacement() { m_entity_enum = IFCREFERENCEPLACEMENT; }
		IfcReferencePlacement::IfcReferencePlacement( int id ) { m_id = id; m_entity_enum = IFCREFERENCEPLACEMENT; }
		IfcReferencePlacement::~IfcReferencePlacement() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcReferencePlacement::setEntity( shared_ptr<IfcBridgeEntity> other_entity )
		{
			shared_ptr<IfcReferencePlacement> other = dynamic_pointer_cast<IfcReferencePlacement>(other_entity);
			if( !other) { return; }
		}
		void IfcReferencePlacement::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCREFERENCEPLACEMENT" << "(";
			stream << ");";
		}
		void IfcReferencePlacement::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcReferencePlacement::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map )
		{
		}
		void IfcReferencePlacement::setInverseCounterparts( shared_ptr<IfcBridgeEntity> ptr_self_entity )
		{
			IfcObjectPlacement::setInverseCounterparts( ptr_self_entity );
		}
		void IfcReferencePlacement::unlinkSelf()
		{
			IfcObjectPlacement::unlinkSelf();
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
