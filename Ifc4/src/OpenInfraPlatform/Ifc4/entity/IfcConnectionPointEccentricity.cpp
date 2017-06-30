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

#include "OpenInfraPlatform/Ifc4/model/Ifc4Exception.h"
#include "OpenInfraPlatform/Ifc4/reader/ReaderUtil.h"
#include "OpenInfraPlatform/Ifc4/writer/WriterUtil.h"
#include "OpenInfraPlatform/Ifc4/Ifc4EntityEnums.h"
#include "include/IfcConnectionPointEccentricity.h"
#include "include/IfcLengthMeasure.h"
#include "include/IfcPointOrVertexPoint.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcConnectionPointEccentricity 
		IfcConnectionPointEccentricity::IfcConnectionPointEccentricity() { m_entity_enum = IFCCONNECTIONPOINTECCENTRICITY; }
		IfcConnectionPointEccentricity::IfcConnectionPointEccentricity( int id ) { m_id = id; m_entity_enum = IFCCONNECTIONPOINTECCENTRICITY; }
		IfcConnectionPointEccentricity::~IfcConnectionPointEccentricity() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcConnectionPointEccentricity::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcConnectionPointEccentricity> other = dynamic_pointer_cast<IfcConnectionPointEccentricity>(other_entity);
			if( !other) { return; }
			m_PointOnRelatingElement = other->m_PointOnRelatingElement;
			m_PointOnRelatedElement = other->m_PointOnRelatedElement;
			m_EccentricityInX = other->m_EccentricityInX;
			m_EccentricityInY = other->m_EccentricityInY;
			m_EccentricityInZ = other->m_EccentricityInZ;
		}
		void IfcConnectionPointEccentricity::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCCONNECTIONPOINTECCENTRICITY" << "(";
			if( m_PointOnRelatingElement ) { m_PointOnRelatingElement->getStepParameter( stream, true ); } else { stream << "$"; }
			stream << ",";
			if( m_PointOnRelatedElement ) { m_PointOnRelatedElement->getStepParameter( stream, true ); } else { stream << "$"; }
			stream << ",";
			if( m_EccentricityInX ) { m_EccentricityInX->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_EccentricityInY ) { m_EccentricityInY->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_EccentricityInZ ) { m_EccentricityInZ->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcConnectionPointEccentricity::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcConnectionPointEccentricity::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<5 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcConnectionPointEccentricity, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>5 ){ std::cout << "Wrong parameter count for entity IfcConnectionPointEccentricity, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_PointOnRelatingElement = IfcPointOrVertexPoint::readStepData( args[0], map );
			m_PointOnRelatedElement = IfcPointOrVertexPoint::readStepData( args[1], map );
			m_EccentricityInX = IfcLengthMeasure::readStepData( args[2] );
			m_EccentricityInY = IfcLengthMeasure::readStepData( args[3] );
			m_EccentricityInZ = IfcLengthMeasure::readStepData( args[4] );
		}
		void IfcConnectionPointEccentricity::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcConnectionPointGeometry::setInverseCounterparts( ptr_self_entity );
		}
		void IfcConnectionPointEccentricity::unlinkSelf()
		{
			IfcConnectionPointGeometry::unlinkSelf();
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
