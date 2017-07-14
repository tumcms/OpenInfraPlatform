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
#include "include/IfcCartesianPoint.h"
#include "include/IfcCartesianTransformationOperator2D.h"
#include "include/IfcDirection.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcReal.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcCartesianTransformationOperator2D 
		IfcCartesianTransformationOperator2D::IfcCartesianTransformationOperator2D() { m_entity_enum = IFCCARTESIANTRANSFORMATIONOPERATOR2D; }
		IfcCartesianTransformationOperator2D::IfcCartesianTransformationOperator2D( int id ) { m_id = id; m_entity_enum = IFCCARTESIANTRANSFORMATIONOPERATOR2D; }
		IfcCartesianTransformationOperator2D::~IfcCartesianTransformationOperator2D() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcCartesianTransformationOperator2D::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcCartesianTransformationOperator2D> other = dynamic_pointer_cast<IfcCartesianTransformationOperator2D>(other_entity);
			if( !other) { return; }
			m_Axis1 = other->m_Axis1;
			m_Axis2 = other->m_Axis2;
			m_LocalOrigin = other->m_LocalOrigin;
			m_Scale = other->m_Scale;
		}
		void IfcCartesianTransformationOperator2D::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCCARTESIANTRANSFORMATIONOPERATOR2D" << "(";
			if( m_Axis1 ) { stream << "#" << m_Axis1->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Axis2 ) { stream << "#" << m_Axis2->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_LocalOrigin ) { stream << "#" << m_LocalOrigin->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Scale ) { m_Scale->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcCartesianTransformationOperator2D::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcCartesianTransformationOperator2D::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<4 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcCartesianTransformationOperator2D, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>4 ){ std::cout << "Wrong parameter count for entity IfcCartesianTransformationOperator2D, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_Axis1, map );
			readEntityReference( args[1], m_Axis2, map );
			readEntityReference( args[2], m_LocalOrigin, map );
			m_Scale = IfcReal::readStepData( args[3] );
		}
		void IfcCartesianTransformationOperator2D::setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self_entity )
		{
			IfcCartesianTransformationOperator::setInverseCounterparts( ptr_self_entity );
		}
		void IfcCartesianTransformationOperator2D::unlinkSelf()
		{
			IfcCartesianTransformationOperator::unlinkSelf();
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
