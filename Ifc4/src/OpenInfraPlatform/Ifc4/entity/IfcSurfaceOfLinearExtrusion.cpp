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
#include "include/IfcAxis2Placement3D.h"
#include "include/IfcDirection.h"
#include "include/IfcLengthMeasure.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcProfileDef.h"
#include "include/IfcStyledItem.h"
#include "include/IfcSurfaceOfLinearExtrusion.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcSurfaceOfLinearExtrusion 
		IfcSurfaceOfLinearExtrusion::IfcSurfaceOfLinearExtrusion() { m_entity_enum = IFCSURFACEOFLINEAREXTRUSION; }
		IfcSurfaceOfLinearExtrusion::IfcSurfaceOfLinearExtrusion( int id ) { m_id = id; m_entity_enum = IFCSURFACEOFLINEAREXTRUSION; }
		IfcSurfaceOfLinearExtrusion::~IfcSurfaceOfLinearExtrusion() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcSurfaceOfLinearExtrusion::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcSurfaceOfLinearExtrusion> other = dynamic_pointer_cast<IfcSurfaceOfLinearExtrusion>(other_entity);
			if( !other) { return; }
			m_SweptCurve = other->m_SweptCurve;
			m_Position = other->m_Position;
			m_ExtrudedDirection = other->m_ExtrudedDirection;
			m_Depth = other->m_Depth;
		}
		void IfcSurfaceOfLinearExtrusion::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCSURFACEOFLINEAREXTRUSION" << "(";
			if( m_SweptCurve ) { stream << "#" << m_SweptCurve->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Position ) { stream << "#" << m_Position->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_ExtrudedDirection ) { stream << "#" << m_ExtrudedDirection->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Depth ) { m_Depth->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcSurfaceOfLinearExtrusion::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcSurfaceOfLinearExtrusion::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<4 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcSurfaceOfLinearExtrusion, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>4 ){ std::cout << "Wrong parameter count for entity IfcSurfaceOfLinearExtrusion, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_SweptCurve, map );
			readEntityReference( args[1], m_Position, map );
			readEntityReference( args[2], m_ExtrudedDirection, map );
			m_Depth = IfcLengthMeasure::readStepData( args[3] );
		}
		void IfcSurfaceOfLinearExtrusion::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcSweptSurface::setInverseCounterparts( ptr_self_entity );
		}
		void IfcSurfaceOfLinearExtrusion::unlinkSelf()
		{
			IfcSweptSurface::unlinkSelf();
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
