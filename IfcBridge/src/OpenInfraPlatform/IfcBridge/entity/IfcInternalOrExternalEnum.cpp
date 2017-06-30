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
#include "include/IfcInternalOrExternalEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// TYPE IfcInternalOrExternalEnum 
		IfcInternalOrExternalEnum::IfcInternalOrExternalEnum() {}
		IfcInternalOrExternalEnum::~IfcInternalOrExternalEnum() {}
		void IfcInternalOrExternalEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCINTERNALOREXTERNALENUM("; }
			if( m_enum == ENUM_INTERNAL )
			{
				stream << ".INTERNAL.";
			}
			else if( m_enum == ENUM_EXTERNAL )
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
			else if( m_enum == ENUM_NOTDEFINED )
			{
				stream << ".NOTDEFINED.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcInternalOrExternalEnum> IfcInternalOrExternalEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcInternalOrExternalEnum>(); }
			shared_ptr<IfcInternalOrExternalEnum> type_object( new IfcInternalOrExternalEnum() );
			if( _stricmp( arg.c_str(), ".INTERNAL." ) == 0 )
			{
				type_object->m_enum = IfcInternalOrExternalEnum::ENUM_INTERNAL;
			}
			else if( _stricmp( arg.c_str(), ".EXTERNAL." ) == 0 )
			{
				type_object->m_enum = IfcInternalOrExternalEnum::ENUM_EXTERNAL;
			}
			else if( _stricmp( arg.c_str(), ".EXTERNAL_EARTH." ) == 0 )
			{
				type_object->m_enum = IfcInternalOrExternalEnum::ENUM_EXTERNAL_EARTH;
			}
			else if( _stricmp( arg.c_str(), ".EXTERNAL_WATER." ) == 0 )
			{
				type_object->m_enum = IfcInternalOrExternalEnum::ENUM_EXTERNAL_WATER;
			}
			else if( _stricmp( arg.c_str(), ".EXTERNAL_FIRE." ) == 0 )
			{
				type_object->m_enum = IfcInternalOrExternalEnum::ENUM_EXTERNAL_FIRE;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcInternalOrExternalEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
