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
#include "include/IfcElectricDistributionBoardTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// TYPE IfcElectricDistributionBoardTypeEnum 
		IfcElectricDistributionBoardTypeEnum::IfcElectricDistributionBoardTypeEnum() {}
		IfcElectricDistributionBoardTypeEnum::~IfcElectricDistributionBoardTypeEnum() {}
		void IfcElectricDistributionBoardTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCELECTRICDISTRIBUTIONBOARDTYPEENUM("; }
			if( m_enum == ENUM_CONSUMERUNIT )
			{
				stream << ".CONSUMERUNIT.";
			}
			else if( m_enum == ENUM_DISTRIBUTIONBOARD )
			{
				stream << ".DISTRIBUTIONBOARD.";
			}
			else if( m_enum == ENUM_MOTORCONTROLCENTRE )
			{
				stream << ".MOTORCONTROLCENTRE.";
			}
			else if( m_enum == ENUM_SWITCHBOARD )
			{
				stream << ".SWITCHBOARD.";
			}
			else if( m_enum == ENUM_USERDEFINED )
			{
				stream << ".USERDEFINED.";
			}
			else if( m_enum == ENUM_NOTDEFINED )
			{
				stream << ".NOTDEFINED.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcElectricDistributionBoardTypeEnum> IfcElectricDistributionBoardTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcElectricDistributionBoardTypeEnum>(); }
			shared_ptr<IfcElectricDistributionBoardTypeEnum> type_object( new IfcElectricDistributionBoardTypeEnum() );
			if( _stricmp( arg.c_str(), ".CONSUMERUNIT." ) == 0 )
			{
				type_object->m_enum = IfcElectricDistributionBoardTypeEnum::ENUM_CONSUMERUNIT;
			}
			else if( _stricmp( arg.c_str(), ".DISTRIBUTIONBOARD." ) == 0 )
			{
				type_object->m_enum = IfcElectricDistributionBoardTypeEnum::ENUM_DISTRIBUTIONBOARD;
			}
			else if( _stricmp( arg.c_str(), ".MOTORCONTROLCENTRE." ) == 0 )
			{
				type_object->m_enum = IfcElectricDistributionBoardTypeEnum::ENUM_MOTORCONTROLCENTRE;
			}
			else if( _stricmp( arg.c_str(), ".SWITCHBOARD." ) == 0 )
			{
				type_object->m_enum = IfcElectricDistributionBoardTypeEnum::ENUM_SWITCHBOARD;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcElectricDistributionBoardTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcElectricDistributionBoardTypeEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
