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
		// TYPE IfcPropertySetTemplateTypeEnum = ENUMERATION OF	(PSET_TYPEDRIVENONLY	,PSET_TYPEDRIVENOVERRIDE	,PSET_OCCURRENCEDRIVEN	,PSET_PERFORMANCEDRIVEN	,QTO_TYPEDRIVENONLY	,QTO_TYPEDRIVENOVERRIDE	,QTO_OCCURRENCEDRIVEN	,NOTDEFINED);
		class IfcPropertySetTemplateTypeEnum : public IfcRoadAbstractEnum, public IfcRoadType
		{
		public:
			enum IfcPropertySetTemplateTypeEnumEnum
			{
				ENUM_PSET_TYPEDRIVENONLY,
				ENUM_PSET_TYPEDRIVENOVERRIDE,
				ENUM_PSET_OCCURRENCEDRIVEN,
				ENUM_PSET_PERFORMANCEDRIVEN,
				ENUM_QTO_TYPEDRIVENONLY,
				ENUM_QTO_TYPEDRIVENOVERRIDE,
				ENUM_QTO_OCCURRENCEDRIVEN,
				ENUM_NOTDEFINED
			};

			IfcPropertySetTemplateTypeEnum();
			IfcPropertySetTemplateTypeEnum( IfcPropertySetTemplateTypeEnumEnum e ) { m_enum = e; }
			~IfcPropertySetTemplateTypeEnum();
			virtual const char* classname() const { return "IfcPropertySetTemplateTypeEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcPropertySetTemplateTypeEnum> readStepData( std::string& arg );
			IfcPropertySetTemplateTypeEnumEnum m_enum;
		};
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform

