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
#include "include/IfcStateEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// TYPE IfcStateEnum 
		IfcStateEnum::IfcStateEnum() {}
		IfcStateEnum::~IfcStateEnum() {}
		void IfcStateEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCSTATEENUM("; }
			if( m_enum == ENUM_READWRITE )
			{
				stream << ".READWRITE.";
			}
			else if( m_enum == ENUM_READONLY )
			{
				stream << ".READONLY.";
			}
			else if( m_enum == ENUM_LOCKED )
			{
				stream << ".LOCKED.";
			}
			else if( m_enum == ENUM_READWRITELOCKED )
			{
				stream << ".READWRITELOCKED.";
			}
			else if( m_enum == ENUM_READONLYLOCKED )
			{
				stream << ".READONLYLOCKED.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcStateEnum> IfcStateEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcStateEnum>(); }
			shared_ptr<IfcStateEnum> type_object( new IfcStateEnum() );
			if( _stricmp( arg.c_str(), ".READWRITE." ) == 0 )
			{
				type_object->m_enum = IfcStateEnum::ENUM_READWRITE;
			}
			else if( _stricmp( arg.c_str(), ".READONLY." ) == 0 )
			{
				type_object->m_enum = IfcStateEnum::ENUM_READONLY;
			}
			else if( _stricmp( arg.c_str(), ".LOCKED." ) == 0 )
			{
				type_object->m_enum = IfcStateEnum::ENUM_LOCKED;
			}
			else if( _stricmp( arg.c_str(), ".READWRITELOCKED." ) == 0 )
			{
				type_object->m_enum = IfcStateEnum::ENUM_READWRITELOCKED;
			}
			else if( _stricmp( arg.c_str(), ".READONLYLOCKED." ) == 0 )
			{
				type_object->m_enum = IfcStateEnum::ENUM_READONLYLOCKED;
			}
			return type_object;
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
