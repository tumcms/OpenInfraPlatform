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
#include "IfcPreDefinedPropertySet.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		class IfcPositiveLengthMeasure;
		class IfcNonNegativeLengthMeasure;
		class IfcNormalisedRatioMeasure;
		class IfcShapeAspect;
		class IfcLengthMeasure;
		//ENTITY
		class IfcWindowLiningProperties : public IfcPreDefinedPropertySet
		{
		public:
			IfcWindowLiningProperties();
			IfcWindowLiningProperties( int id );
			~IfcWindowLiningProperties();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcAlignmentP6Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcWindowLiningProperties"; }


			// IfcRoot -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcGloballyUniqueId>				m_GlobalId;
			//  shared_ptr<IfcOwnerHistory>					m_OwnerHistory;				//optional
			//  shared_ptr<IfcLabel>							m_Name;						//optional
			//  shared_ptr<IfcText>							m_Description;				//optional

			// IfcPropertyDefinition -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcRelDeclares> >		m_HasContext_inverse;
			//  std::vector<weak_ptr<IfcRelAssociates> >		m_HasAssociations_inverse;

			// IfcPropertySetDefinition -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcTypeObject> >		m_DefinesType_inverse;
			//  std::vector<weak_ptr<IfcRelDefinesByTemplate> >	m_IsDefinedBy_inverse;
			//  std::vector<weak_ptr<IfcRelDefinesByProperties> >	m_DefinesOccurrence_inverse;

			// IfcPreDefinedPropertySet -----------------------------------------------------------

			// IfcWindowLiningProperties -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcPositiveLengthMeasure>			m_LiningDepth;				//optional
			shared_ptr<IfcNonNegativeLengthMeasure>		m_LiningThickness;			//optional
			shared_ptr<IfcNonNegativeLengthMeasure>		m_TransomThickness;			//optional
			shared_ptr<IfcNonNegativeLengthMeasure>		m_MullionThickness;			//optional
			shared_ptr<IfcNormalisedRatioMeasure>		m_FirstTransomOffset;		//optional
			shared_ptr<IfcNormalisedRatioMeasure>		m_SecondTransomOffset;		//optional
			shared_ptr<IfcNormalisedRatioMeasure>		m_FirstMullionOffset;		//optional
			shared_ptr<IfcNormalisedRatioMeasure>		m_SecondMullionOffset;		//optional
			shared_ptr<IfcShapeAspect>					m_ShapeAspectStyle;			//optional
			shared_ptr<IfcLengthMeasure>					m_LiningOffset;				//optional
			shared_ptr<IfcLengthMeasure>					m_LiningToPanelOffsetX;		//optional
			shared_ptr<IfcLengthMeasure>					m_LiningToPanelOffsetY;		//optional
		};
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform

