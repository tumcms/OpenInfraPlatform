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
#include <map>
#include "OpenInfraPlatform/IfcRoad/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcRoad/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcRoad/model/shared_ptr.h"
#include "OpenInfraPlatform/IfcRoad/model/IfcRoadException.h"
#include "include/IfcExternalSpatialElementTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// TYPE IfcExternalSpatialElementTypeEnum 
		IfcExternalSpatialElementTypeEnum::IfcExternalSpatialElementTypeEnum() {}
		IfcExternalSpatialElementTypeEnum::~IfcExternalSpatialElementTypeEnum() {}
		void IfcExternalSpatialElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCEXTERNALSPATIALELEMENTTYPEENUM("; }
			if( m_enum == ENUM_EXTERNAL )
			{
				stream << ".EXTERNAL.";
			}
			else if( m_enum == ENUM_EXTERNAL_EARTH )
			{
				stream << ".EXTERNAL_EARTH.";
			}
			else if( m_enum == ENUM_EXTERNAL_WATER )
			{
				stream << ".EXTERNAL_WATER.";
			}
			else if( m_enum == ENUM_EXTERNAL_FIRE )
			{
				stream << ".EXTERNAL_FIRE.";
			}
			else if( m_enum == ENUM_USERDEFINED )
			{
				stream << ".USERDEFINED.";
			}
			else if( m_enum == ENUM_NOTDEFIEND )
			{
				stream << ".NOTDEFIEND.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcExternalSpatialElementTypeEnum> IfcExternalSpatialElementTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcExternalSpatialElementTypeEnum>(); }
			shared_ptr<IfcExternalSpatialElementTypeEnum> type_object( new IfcExternalSpatialElementTypeEnum() );
			if( _stricmp( arg.c_str(), ".EXTERNAL." ) == 0 )
			{
				type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL;
			}
			else if( _stricmp( arg.c_str(), ".EXTERNAL_EARTH." ) == 0 )
			{
				type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL_EARTH;
			}
			else if( _stricmp( arg.c_str(), ".EXTERNAL_WATER." ) == 0 )
			{
				type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL_WATER;
			}
			else if( _stricmp( arg.c_str(), ".EXTERNAL_FIRE." ) == 0 )
			{
				type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL_FIRE;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFIEND." ) == 0 )
			{
				type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_NOTDEFIEND;
			}
			return type_object;
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
