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

#include <map>
#include "OpenInfraPlatform/Ifc4/model/shared_ptr.h"
#include "OpenInfraPlatform/Ifc4/model/Ifc4Exception.h"
#include "OpenInfraPlatform/Ifc4/reader/ReaderUtil.h"
#include "include/IfcPropertySetDefinitionSet.h"
#include "include/IfcPropertySetDefinitionSelect.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// TYPE IfcPropertySetDefinitionSelect 
		IfcPropertySetDefinitionSelect::IfcPropertySetDefinitionSelect() {}
		IfcPropertySetDefinitionSelect::~IfcPropertySetDefinitionSelect() {}
		shared_ptr<IfcPropertySetDefinitionSelect> IfcPropertySetDefinitionSelect::readStepData( std::string& arg, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			// Read SELECT TYPE
			if( arg.size() == 0 ){ return shared_ptr<IfcPropertySetDefinitionSelect>(); }
			if( arg[0] == '#' )
			{
				int id=atoi( arg.substr(1,arg.length()-1).c_str() );
				std::map<int,shared_ptr<Ifc4Entity> >::const_iterator it_entity = map.find( id );
				if( it_entity != map.end() )
				{
					shared_ptr<IfcPropertySetDefinitionSelect> type_object = dynamic_pointer_cast<IfcPropertySetDefinitionSelect>(it_entity->second);
					return type_object;
				}
				else
				{
					std::stringstream strs;
					strs << "Object width id " << id << " not found";
					throw Ifc4Exception( strs.str() );
				}
			}
			else if( arg.compare("$")==0 )
			{
				return shared_ptr<IfcPropertySetDefinitionSelect>();
			}
			else if( arg.compare("*")==0 )
			{
				return shared_ptr<IfcPropertySetDefinitionSelect>();
			}
			else
			{
				// inline arguments
				std::string keyword;
				std::string inline_arg;
				tokenizeInlineArgument( arg, keyword, inline_arg );
				if( keyword.compare("IFCPROPERTYSETDEFINITIONSET")== 0 )
				{
					return IfcPropertySetDefinitionSet::readStepData( inline_arg, map );
				}
				std::stringstream strs;
				strs << "unhandled inline argument: " << arg << " in function IFC4::IfcPropertySetDefinitionSelect::readStepData" << std::endl;
				throw Ifc4Exception( strs.str() );
			}
			return shared_ptr<IfcPropertySetDefinitionSelect>();
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
