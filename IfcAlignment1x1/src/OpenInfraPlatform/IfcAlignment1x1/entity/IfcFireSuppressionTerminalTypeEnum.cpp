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

#include "IfcFireSuppressionTerminalTypeEnum.h"
#include "OpenInfraPlatform/IfcAlignment1x1/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/writer/WriterUtil.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		IfcFireSuppressionTerminalTypeEnum::IfcFireSuppressionTerminalTypeEnum() {}
		IfcFireSuppressionTerminalTypeEnum::IfcFireSuppressionTerminalTypeEnum(IfcFireSuppressionTerminalTypeEnum::IfcFireSuppressionTerminalTypeEnumEnum value) { m_enum = value; }
		IfcFireSuppressionTerminalTypeEnum::~IfcFireSuppressionTerminalTypeEnum() {}
		void IfcFireSuppressionTerminalTypeEnum::getStepParameter(std::stringstream& stream, bool is_select_type) const
			{
				if ( m_enum == IfcFireSuppressionTerminalTypeEnumEnum::ENUM_BREECHINGINLET)
				{
					stream << ".BREECHINGINLET.";
				}
				else if ( m_enum == IfcFireSuppressionTerminalTypeEnumEnum::ENUM_FIREHYDRANT)
				{
					stream << ".FIREHYDRANT.";
				}
				else if ( m_enum == IfcFireSuppressionTerminalTypeEnumEnum::ENUM_HOSEREEL)
				{
					stream << ".HOSEREEL.";
				}
				else if ( m_enum == IfcFireSuppressionTerminalTypeEnumEnum::ENUM_SPRINKLER)
				{
					stream << ".SPRINKLER.";
				}
				else if ( m_enum == IfcFireSuppressionTerminalTypeEnumEnum::ENUM_SPRINKLERDEFLECTOR)
				{
					stream << ".SPRINKLERDEFLECTOR.";
				}
				else if ( m_enum == IfcFireSuppressionTerminalTypeEnumEnum::ENUM_USERDEFINED)
				{
					stream << ".USERDEFINED.";
				}
				else if ( m_enum == IfcFireSuppressionTerminalTypeEnumEnum::ENUM_NOTDEFINED)
				{
					stream << ".NOTDEFINED.";
				}
				if (is_select_type) { stream << ")"; }
			}
			std::shared_ptr<IfcFireSuppressionTerminalTypeEnum> IfcFireSuppressionTerminalTypeEnum::readStepData(const std::string& arg)
			{
				if( arg.compare( "$" ) == 0 ) { return std::shared_ptr<IfcFireSuppressionTerminalTypeEnum>(); }
				std::shared_ptr<IfcFireSuppressionTerminalTypeEnum> type_object(new IfcFireSuppressionTerminalTypeEnum() );
				if ( _stricmp( arg.c_str(), ".BREECHINGINLET.") == 0)
				{
					type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::IfcFireSuppressionTerminalTypeEnumEnum::ENUM_BREECHINGINLET;
				}
				else if ( _stricmp( arg.c_str(), ".FIREHYDRANT.") == 0)
				{
					type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::IfcFireSuppressionTerminalTypeEnumEnum::ENUM_FIREHYDRANT;
				}
				else if ( _stricmp( arg.c_str(), ".HOSEREEL.") == 0)
				{
					type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::IfcFireSuppressionTerminalTypeEnumEnum::ENUM_HOSEREEL;
				}
				else if ( _stricmp( arg.c_str(), ".SPRINKLER.") == 0)
				{
					type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::IfcFireSuppressionTerminalTypeEnumEnum::ENUM_SPRINKLER;
				}
				else if ( _stricmp( arg.c_str(), ".SPRINKLERDEFLECTOR.") == 0)
				{
					type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::IfcFireSuppressionTerminalTypeEnumEnum::ENUM_SPRINKLERDEFLECTOR;
				}
				else if ( _stricmp( arg.c_str(), ".USERDEFINED.") == 0)
				{
					type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::IfcFireSuppressionTerminalTypeEnumEnum::ENUM_USERDEFINED;
				}
				else if ( _stricmp( arg.c_str(), ".NOTDEFINED.") == 0)
				{
					type_object->m_enum = IfcFireSuppressionTerminalTypeEnum::IfcFireSuppressionTerminalTypeEnumEnum::ENUM_NOTDEFINED;
				}
				return type_object;
			}
	} // end namespace IfcAlignment1x1
} // end namespace OpenInfraPlatform
