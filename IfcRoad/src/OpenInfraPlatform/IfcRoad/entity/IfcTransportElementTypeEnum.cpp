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
#include "include/IfcTransportElementTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// TYPE IfcTransportElementTypeEnum 
		IfcTransportElementTypeEnum::IfcTransportElementTypeEnum() {}
		IfcTransportElementTypeEnum::~IfcTransportElementTypeEnum() {}
		void IfcTransportElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCTRANSPORTELEMENTTYPEENUM("; }
			if( m_enum == ENUM_ELEVATOR )
			{
				stream << ".ELEVATOR.";
			}
			else if( m_enum == ENUM_ESCALATOR )
			{
				stream << ".ESCALATOR.";
			}
			else if( m_enum == ENUM_MOVINGWALKWAY )
			{
				stream << ".MOVINGWALKWAY.";
			}
			else if( m_enum == ENUM_CRANEWAY )
			{
				stream << ".CRANEWAY.";
			}
			else if( m_enum == ENUM_LIFTINGGEAR )
			{
				stream << ".LIFTINGGEAR.";
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
		shared_ptr<IfcTransportElementTypeEnum> IfcTransportElementTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcTransportElementTypeEnum>(); }
			shared_ptr<IfcTransportElementTypeEnum> type_object( new IfcTransportElementTypeEnum() );
			if( _stricmp( arg.c_str(), ".ELEVATOR." ) == 0 )
			{
				type_object->m_enum = IfcTransportElementTypeEnum::ENUM_ELEVATOR;
			}
			else if( _stricmp( arg.c_str(), ".ESCALATOR." ) == 0 )
			{
				type_object->m_enum = IfcTransportElementTypeEnum::ENUM_ESCALATOR;
			}
			else if( _stricmp( arg.c_str(), ".MOVINGWALKWAY." ) == 0 )
			{
				type_object->m_enum = IfcTransportElementTypeEnum::ENUM_MOVINGWALKWAY;
			}
			else if( _stricmp( arg.c_str(), ".CRANEWAY." ) == 0 )
			{
				type_object->m_enum = IfcTransportElementTypeEnum::ENUM_CRANEWAY;
			}
			else if( _stricmp( arg.c_str(), ".LIFTINGGEAR." ) == 0 )
			{
				type_object->m_enum = IfcTransportElementTypeEnum::ENUM_LIFTINGGEAR;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcTransportElementTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcTransportElementTypeEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
