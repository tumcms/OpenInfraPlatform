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
		class IfcPersonAndOrganization;
		class IfcApplication;
		class IfcStateEnum;
		class IfcChangeActionEnum;
		class IfcTimeStamp;
		//ENTITY
		class IfcOwnerHistory : public IfcTunnelEntity
		{
		public:
			IfcOwnerHistory();
			IfcOwnerHistory( int id );
			~IfcOwnerHistory();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcTunnelEntity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcOwnerHistory"; }


			// IfcOwnerHistory -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcPersonAndOrganization>			m_OwningUser;
			shared_ptr<IfcApplication>					m_OwningApplication;
			shared_ptr<IfcStateEnum>						m_State;					//optional
			shared_ptr<IfcChangeActionEnum>				m_ChangeAction;				//optional
			shared_ptr<IfcTimeStamp>						m_LastModifiedDate;			//optional
			shared_ptr<IfcPersonAndOrganization>			m_LastModifyingUser;		//optional
			shared_ptr<IfcApplication>					m_LastModifyingApplication;	//optional
			shared_ptr<IfcTimeStamp>						m_CreationDate;
		};
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform

