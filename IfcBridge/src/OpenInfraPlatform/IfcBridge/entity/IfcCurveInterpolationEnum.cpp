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
#include "include/IfcCurveInterpolationEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// TYPE IfcCurveInterpolationEnum 
		IfcCurveInterpolationEnum::IfcCurveInterpolationEnum() {}
		IfcCurveInterpolationEnum::~IfcCurveInterpolationEnum() {}
		void IfcCurveInterpolationEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCCURVEINTERPOLATIONENUM("; }
			if( m_enum == ENUM_LINEAR )
			{
				stream << ".LINEAR.";
			}
			else if( m_enum == ENUM_LOG_LINEAR )
			{
				stream << ".LOG_LINEAR.";
			}
			else if( m_enum == ENUM_LOG_LOG )
			{
				stream << ".LOG_LOG.";
			}
			else if( m_enum == ENUM_NOTDEFINED )
			{
				stream << ".NOTDEFINED.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcCurveInterpolationEnum> IfcCurveInterpolationEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcCurveInterpolationEnum>(); }
			shared_ptr<IfcCurveInterpolationEnum> type_object( new IfcCurveInterpolationEnum() );
			if( _stricmp( arg.c_str(), ".LINEAR." ) == 0 )
			{
				type_object->m_enum = IfcCurveInterpolationEnum::ENUM_LINEAR;
			}
			else if( _stricmp( arg.c_str(), ".LOG_LINEAR." ) == 0 )
			{
				type_object->m_enum = IfcCurveInterpolationEnum::ENUM_LOG_LINEAR;
			}
			else if( _stricmp( arg.c_str(), ".LOG_LOG." ) == 0 )
			{
				type_object->m_enum = IfcCurveInterpolationEnum::ENUM_LOG_LOG;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcCurveInterpolationEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
