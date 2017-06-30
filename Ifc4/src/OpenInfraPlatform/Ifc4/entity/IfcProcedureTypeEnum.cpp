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
#include "include/IfcProcedureTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// TYPE IfcProcedureTypeEnum 
		IfcProcedureTypeEnum::IfcProcedureTypeEnum() {}
		IfcProcedureTypeEnum::~IfcProcedureTypeEnum() {}
		void IfcProcedureTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCPROCEDURETYPEENUM("; }
			if( m_enum == ENUM_ADVICE_CAUTION )
			{
				stream << ".ADVICE_CAUTION.";
			}
			else if( m_enum == ENUM_ADVICE_NOTE )
			{
				stream << ".ADVICE_NOTE.";
			}
			else if( m_enum == ENUM_ADVICE_WARNING )
			{
				stream << ".ADVICE_WARNING.";
			}
			else if( m_enum == ENUM_CALIBRATION )
			{
				stream << ".CALIBRATION.";
			}
			else if( m_enum == ENUM_DIAGNOSTIC )
			{
				stream << ".DIAGNOSTIC.";
			}
			else if( m_enum == ENUM_SHUTDOWN )
			{
				stream << ".SHUTDOWN.";
			}
			else if( m_enum == ENUM_STARTUP )
			{
				stream << ".STARTUP.";
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
		shared_ptr<IfcProcedureTypeEnum> IfcProcedureTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcProcedureTypeEnum>(); }
			shared_ptr<IfcProcedureTypeEnum> type_object( new IfcProcedureTypeEnum() );
			if( _stricmp( arg.c_str(), ".ADVICE_CAUTION." ) == 0 )
			{
				type_object->m_enum = IfcProcedureTypeEnum::ENUM_ADVICE_CAUTION;
			}
			else if( _stricmp( arg.c_str(), ".ADVICE_NOTE." ) == 0 )
			{
				type_object->m_enum = IfcProcedureTypeEnum::ENUM_ADVICE_NOTE;
			}
			else if( _stricmp( arg.c_str(), ".ADVICE_WARNING." ) == 0 )
			{
				type_object->m_enum = IfcProcedureTypeEnum::ENUM_ADVICE_WARNING;
			}
			else if( _stricmp( arg.c_str(), ".CALIBRATION." ) == 0 )
			{
				type_object->m_enum = IfcProcedureTypeEnum::ENUM_CALIBRATION;
			}
			else if( _stricmp( arg.c_str(), ".DIAGNOSTIC." ) == 0 )
			{
				type_object->m_enum = IfcProcedureTypeEnum::ENUM_DIAGNOSTIC;
			}
			else if( _stricmp( arg.c_str(), ".SHUTDOWN." ) == 0 )
			{
				type_object->m_enum = IfcProcedureTypeEnum::ENUM_SHUTDOWN;
			}
			else if( _stricmp( arg.c_str(), ".STARTUP." ) == 0 )
			{
				type_object->m_enum = IfcProcedureTypeEnum::ENUM_STARTUP;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcProcedureTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcProcedureTypeEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
