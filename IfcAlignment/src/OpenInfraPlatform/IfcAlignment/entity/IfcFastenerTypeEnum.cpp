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
#include "OpenInfraPlatform/IfcAlignment/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcAlignment/model/shared_ptr.h"
#include "OpenInfraPlatform/IfcAlignment/model/IfcAlignmentP6Exception.h"
#include "include/IfcFastenerTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// TYPE IfcFastenerTypeEnum 
		IfcFastenerTypeEnum::IfcFastenerTypeEnum() {}
		IfcFastenerTypeEnum::~IfcFastenerTypeEnum() {}
		void IfcFastenerTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCFASTENERTYPEENUM("; }
			if( m_enum == ENUM_GLUE )
			{
				stream << ".GLUE.";
			}
			else if( m_enum == ENUM_MORTAR )
			{
				stream << ".MORTAR.";
			}
			else if( m_enum == ENUM_WELD )
			{
				stream << ".WELD.";
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
		shared_ptr<IfcFastenerTypeEnum> IfcFastenerTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcFastenerTypeEnum>(); }
			shared_ptr<IfcFastenerTypeEnum> type_object( new IfcFastenerTypeEnum() );
			if( _stricmp( arg.c_str(), ".GLUE." ) == 0 )
			{
				type_object->m_enum = IfcFastenerTypeEnum::ENUM_GLUE;
			}
			else if( _stricmp( arg.c_str(), ".MORTAR." ) == 0 )
			{
				type_object->m_enum = IfcFastenerTypeEnum::ENUM_MORTAR;
			}
			else if( _stricmp( arg.c_str(), ".WELD." ) == 0 )
			{
				type_object->m_enum = IfcFastenerTypeEnum::ENUM_WELD;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcFastenerTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcFastenerTypeEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
