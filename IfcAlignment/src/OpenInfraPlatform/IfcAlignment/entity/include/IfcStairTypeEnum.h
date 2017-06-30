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
#include "OpenInfraPlatform/IfcAlignment/model/shared_ptr.h"
#include "OpenInfraPlatform/IfcAlignment/model/IfcAlignmentP6Object.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// TYPE IfcStairTypeEnum = ENUMERATION OF	(STRAIGHT_RUN_STAIR	,TWO_STRAIGHT_RUN_STAIR	,QUARTER_WINDING_STAIR	,QUARTER_TURN_STAIR	,HALF_WINDING_STAIR	,HALF_TURN_STAIR	,TWO_QUARTER_WINDING_STAIR	,TWO_QUARTER_TURN_STAIR	,THREE_QUARTER_WINDING_STAIR	,THREE_QUARTER_TURN_STAIR	,SPIRAL_STAIR	,DOUBLE_RETURN_STAIR	,CURVED_RUN_STAIR	,TWO_CURVED_RUN_STAIR	,USERDEFINED	,NOTDEFINED);
		class IfcStairTypeEnum : public IfcAlignmentP6AbstractEnum, public IfcAlignmentP6Type
		{
		public:
			enum IfcStairTypeEnumEnum
			{
				ENUM_STRAIGHT_RUN_STAIR,
				ENUM_TWO_STRAIGHT_RUN_STAIR,
				ENUM_QUARTER_WINDING_STAIR,
				ENUM_QUARTER_TURN_STAIR,
				ENUM_HALF_WINDING_STAIR,
				ENUM_HALF_TURN_STAIR,
				ENUM_TWO_QUARTER_WINDING_STAIR,
				ENUM_TWO_QUARTER_TURN_STAIR,
				ENUM_THREE_QUARTER_WINDING_STAIR,
				ENUM_THREE_QUARTER_TURN_STAIR,
				ENUM_SPIRAL_STAIR,
				ENUM_DOUBLE_RETURN_STAIR,
				ENUM_CURVED_RUN_STAIR,
				ENUM_TWO_CURVED_RUN_STAIR,
				ENUM_USERDEFINED,
				ENUM_NOTDEFINED
			};

			IfcStairTypeEnum();
			IfcStairTypeEnum( IfcStairTypeEnumEnum e ) { m_enum = e; }
			~IfcStairTypeEnum();
			virtual const char* classname() const { return "IfcStairTypeEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcStairTypeEnum> readStepData( std::string& arg );
			IfcStairTypeEnumEnum m_enum;
		};
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform

