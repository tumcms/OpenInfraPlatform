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
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "../model/shared_ptr.h"
#include "../model/IfcTunnelException.h"
#include "include/IfcDocumentStatusEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// TYPE IfcDocumentStatusEnum 
		IfcDocumentStatusEnum::IfcDocumentStatusEnum() {}
		IfcDocumentStatusEnum::~IfcDocumentStatusEnum() {}
		void IfcDocumentStatusEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCDOCUMENTSTATUSENUM("; }
			if( m_enum == ENUM_DRAFT )
			{
				stream << ".DRAFT.";
			}
			else if( m_enum == ENUM_FINALDRAFT )
			{
				stream << ".FINALDRAFT.";
			}
			else if( m_enum == ENUM_FINAL )
			{
				stream << ".FINAL.";
			}
			else if( m_enum == ENUM_REVISION )
			{
				stream << ".REVISION.";
			}
			else if( m_enum == ENUM_NOTDEFINED )
			{
				stream << ".NOTDEFINED.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcDocumentStatusEnum> IfcDocumentStatusEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcDocumentStatusEnum>(); }
			shared_ptr<IfcDocumentStatusEnum> type_object( new IfcDocumentStatusEnum() );
			if( _stricmp( arg.c_str(), ".DRAFT." ) == 0 )
			{
				type_object->m_enum = IfcDocumentStatusEnum::ENUM_DRAFT;
			}
			else if( _stricmp( arg.c_str(), ".FINALDRAFT." ) == 0 )
			{
				type_object->m_enum = IfcDocumentStatusEnum::ENUM_FINALDRAFT;
			}
			else if( _stricmp( arg.c_str(), ".FINAL." ) == 0 )
			{
				type_object->m_enum = IfcDocumentStatusEnum::ENUM_FINAL;
			}
			else if( _stricmp( arg.c_str(), ".REVISION." ) == 0 )
			{
				type_object->m_enum = IfcDocumentStatusEnum::ENUM_REVISION;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcDocumentStatusEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
