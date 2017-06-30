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

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "OpenInfraPlatform/IfcRoad/model/shared_ptr.h"
#include "OpenInfraPlatform/IfcRoad/model/IfcRoadObject.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// TYPE IfcObjectiveEnum = ENUMERATION OF	(CODECOMPLIANCE	,CODEWAIVER	,DESIGNINTENT	,EXTERNAL	,HEALTHANDSAFETY	,MERGECONFLICT	,MODELVIEW	,PARAMETER	,REQUIREMENT	,SPECIFICATION	,TRIGGERCONDITION	,USERDEFINED	,NOTDEFINED);
		class IfcObjectiveEnum : public IfcRoadAbstractEnum, public IfcRoadType
		{
		public:
			enum IfcObjectiveEnumEnum
			{
				ENUM_CODECOMPLIANCE,
				ENUM_CODEWAIVER,
				ENUM_DESIGNINTENT,
				ENUM_EXTERNAL,
				ENUM_HEALTHANDSAFETY,
				ENUM_MERGECONFLICT,
				ENUM_MODELVIEW,
				ENUM_PARAMETER,
				ENUM_REQUIREMENT,
				ENUM_SPECIFICATION,
				ENUM_TRIGGERCONDITION,
				ENUM_USERDEFINED,
				ENUM_NOTDEFINED
			};

			IfcObjectiveEnum();
			IfcObjectiveEnum( IfcObjectiveEnumEnum e ) { m_enum = e; }
			~IfcObjectiveEnum();
			virtual const char* classname() const { return "IfcObjectiveEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcObjectiveEnum> readStepData( std::string& arg );
			IfcObjectiveEnumEnum m_enum;
		};
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform

