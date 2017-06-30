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

#include "OpenInfraPlatform/IfcRoad/model/IfcRoadException.h"
#include "OpenInfraPlatform/IfcRoad/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcRoad/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcRoad/IfcRoadEntityEnums.h"
#include "include/IfcBSplineCurveForm.h"
#include "include/IfcBSplineCurveWithKnots.h"
#include "include/IfcCartesianPoint.h"
#include "include/IfcKnotType.h"
#include "include/IfcLogical.h"
#include "include/IfcParameterValue.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcBSplineCurveWithKnots 
		IfcBSplineCurveWithKnots::IfcBSplineCurveWithKnots() { m_entity_enum = IFCBSPLINECURVEWITHKNOTS; }
		IfcBSplineCurveWithKnots::IfcBSplineCurveWithKnots( int id ) { m_id = id; m_entity_enum = IFCBSPLINECURVEWITHKNOTS; }
		IfcBSplineCurveWithKnots::~IfcBSplineCurveWithKnots() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcBSplineCurveWithKnots::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcBSplineCurveWithKnots> other = dynamic_pointer_cast<IfcBSplineCurveWithKnots>(other_entity);
			if( !other) { return; }
			m_Degree = other->m_Degree;
			m_ControlPointsList = other->m_ControlPointsList;
			m_CurveForm = other->m_CurveForm;
			m_ClosedCurve = other->m_ClosedCurve;
			m_SelfIntersect = other->m_SelfIntersect;
			m_KnotMultiplicities = other->m_KnotMultiplicities;
			m_Knots = other->m_Knots;
			m_KnotSpec = other->m_KnotSpec;
		}
		void IfcBSplineCurveWithKnots::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCBSPLINECURVEWITHKNOTS" << "(";
			if( m_Degree == m_Degree ){ stream << m_Degree; }
			else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_ControlPointsList );
			stream << ",";
			if( m_CurveForm ) { m_CurveForm->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ClosedCurve ) { m_ClosedCurve->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_SelfIntersect ) { m_SelfIntersect->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeIntList( stream, m_KnotMultiplicities );
			stream << ",";
			writeTypeOfRealList( stream, m_Knots );
			stream << ",";
			if( m_KnotSpec ) { m_KnotSpec->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcBSplineCurveWithKnots::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcBSplineCurveWithKnots::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<8 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcBSplineCurveWithKnots, expecting 8, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>8 ){ std::cout << "Wrong parameter count for entity IfcBSplineCurveWithKnots, expecting 8, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readIntValue( args[0], m_Degree );
			readEntityReferenceList( args[1], m_ControlPointsList, map );
			m_CurveForm = IfcBSplineCurveForm::readStepData( args[2] );
			m_ClosedCurve = IfcLogical::readStepData( args[3] );
			m_SelfIntersect = IfcLogical::readStepData( args[4] );
			readIntList(  args[5], m_KnotMultiplicities );
			readTypeOfRealList( args[6], m_Knots );
			m_KnotSpec = IfcKnotType::readStepData( args[7] );
		}
		void IfcBSplineCurveWithKnots::setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self_entity )
		{
			IfcBSplineCurve::setInverseCounterparts( ptr_self_entity );
		}
		void IfcBSplineCurveWithKnots::unlinkSelf()
		{
			IfcBSplineCurve::unlinkSelf();
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
