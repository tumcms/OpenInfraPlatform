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
#include "../../model/shared_ptr.h"
#include "../../model/IfcBridgeObject.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// TYPE IfcLaborResourceTypeEnum = ENUMERATION OF	(ADMINISTRATION	,CARPENTRY	,CLEANING	,CONCRETE	,DRYWALL	,ELECTRIC	,FINISHING	,FLOORING	,GENERAL	,HVAC	,LANDSCAPING	,MASONRY	,PAINTING	,PAVING	,PLUMBING	,ROOFING	,SITEGRADING	,STEELWORK	,SURVEYING	,USERDEFINED	,NOTDEFINED);
		class IfcLaborResourceTypeEnum : public IfcBridgeAbstractEnum, public IfcBridgeType
		{
		public:
			enum IfcLaborResourceTypeEnumEnum
			{
				ENUM_ADMINISTRATION,
				ENUM_CARPENTRY,
				ENUM_CLEANING,
				ENUM_CONCRETE,
				ENUM_DRYWALL,
				ENUM_ELECTRIC,
				ENUM_FINISHING,
				ENUM_FLOORING,
				ENUM_GENERAL,
				ENUM_HVAC,
				ENUM_LANDSCAPING,
				ENUM_MASONRY,
				ENUM_PAINTING,
				ENUM_PAVING,
				ENUM_PLUMBING,
				ENUM_ROOFING,
				ENUM_SITEGRADING,
				ENUM_STEELWORK,
				ENUM_SURVEYING,
				ENUM_USERDEFINED,
				ENUM_NOTDEFINED
			};

			IfcLaborResourceTypeEnum();
			IfcLaborResourceTypeEnum( IfcLaborResourceTypeEnumEnum e ) { m_enum = e; }
			~IfcLaborResourceTypeEnum();
			virtual const char* classname() const { return "IfcLaborResourceTypeEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcLaborResourceTypeEnum> readStepData( std::string& arg );
			IfcLaborResourceTypeEnumEnum m_enum;
		};
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform

