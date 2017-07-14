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
#include "../model/IfcTunnelException.h"
#include "include/IfcLogicalOperatorEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// TYPE IfcLogicalOperatorEnum 
		IfcLogicalOperatorEnum::IfcLogicalOperatorEnum() {}
		IfcLogicalOperatorEnum::~IfcLogicalOperatorEnum() {}
		void IfcLogicalOperatorEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCLOGICALOPERATORENUM("; }
			if( m_enum == ENUM_LOGICALAND )
			{
				stream << ".LOGICALAND.";
			}
			else if( m_enum == ENUM_LOGICALOR )
			{
				stream << ".LOGICALOR.";
			}
			else if( m_enum == ENUM_LOGICALXOR )
			{
				stream << ".LOGICALXOR.";
			}
			else if( m_enum == ENUM_LOGICALNOTAND )
			{
				stream << ".LOGICALNOTAND.";
			}
			else if( m_enum == ENUM_LOGICALNOTOR )
			{
				stream << ".LOGICALNOTOR.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcLogicalOperatorEnum> IfcLogicalOperatorEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcLogicalOperatorEnum>(); }
			shared_ptr<IfcLogicalOperatorEnum> type_object( new IfcLogicalOperatorEnum() );
			if( _stricmp( arg.c_str(), ".LOGICALAND." ) == 0 )
			{
				type_object->m_enum = IfcLogicalOperatorEnum::ENUM_LOGICALAND;
			}
			else if( _stricmp( arg.c_str(), ".LOGICALOR." ) == 0 )
			{
				type_object->m_enum = IfcLogicalOperatorEnum::ENUM_LOGICALOR;
			}
			else if( _stricmp( arg.c_str(), ".LOGICALXOR." ) == 0 )
			{
				type_object->m_enum = IfcLogicalOperatorEnum::ENUM_LOGICALXOR;
			}
			else if( _stricmp( arg.c_str(), ".LOGICALNOTAND." ) == 0 )
			{
				type_object->m_enum = IfcLogicalOperatorEnum::ENUM_LOGICALNOTAND;
			}
			else if( _stricmp( arg.c_str(), ".LOGICALNOTOR." ) == 0 )
			{
				type_object->m_enum = IfcLogicalOperatorEnum::ENUM_LOGICALNOTOR;
			}
			return type_object;
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
