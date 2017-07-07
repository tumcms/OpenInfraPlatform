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
#include "IfcBoundedCurve.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		class IfcCurve;
		class IfcTrimmingSelect;
		class IfcBoolean;
		class IfcTrimmingPreference;
		//ENTITY
		class IfcTrimmedCurve : public IfcBoundedCurve
		{
		public:
			IfcTrimmedCurve();
			IfcTrimmedCurve( int id );
			~IfcTrimmedCurve();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcRoadEntity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcTrimmedCurve"; }


			// IfcRepresentationItem -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
			//  std::vector<weak_ptr<IfcStyledItem> >		m_StyledByItem_inverse;

			// IfcGeometricRepresentationItem -----------------------------------------------------------

			// IfcCurve -----------------------------------------------------------

			// IfcBoundedCurve -----------------------------------------------------------

			// IfcTrimmedCurve -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcCurve>							m_BasisCurve;
			std::vector<shared_ptr<IfcTrimmingSelect> >	m_Trim1;
			std::vector<shared_ptr<IfcTrimmingSelect> >	m_Trim2;
			shared_ptr<IfcBoolean>						m_SenseAgreement;
			shared_ptr<IfcTrimmingPreference>			m_MasterRepresentation;
		};
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform

