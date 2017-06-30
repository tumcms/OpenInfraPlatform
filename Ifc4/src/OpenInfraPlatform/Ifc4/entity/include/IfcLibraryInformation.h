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
#include "OpenInfraPlatform/Ifc4/model/shared_ptr.h"
#include "OpenInfraPlatform/Ifc4/model/Ifc4Object.h"
#include "IfcLibrarySelect.h"
#include "IfcExternalInformation.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		class IfcLabel;
		class IfcActorSelect;
		class IfcDateTime;
		class IfcURIReference;
		class IfcText;
		class IfcRelAssociatesLibrary;
		class IfcLibraryReference;
		//ENTITY
		class IfcLibraryInformation : public IfcLibrarySelect, public IfcExternalInformation
		{
		public:
			IfcLibraryInformation();
			IfcLibraryInformation( int id );
			~IfcLibraryInformation();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<Ifc4Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcLibraryInformation"; }


			// IfcExternalInformation -----------------------------------------------------------

			// IfcLibraryInformation -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcLabel>								m_Name;
			shared_ptr<IfcLabel>								m_Version;					//optional
			shared_ptr<IfcActorSelect>						m_Publisher;				//optional
			shared_ptr<IfcDateTime>							m_VersionDate;				//optional
			shared_ptr<IfcURIReference>						m_Location;					//optional
			shared_ptr<IfcText>								m_Description;				//optional
			// inverse attributes:
			std::vector<weak_ptr<IfcRelAssociatesLibrary> >	m_LibraryInfoForObjects_inverse;
			std::vector<weak_ptr<IfcLibraryReference> >		m_HasLibraryReferences_inverse;
		};
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform

