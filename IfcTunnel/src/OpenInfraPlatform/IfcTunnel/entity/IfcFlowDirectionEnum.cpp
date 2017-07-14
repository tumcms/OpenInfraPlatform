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
#include "include/IfcFlowDirectionEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// TYPE IfcFlowDirectionEnum 
		IfcFlowDirectionEnum::IfcFlowDirectionEnum() {}
		IfcFlowDirectionEnum::~IfcFlowDirectionEnum() {}
		void IfcFlowDirectionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCFLOWDIRECTIONENUM("; }
			if( m_enum == ENUM_SOURCE )
			{
				stream << ".SOURCE.";
			}
			else if( m_enum == ENUM_SINK )
			{
				stream << ".SINK.";
			}
			else if( m_enum == ENUM_SOURCEANDSINK )
			{
				stream << ".SOURCEANDSINK.";
			}
			else if( m_enum == ENUM_NOTDEFINED )
			{
				stream << ".NOTDEFINED.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcFlowDirectionEnum> IfcFlowDirectionEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcFlowDirectionEnum>(); }
			shared_ptr<IfcFlowDirectionEnum> type_object( new IfcFlowDirectionEnum() );
			if( _stricmp( arg.c_str(), ".SOURCE." ) == 0 )
			{
				type_object->m_enum = IfcFlowDirectionEnum::ENUM_SOURCE;
			}
			else if( _stricmp( arg.c_str(), ".SINK." ) == 0 )
			{
				type_object->m_enum = IfcFlowDirectionEnum::ENUM_SINK;
			}
			else if( _stricmp( arg.c_str(), ".SOURCEANDSINK." ) == 0 )
			{
				type_object->m_enum = IfcFlowDirectionEnum::ENUM_SOURCEANDSINK;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcFlowDirectionEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
