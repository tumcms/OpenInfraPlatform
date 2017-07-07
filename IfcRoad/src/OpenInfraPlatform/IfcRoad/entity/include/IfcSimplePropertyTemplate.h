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
#include "IfcPropertyTemplate.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		class IfcSimplePropertyTemplateTypeEnum;
		class IfcLabel;
		class IfcPropertyEnumeration;
		class IfcUnit;
		class IfcStateEnum;
		//ENTITY
		class IfcSimplePropertyTemplate : public IfcPropertyTemplate
		{
		public:
			IfcSimplePropertyTemplate();
			IfcSimplePropertyTemplate( int id );
			~IfcSimplePropertyTemplate();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcRoadEntity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcSimplePropertyTemplate"; }


			// IfcRoot -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcGloballyUniqueId>					m_GlobalId;
			//  shared_ptr<IfcOwnerHistory>						m_OwnerHistory;				//optional
			//  shared_ptr<IfcLabel>								m_Name;						//optional
			//  shared_ptr<IfcText>								m_Description;				//optional

			// IfcPropertyDefinition -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcRelDeclares> >			m_HasContext_inverse;
			//  std::vector<weak_ptr<IfcRelAssociates> >			m_HasAssociations_inverse;

			// IfcPropertyTemplateDefinition -----------------------------------------------------------

			// IfcPropertyTemplate -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcComplexPropertyTemplate> >	m_PartOfComplexTemplate_inverse;
			//  std::vector<weak_ptr<IfcPropertySetTemplate> >	m_PartOfPsetTemplate_inverse;

			// IfcSimplePropertyTemplate -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcSimplePropertyTemplateTypeEnum>	m_TemplateType;				//optional
			shared_ptr<IfcLabel>								m_PrimaryMeasureType;		//optional
			shared_ptr<IfcLabel>								m_SecondaryMeasureType;		//optional
			shared_ptr<IfcPropertyEnumeration>				m_Enumerators;				//optional
			shared_ptr<IfcUnit>								m_PrimaryUnit;				//optional
			shared_ptr<IfcUnit>								m_SecondaryUnit;			//optional
			shared_ptr<IfcLabel>								m_Expression;				//optional
			shared_ptr<IfcStateEnum>							m_AccessState;				//optional
		};
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform

