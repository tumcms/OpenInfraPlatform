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
		// TYPE IfcCompressorTypeEnum = ENUMERATION OF	(DYNAMIC	,RECIPROCATING	,ROTARY	,SCROLL	,TROCHOIDAL	,SINGLESTAGE	,BOOSTER	,OPENTYPE	,HERMETIC	,SEMIHERMETIC	,WELDEDSHELLHERMETIC	,ROLLINGPISTON	,ROTARYVANE	,SINGLESCREW	,TWINSCREW	,USERDEFINED	,NOTDEFINED);
		class IfcCompressorTypeEnum : public IfcRoadAbstractEnum, public IfcRoadType
		{
		public:
			enum IfcCompressorTypeEnumEnum
			{
				ENUM_DYNAMIC,
				ENUM_RECIPROCATING,
				ENUM_ROTARY,
				ENUM_SCROLL,
				ENUM_TROCHOIDAL,
				ENUM_SINGLESTAGE,
				ENUM_BOOSTER,
				ENUM_OPENTYPE,
				ENUM_HERMETIC,
				ENUM_SEMIHERMETIC,
				ENUM_WELDEDSHELLHERMETIC,
				ENUM_ROLLINGPISTON,
				ENUM_ROTARYVANE,
				ENUM_SINGLESCREW,
				ENUM_TWINSCREW,
				ENUM_USERDEFINED,
				ENUM_NOTDEFINED
			};

			IfcCompressorTypeEnum();
			IfcCompressorTypeEnum( IfcCompressorTypeEnumEnum e ) { m_enum = e; }
			~IfcCompressorTypeEnum();
			virtual const char* classname() const { return "IfcCompressorTypeEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcCompressorTypeEnum> readStepData( std::string& arg );
			IfcCompressorTypeEnumEnum m_enum;
		};
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform

