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
#include "include/IfcSlabTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// TYPE IfcSlabTypeEnum 
		IfcSlabTypeEnum::IfcSlabTypeEnum() {}
		IfcSlabTypeEnum::~IfcSlabTypeEnum() {}
		void IfcSlabTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCSLABTYPEENUM("; }
			if( m_enum == ENUM_FLOOR )
			{
				stream << ".FLOOR.";
			}
			else if( m_enum == ENUM_ROOF )
			{
				stream << ".ROOF.";
			}
			else if( m_enum == ENUM_LANDING )
			{
				stream << ".LANDING.";
			}
			else if( m_enum == ENUM_BASESLAB )
			{
				stream << ".BASESLAB.";
			}
			else if( m_enum == ENUM_USERDEFINED )
			{
				stream << ".USERDEFINED.";
			}
			else if( m_enum == ENUM_NOTDEFINED )
			{
				stream << ".NOTDEFINED.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcSlabTypeEnum> IfcSlabTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcSlabTypeEnum>(); }
			shared_ptr<IfcSlabTypeEnum> type_object( new IfcSlabTypeEnum() );
			if( _stricmp( arg.c_str(), ".FLOOR." ) == 0 )
			{
				type_object->m_enum = IfcSlabTypeEnum::ENUM_FLOOR;
			}
			else if( _stricmp( arg.c_str(), ".ROOF." ) == 0 )
			{
				type_object->m_enum = IfcSlabTypeEnum::ENUM_ROOF;
			}
			else if( _stricmp( arg.c_str(), ".LANDING." ) == 0 )
			{
				type_object->m_enum = IfcSlabTypeEnum::ENUM_LANDING;
			}
			else if( _stricmp( arg.c_str(), ".BASESLAB." ) == 0 )
			{
				type_object->m_enum = IfcSlabTypeEnum::ENUM_BASESLAB;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcSlabTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcSlabTypeEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
