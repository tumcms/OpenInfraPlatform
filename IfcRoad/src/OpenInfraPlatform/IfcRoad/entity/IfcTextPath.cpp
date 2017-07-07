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
#include "include/IfcTextPath.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// TYPE IfcTextPath 
		IfcTextPath::IfcTextPath() {}
		IfcTextPath::~IfcTextPath() {}
		void IfcTextPath::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCTEXTPATH("; }
			if( m_enum == ENUM_LEFT )
			{
				stream << ".LEFT.";
			}
			else if( m_enum == ENUM_RIGHT )
			{
				stream << ".RIGHT.";
			}
			else if( m_enum == ENUM_UP )
			{
				stream << ".UP.";
			}
			else if( m_enum == ENUM_DOWN )
			{
				stream << ".DOWN.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcTextPath> IfcTextPath::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcTextPath>(); }
			shared_ptr<IfcTextPath> type_object( new IfcTextPath() );
			if( _stricmp( arg.c_str(), ".LEFT." ) == 0 )
			{
				type_object->m_enum = IfcTextPath::ENUM_LEFT;
			}
			else if( _stricmp( arg.c_str(), ".RIGHT." ) == 0 )
			{
				type_object->m_enum = IfcTextPath::ENUM_RIGHT;
			}
			else if( _stricmp( arg.c_str(), ".UP." ) == 0 )
			{
				type_object->m_enum = IfcTextPath::ENUM_UP;
			}
			else if( _stricmp( arg.c_str(), ".DOWN." ) == 0 )
			{
				type_object->m_enum = IfcTextPath::ENUM_DOWN;
			}
			return type_object;
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
