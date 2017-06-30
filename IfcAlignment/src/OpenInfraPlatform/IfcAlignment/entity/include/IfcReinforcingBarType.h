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
#include "OpenInfraPlatform/IfcAlignment/model/shared_ptr.h"
#include "OpenInfraPlatform/IfcAlignment/model/IfcAlignmentP6Object.h"
#include "IfcReinforcingElementType.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		class IfcReinforcingBarTypeEnum;
		class IfcPositiveLengthMeasure;
		class IfcAreaMeasure;
		class IfcReinforcingBarSurfaceEnum;
		class IfcLabel;
		class IfcBendingParameterSelect;
		//ENTITY
		class IfcReinforcingBarType : public IfcReinforcingElementType
		{
		public:
			IfcReinforcingBarType();
			IfcReinforcingBarType( int id );
			~IfcReinforcingBarType();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcAlignmentP6Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcReinforcingBarType"; }


			// IfcRoot -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcGloballyUniqueId>						m_GlobalId;
			//  shared_ptr<IfcOwnerHistory>							m_OwnerHistory;				//optional
			//  shared_ptr<IfcLabel>									m_Name;						//optional
			//  shared_ptr<IfcText>									m_Description;				//optional

			// IfcObjectDefinition -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcRelAssigns> >				m_HasAssignments_inverse;
			//  std::vector<weak_ptr<IfcRelNests> >					m_Nests_inverse;
			//  std::vector<weak_ptr<IfcRelNests> >					m_IsNestedBy_inverse;
			//  std::vector<weak_ptr<IfcRelDeclares> >				m_HasContext_inverse;
			//  std::vector<weak_ptr<IfcRelAggregates> >				m_IsDecomposedBy_inverse;
			//  std::vector<weak_ptr<IfcRelAggregates> >				m_Decomposes_inverse;
			//  std::vector<weak_ptr<IfcRelAssociates> >				m_HasAssociations_inverse;

			// IfcTypeObject -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcIdentifier>							m_ApplicableOccurrence;		//optional
			//  std::vector<shared_ptr<IfcPropertySetDefinition> >	m_HasPropertySets;			//optional
			// inverse attributes:
			//  std::vector<weak_ptr<IfcRelDefinesByType> >			m_Types_inverse;

			// IfcTypeProduct -----------------------------------------------------------
			// attributes:
			//  std::vector<shared_ptr<IfcRepresentationMap> >		m_RepresentationMaps;		//optional
			//  shared_ptr<IfcLabel>									m_Tag;						//optional
			// inverse attributes:
			//  std::vector<weak_ptr<IfcRelAssignsToProduct> >		m_ReferencedBy_inverse;

			// IfcElementType -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcLabel>									m_ElementType;				//optional

			// IfcElementComponentType -----------------------------------------------------------

			// IfcReinforcingElementType -----------------------------------------------------------

			// IfcReinforcingBarType -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcReinforcingBarTypeEnum>				m_PredefinedType;
			shared_ptr<IfcPositiveLengthMeasure>					m_NominalDiameter;			//optional
			shared_ptr<IfcAreaMeasure>							m_CrossSectionArea;			//optional
			shared_ptr<IfcPositiveLengthMeasure>					m_BarLength;				//optional
			shared_ptr<IfcReinforcingBarSurfaceEnum>				m_BarSurface;				//optional
			shared_ptr<IfcLabel>									m_BendingShapeCode;			//optional
			std::vector<shared_ptr<IfcBendingParameterSelect> >	m_BendingParameters;		//optional
		};
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform

