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
#include "include/IfcPresentationStyleSelect.h"
#include "include/IfcNullStyle.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// TYPE IfcNullStyle 
		IfcNullStyle::IfcNullStyle() {}
		IfcNullStyle::~IfcNullStyle() {}
		void IfcNullStyle::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCNULLSTYLE("; }
			if( m_enum == ENUM_ENUM_NULL )
			{
				stream << ".ENUM_NULL.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcNullStyle> IfcNullStyle::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcNullStyle>(); }
			shared_ptr<IfcNullStyle> type_object( new IfcNullStyle() );
			if( _stricmp( arg.c_str(), ".ENUM_NULL." ) == 0 )
			{
				type_object->m_enum = IfcNullStyle::ENUM_ENUM_NULL;
			}
			return type_object;
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
