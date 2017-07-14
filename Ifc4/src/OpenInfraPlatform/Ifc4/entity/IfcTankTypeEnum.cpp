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
#include "OpenInfraPlatform/Ifc4/reader/ReaderUtil.h"
#include "OpenInfraPlatform/Ifc4/writer/WriterUtil.h"
#include "OpenInfraPlatform/Ifc4/model/shared_ptr.h"
#include "OpenInfraPlatform/Ifc4/model/Ifc4Exception.h"
#include "include/IfcTankTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// TYPE IfcTankTypeEnum 
		IfcTankTypeEnum::IfcTankTypeEnum() {}
		IfcTankTypeEnum::~IfcTankTypeEnum() {}
		void IfcTankTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCTANKTYPEENUM("; }
			if( m_enum == ENUM_BASIN )
			{
				stream << ".BASIN.";
			}
			else if( m_enum == ENUM_BREAKPRESSURE )
			{
				stream << ".BREAKPRESSURE.";
			}
			else if( m_enum == ENUM_EXPANSION )
			{
				stream << ".EXPANSION.";
			}
			else if( m_enum == ENUM_FEEDANDEXPANSION )
			{
				stream << ".FEEDANDEXPANSION.";
			}
			else if( m_enum == ENUM_PRESSUREVESSEL )
			{
				stream << ".PRESSUREVESSEL.";
			}
			else if( m_enum == ENUM_STORAGE )
			{
				stream << ".STORAGE.";
			}
			else if( m_enum == ENUM_VESSEL )
			{
				stream << ".VESSEL.";
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
		shared_ptr<IfcTankTypeEnum> IfcTankTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcTankTypeEnum>(); }
			shared_ptr<IfcTankTypeEnum> type_object( new IfcTankTypeEnum() );
			if( _stricmp( arg.c_str(), ".BASIN." ) == 0 )
			{
				type_object->m_enum = IfcTankTypeEnum::ENUM_BASIN;
			}
			else if( _stricmp( arg.c_str(), ".BREAKPRESSURE." ) == 0 )
			{
				type_object->m_enum = IfcTankTypeEnum::ENUM_BREAKPRESSURE;
			}
			else if( _stricmp( arg.c_str(), ".EXPANSION." ) == 0 )
			{
				type_object->m_enum = IfcTankTypeEnum::ENUM_EXPANSION;
			}
			else if( _stricmp( arg.c_str(), ".FEEDANDEXPANSION." ) == 0 )
			{
				type_object->m_enum = IfcTankTypeEnum::ENUM_FEEDANDEXPANSION;
			}
			else if( _stricmp( arg.c_str(), ".PRESSUREVESSEL." ) == 0 )
			{
				type_object->m_enum = IfcTankTypeEnum::ENUM_PRESSUREVESSEL;
			}
			else if( _stricmp( arg.c_str(), ".STORAGE." ) == 0 )
			{
				type_object->m_enum = IfcTankTypeEnum::ENUM_STORAGE;
			}
			else if( _stricmp( arg.c_str(), ".VESSEL." ) == 0 )
			{
				type_object->m_enum = IfcTankTypeEnum::ENUM_VESSEL;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcTankTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcTankTypeEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
