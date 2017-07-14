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
#include "IfcDocumentSelect.h"
#include "IfcExternalInformation.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		class IfcIdentifier;
		class IfcLabel;
		class IfcText;
		class IfcURIReference;
		class IfcActorSelect;
		class IfcDateTime;
		class IfcDate;
		class IfcDocumentConfidentialityEnum;
		class IfcDocumentStatusEnum;
		class IfcRelAssociatesDocument;
		class IfcDocumentReference;
		class IfcDocumentInformationRelationship;
		//ENTITY
		class IfcDocumentInformation : public IfcDocumentSelect, public IfcExternalInformation
		{
		public:
			IfcDocumentInformation();
			IfcDocumentInformation( int id );
			~IfcDocumentInformation();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcRoadEntity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcDocumentInformation"; }


			// IfcExternalInformation -----------------------------------------------------------

			// IfcDocumentInformation -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcIdentifier>									m_Identification;
			shared_ptr<IfcLabel>											m_Name;
			shared_ptr<IfcText>											m_Description;				//optional
			shared_ptr<IfcURIReference>									m_Location;					//optional
			shared_ptr<IfcText>											m_Purpose;					//optional
			shared_ptr<IfcText>											m_IntendedUse;				//optional
			shared_ptr<IfcText>											m_Scope;					//optional
			shared_ptr<IfcLabel>											m_Revision;					//optional
			shared_ptr<IfcActorSelect>									m_DocumentOwner;			//optional
			std::vector<shared_ptr<IfcActorSelect> >						m_Editors;					//optional
			shared_ptr<IfcDateTime>										m_CreationTime;				//optional
			shared_ptr<IfcDateTime>										m_LastRevisionTime;			//optional
			shared_ptr<IfcIdentifier>									m_ElectronicFormat;			//optional
			shared_ptr<IfcDate>											m_ValidFrom;				//optional
			shared_ptr<IfcDate>											m_ValidUntil;				//optional
			shared_ptr<IfcDocumentConfidentialityEnum>					m_Confidentiality;			//optional
			shared_ptr<IfcDocumentStatusEnum>							m_Status;					//optional
			// inverse attributes:
			std::vector<weak_ptr<IfcRelAssociatesDocument> >				m_DocumentInfoForObjects_inverse;
			std::vector<weak_ptr<IfcDocumentReference> >					m_HasDocumentReferences_inverse;
			std::vector<weak_ptr<IfcDocumentInformationRelationship> >	m_IsPointedTo_inverse;
			std::vector<weak_ptr<IfcDocumentInformationRelationship> >	m_IsPointer_inverse;
		};
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform

