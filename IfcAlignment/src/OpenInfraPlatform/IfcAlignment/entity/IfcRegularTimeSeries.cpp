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

#include "OpenInfraPlatform/IfcAlignment/model/IfcAlignmentP6Exception.h"
#include "OpenInfraPlatform/IfcAlignment/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcAlignment/IfcAlignmentP6EntityEnums.h"
#include "include/IfcDataOriginEnum.h"
#include "include/IfcDateTime.h"
#include "include/IfcExternalReferenceRelationship.h"
#include "include/IfcLabel.h"
#include "include/IfcRegularTimeSeries.h"
#include "include/IfcText.h"
#include "include/IfcTimeMeasure.h"
#include "include/IfcTimeSeriesDataTypeEnum.h"
#include "include/IfcTimeSeriesValue.h"
#include "include/IfcUnit.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// ENTITY IfcRegularTimeSeries 
		IfcRegularTimeSeries::IfcRegularTimeSeries() { m_entity_enum = IFCREGULARTIMESERIES; }
		IfcRegularTimeSeries::IfcRegularTimeSeries( int id ) { m_id = id; m_entity_enum = IFCREGULARTIMESERIES; }
		IfcRegularTimeSeries::~IfcRegularTimeSeries() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRegularTimeSeries::setEntity( shared_ptr<IfcAlignmentP6Entity> other_entity )
		{
			shared_ptr<IfcRegularTimeSeries> other = dynamic_pointer_cast<IfcRegularTimeSeries>(other_entity);
			if( !other) { return; }
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_StartTime = other->m_StartTime;
			m_EndTime = other->m_EndTime;
			m_TimeSeriesDataType = other->m_TimeSeriesDataType;
			m_DataOrigin = other->m_DataOrigin;
			m_UserDefinedDataOrigin = other->m_UserDefinedDataOrigin;
			m_Unit = other->m_Unit;
			m_TimeStep = other->m_TimeStep;
			m_Values = other->m_Values;
		}
		void IfcRegularTimeSeries::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCREGULARTIMESERIES" << "(";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_StartTime ) { m_StartTime->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_EndTime ) { m_EndTime->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_TimeSeriesDataType ) { m_TimeSeriesDataType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_DataOrigin ) { m_DataOrigin->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_UserDefinedDataOrigin ) { m_UserDefinedDataOrigin->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Unit ) { m_Unit->getStepParameter( stream, true ); } else { stream << "$"; }
			stream << ",";
			if( m_TimeStep ) { m_TimeStep->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_Values );
			stream << ");";
		}
		void IfcRegularTimeSeries::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRegularTimeSeries::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<10 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRegularTimeSeries, expecting 10, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignmentP6Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>10 ){ std::cout << "Wrong parameter count for entity IfcRegularTimeSeries, expecting 10, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Name = IfcLabel::readStepData( args[0] );
			m_Description = IfcText::readStepData( args[1] );
			m_StartTime = IfcDateTime::readStepData( args[2] );
			m_EndTime = IfcDateTime::readStepData( args[3] );
			m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum::readStepData( args[4] );
			m_DataOrigin = IfcDataOriginEnum::readStepData( args[5] );
			m_UserDefinedDataOrigin = IfcLabel::readStepData( args[6] );
			m_Unit = IfcUnit::readStepData( args[7], map );
			m_TimeStep = IfcTimeMeasure::readStepData( args[8] );
			readEntityReferenceList( args[9], m_Values, map );
		}
		void IfcRegularTimeSeries::setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> ptr_self_entity )
		{
			IfcTimeSeries::setInverseCounterparts( ptr_self_entity );
		}
		void IfcRegularTimeSeries::unlinkSelf()
		{
			IfcTimeSeries::unlinkSelf();
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
