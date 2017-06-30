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
#include "../../model/Ifc2x3Object.h"
#include "IfcSpatialStructureElement.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		class IfcCompoundPlaneAngleMeasure;
		class IfcLengthMeasure;
		class IfcLabel;
		class IfcPostalAddress;
		//ENTITY
		class IfcSite : public IfcSpatialStructureElement
		{
		public:
			IfcSite();
			IfcSite( int id );
			~IfcSite();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<Ifc2x3Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcSite"; }


			// IfcRoot -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcGloballyUniqueId>				m_GlobalId;
			//  shared_ptr<IfcOwnerHistory>					m_OwnerHistory;
			//  shared_ptr<IfcLabel>							m_Name;						//optional
			//  shared_ptr<IfcText>							m_Description;				//optional

			// IfcObjectDefinition -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcRelAssigns> >		m_HasAssignments_inverse;
			//  std::vector<weak_ptr<IfcRelDecomposes> >		m_IsDecomposedBy_inverse;
			//  std::vector<weak_ptr<IfcRelDecomposes> >		m_Decomposes_inverse;
			//  std::vector<weak_ptr<IfcRelAssociates> >		m_HasAssociations_inverse;

			// IfcObject -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcLabel>							m_ObjectType;				//optional
			// inverse attributes:
			//  std::vector<weak_ptr<IfcRelDefines> >		m_IsDefinedBy_inverse;

			// IfcProduct -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcObjectPlacement>				m_ObjectPlacement;			//optional
			//  shared_ptr<IfcProductRepresentation>			m_Representation;			//optional
			// inverse attributes:
			//  std::vector<weak_ptr<IfcRelAssignsToProduct> >	m_ReferencedBy_inverse;

			// IfcSpatialStructureElement -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcLabel>							m_LongName;					//optional
			//  shared_ptr<IfcElementCompositionEnum>		m_CompositionType;
			// inverse attributes:
			//  std::vector<weak_ptr<IfcRelReferencedInSpatialStructure> >	m_ReferencesElements_inverse;
			//  std::vector<weak_ptr<IfcRelServicesBuildings> >	m_ServicedBySystems_inverse;
			//  std::vector<weak_ptr<IfcRelContainedInSpatialStructure> >	m_ContainsElements_inverse;

			// IfcSite -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcCompoundPlaneAngleMeasure>		m_RefLatitude;				//optional
			shared_ptr<IfcCompoundPlaneAngleMeasure>		m_RefLongitude;				//optional
			shared_ptr<IfcLengthMeasure>					m_RefElevation;				//optional
			shared_ptr<IfcLabel>							m_LandTitleNumber;			//optional
			shared_ptr<IfcPostalAddress>					m_SiteAddress;				//optional
		};
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform

