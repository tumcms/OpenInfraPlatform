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
#include "../../model/IfcTunnelObject.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// TYPE IfcUnitEnum = ENUMERATION OF	(ABSORBEDDOSEUNIT	,AMOUNTOFSUBSTANCEUNIT	,AREAUNIT	,DOSEEQUIVALENTUNIT	,ELECTRICCAPACITANCEUNIT	,ELECTRICCHARGEUNIT	,ELECTRICCONDUCTANCEUNIT	,ELECTRICCURRENTUNIT	,ELECTRICRESISTANCEUNIT	,ELECTRICVOLTAGEUNIT	,ENERGYUNIT	,FORCEUNIT	,FREQUENCYUNIT	,ILLUMINANCEUNIT	,INDUCTANCEUNIT	,LENGTHUNIT	,LUMINOUSFLUXUNIT	,LUMINOUSINTENSITYUNIT	,MAGNETICFLUXDENSITYUNIT	,MAGNETICFLUXUNIT	,MASSUNIT	,PLANEANGLEUNIT	,POWERUNIT	,PRESSUREUNIT	,RADIOACTIVITYUNIT	,SOLIDANGLEUNIT	,THERMODYNAMICTEMPERATUREUNIT	,TIMEUNIT	,VOLUMEUNIT	,USERDEFINED);
		class IfcUnitEnum : public IfcTunnelAbstractEnum, public IfcTunnelType
		{
		public:
			enum IfcUnitEnumEnum
			{
				ENUM_ABSORBEDDOSEUNIT,
				ENUM_AMOUNTOFSUBSTANCEUNIT,
				ENUM_AREAUNIT,
				ENUM_DOSEEQUIVALENTUNIT,
				ENUM_ELECTRICCAPACITANCEUNIT,
				ENUM_ELECTRICCHARGEUNIT,
				ENUM_ELECTRICCONDUCTANCEUNIT,
				ENUM_ELECTRICCURRENTUNIT,
				ENUM_ELECTRICRESISTANCEUNIT,
				ENUM_ELECTRICVOLTAGEUNIT,
				ENUM_ENERGYUNIT,
				ENUM_FORCEUNIT,
				ENUM_FREQUENCYUNIT,
				ENUM_ILLUMINANCEUNIT,
				ENUM_INDUCTANCEUNIT,
				ENUM_LENGTHUNIT,
				ENUM_LUMINOUSFLUXUNIT,
				ENUM_LUMINOUSINTENSITYUNIT,
				ENUM_MAGNETICFLUXDENSITYUNIT,
				ENUM_MAGNETICFLUXUNIT,
				ENUM_MASSUNIT,
				ENUM_PLANEANGLEUNIT,
				ENUM_POWERUNIT,
				ENUM_PRESSUREUNIT,
				ENUM_RADIOACTIVITYUNIT,
				ENUM_SOLIDANGLEUNIT,
				ENUM_THERMODYNAMICTEMPERATUREUNIT,
				ENUM_TIMEUNIT,
				ENUM_VOLUMEUNIT,
				ENUM_USERDEFINED
			};

			IfcUnitEnum();
			IfcUnitEnum( IfcUnitEnumEnum e ) { m_enum = e; }
			~IfcUnitEnum();
			virtual const char* classname() const { return "IfcUnitEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcUnitEnum> readStepData( std::string& arg );
			IfcUnitEnumEnum m_enum;
		};
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform

