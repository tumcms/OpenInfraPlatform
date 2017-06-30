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
#include "include/IfcEventTriggerTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// TYPE IfcEventTriggerTypeEnum 
		IfcEventTriggerTypeEnum::IfcEventTriggerTypeEnum() {}
		IfcEventTriggerTypeEnum::~IfcEventTriggerTypeEnum() {}
		void IfcEventTriggerTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCEVENTTRIGGERTYPEENUM("; }
			if( m_enum == ENUM_EVENTRULE )
			{
				stream << ".EVENTRULE.";
			}
			else if( m_enum == ENUM_EVENTMESSAGE )
			{
				stream << ".EVENTMESSAGE.";
			}
			else if( m_enum == ENUM_EVENTTIME )
			{
				stream << ".EVENTTIME.";
			}
			else if( m_enum == ENUM_EVENTCOMPLEX )
			{
				stream << ".EVENTCOMPLEX.";
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
		shared_ptr<IfcEventTriggerTypeEnum> IfcEventTriggerTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcEventTriggerTypeEnum>(); }
			shared_ptr<IfcEventTriggerTypeEnum> type_object( new IfcEventTriggerTypeEnum() );
			if( _stricmp( arg.c_str(), ".EVENTRULE." ) == 0 )
			{
				type_object->m_enum = IfcEventTriggerTypeEnum::ENUM_EVENTRULE;
			}
			else if( _stricmp( arg.c_str(), ".EVENTMESSAGE." ) == 0 )
			{
				type_object->m_enum = IfcEventTriggerTypeEnum::ENUM_EVENTMESSAGE;
			}
			else if( _stricmp( arg.c_str(), ".EVENTTIME." ) == 0 )
			{
				type_object->m_enum = IfcEventTriggerTypeEnum::ENUM_EVENTTIME;
			}
			else if( _stricmp( arg.c_str(), ".EVENTCOMPLEX." ) == 0 )
			{
				type_object->m_enum = IfcEventTriggerTypeEnum::ENUM_EVENTCOMPLEX;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcEventTriggerTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcEventTriggerTypeEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
