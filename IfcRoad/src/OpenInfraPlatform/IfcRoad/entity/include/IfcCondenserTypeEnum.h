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
		// TYPE IfcCondenserTypeEnum = ENUMERATION OF	(AIRCOOLED	,EVAPORATIVECOOLED	,WATERCOOLED	,WATERCOOLEDBRAZEDPLATE	,WATERCOOLEDSHELLCOIL	,WATERCOOLEDSHELLTUBE	,WATERCOOLEDTUBEINTUBE	,USERDEFINED	,NOTDEFINED);
		class IfcCondenserTypeEnum : public IfcRoadAbstractEnum, public IfcRoadType
		{
		public:
			enum IfcCondenserTypeEnumEnum
			{
				ENUM_AIRCOOLED,
				ENUM_EVAPORATIVECOOLED,
				ENUM_WATERCOOLED,
				ENUM_WATERCOOLEDBRAZEDPLATE,
				ENUM_WATERCOOLEDSHELLCOIL,
				ENUM_WATERCOOLEDSHELLTUBE,
				ENUM_WATERCOOLEDTUBEINTUBE,
				ENUM_USERDEFINED,
				ENUM_NOTDEFINED
			};

			IfcCondenserTypeEnum();
			IfcCondenserTypeEnum( IfcCondenserTypeEnumEnum e ) { m_enum = e; }
			~IfcCondenserTypeEnum();
			virtual const char* classname() const { return "IfcCondenserTypeEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcCondenserTypeEnum> readStepData( std::string& arg );
			IfcCondenserTypeEnumEnum m_enum;
		};
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform

