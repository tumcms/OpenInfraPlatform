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
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "../model/shared_ptr.h"
#include "../model/IfcBridgeException.h"
#include "include/IfcPermitTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// TYPE IfcPermitTypeEnum 
		IfcPermitTypeEnum::IfcPermitTypeEnum() {}
		IfcPermitTypeEnum::~IfcPermitTypeEnum() {}
		void IfcPermitTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCPERMITTYPEENUM("; }
			if( m_enum == ENUM_ACCESS )
			{
				stream << ".ACCESS.";
			}
			else if( m_enum == ENUM_BUILDING )
			{
				stream << ".BUILDING.";
			}
			else if( m_enum == ENUM_WORK )
			{
				stream << ".WORK.";
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
		shared_ptr<IfcPermitTypeEnum> IfcPermitTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcPermitTypeEnum>(); }
			shared_ptr<IfcPermitTypeEnum> type_object( new IfcPermitTypeEnum() );
			if( _stricmp( arg.c_str(), ".ACCESS." ) == 0 )
			{
				type_object->m_enum = IfcPermitTypeEnum::ENUM_ACCESS;
			}
			else if( _stricmp( arg.c_str(), ".BUILDING." ) == 0 )
			{
				type_object->m_enum = IfcPermitTypeEnum::ENUM_BUILDING;
			}
			else if( _stricmp( arg.c_str(), ".WORK." ) == 0 )
			{
				type_object->m_enum = IfcPermitTypeEnum::ENUM_WORK;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcPermitTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcPermitTypeEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
