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
#include "include/IfcControllerTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// TYPE IfcControllerTypeEnum 
		IfcControllerTypeEnum::IfcControllerTypeEnum() {}
		IfcControllerTypeEnum::~IfcControllerTypeEnum() {}
		void IfcControllerTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCCONTROLLERTYPEENUM("; }
			if( m_enum == ENUM_FLOATING )
			{
				stream << ".FLOATING.";
			}
			else if( m_enum == ENUM_PROGRAMMABLE )
			{
				stream << ".PROGRAMMABLE.";
			}
			else if( m_enum == ENUM_PROPORTIONAL )
			{
				stream << ".PROPORTIONAL.";
			}
			else if( m_enum == ENUM_MULTIPOSITION )
			{
				stream << ".MULTIPOSITION.";
			}
			else if( m_enum == ENUM_TWOPOSITION )
			{
				stream << ".TWOPOSITION.";
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
		shared_ptr<IfcControllerTypeEnum> IfcControllerTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcControllerTypeEnum>(); }
			shared_ptr<IfcControllerTypeEnum> type_object( new IfcControllerTypeEnum() );
			if( _stricmp( arg.c_str(), ".FLOATING." ) == 0 )
			{
				type_object->m_enum = IfcControllerTypeEnum::ENUM_FLOATING;
			}
			else if( _stricmp( arg.c_str(), ".PROGRAMMABLE." ) == 0 )
			{
				type_object->m_enum = IfcControllerTypeEnum::ENUM_PROGRAMMABLE;
			}
			else if( _stricmp( arg.c_str(), ".PROPORTIONAL." ) == 0 )
			{
				type_object->m_enum = IfcControllerTypeEnum::ENUM_PROPORTIONAL;
			}
			else if( _stricmp( arg.c_str(), ".MULTIPOSITION." ) == 0 )
			{
				type_object->m_enum = IfcControllerTypeEnum::ENUM_MULTIPOSITION;
			}
			else if( _stricmp( arg.c_str(), ".TWOPOSITION." ) == 0 )
			{
				type_object->m_enum = IfcControllerTypeEnum::ENUM_TWOPOSITION;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcControllerTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcControllerTypeEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
