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

#include "IfcTaskTypeEnum.h"
#include "OpenInfraPlatform/IfcAlignment1x1/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/writer/WriterUtil.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		IfcTaskTypeEnum::IfcTaskTypeEnum() {}
		IfcTaskTypeEnum::IfcTaskTypeEnum(IfcTaskTypeEnum::IfcTaskTypeEnumEnum value) { m_enum = value; }
		IfcTaskTypeEnum::~IfcTaskTypeEnum() {}
		void IfcTaskTypeEnum::getStepParameter(std::stringstream& stream, bool is_select_type) const
			{
				if ( m_enum == IfcTaskTypeEnumEnum::ENUM_ATTENDANCE)
				{
					stream << ".ATTENDANCE.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_CONSTRUCTION)
				{
					stream << ".CONSTRUCTION.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_DEMOLITION)
				{
					stream << ".DEMOLITION.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_DISMANTLE)
				{
					stream << ".DISMANTLE.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_DISPOSAL)
				{
					stream << ".DISPOSAL.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_INSTALLATION)
				{
					stream << ".INSTALLATION.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_LOGISTIC)
				{
					stream << ".LOGISTIC.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_MAINTENANCE)
				{
					stream << ".MAINTENANCE.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_MOVE)
				{
					stream << ".MOVE.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_OPERATION)
				{
					stream << ".OPERATION.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_REMOVAL)
				{
					stream << ".REMOVAL.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_RENOVATION)
				{
					stream << ".RENOVATION.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_USERDEFINED)
				{
					stream << ".USERDEFINED.";
				}
				else if ( m_enum == IfcTaskTypeEnumEnum::ENUM_NOTDEFINED)
				{
					stream << ".NOTDEFINED.";
				}
				if (is_select_type) { stream << ")"; }
			}
			std::shared_ptr<IfcTaskTypeEnum> IfcTaskTypeEnum::readStepData(const std::string& arg)
			{
				if( arg.compare( "$" ) == 0 ) { return std::shared_ptr<IfcTaskTypeEnum>(); }
				std::shared_ptr<IfcTaskTypeEnum> type_object(new IfcTaskTypeEnum() );
				if ( _stricmp( arg.c_str(), ".ATTENDANCE.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_ATTENDANCE;
				}
				else if ( _stricmp( arg.c_str(), ".CONSTRUCTION.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_CONSTRUCTION;
				}
				else if ( _stricmp( arg.c_str(), ".DEMOLITION.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_DEMOLITION;
				}
				else if ( _stricmp( arg.c_str(), ".DISMANTLE.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_DISMANTLE;
				}
				else if ( _stricmp( arg.c_str(), ".DISPOSAL.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_DISPOSAL;
				}
				else if ( _stricmp( arg.c_str(), ".INSTALLATION.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_INSTALLATION;
				}
				else if ( _stricmp( arg.c_str(), ".LOGISTIC.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_LOGISTIC;
				}
				else if ( _stricmp( arg.c_str(), ".MAINTENANCE.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_MAINTENANCE;
				}
				else if ( _stricmp( arg.c_str(), ".MOVE.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_MOVE;
				}
				else if ( _stricmp( arg.c_str(), ".OPERATION.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_OPERATION;
				}
				else if ( _stricmp( arg.c_str(), ".REMOVAL.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_REMOVAL;
				}
				else if ( _stricmp( arg.c_str(), ".RENOVATION.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_RENOVATION;
				}
				else if ( _stricmp( arg.c_str(), ".USERDEFINED.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_USERDEFINED;
				}
				else if ( _stricmp( arg.c_str(), ".NOTDEFINED.") == 0)
				{
					type_object->m_enum = IfcTaskTypeEnum::IfcTaskTypeEnumEnum::ENUM_NOTDEFINED;
				}
				return type_object;
			}
	} // end namespace IfcAlignment1x1
} // end namespace OpenInfraPlatform
