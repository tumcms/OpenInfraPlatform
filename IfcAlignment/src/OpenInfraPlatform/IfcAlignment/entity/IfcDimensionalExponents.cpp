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
#include "include/IfcDimensionalExponents.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// ENTITY IfcDimensionalExponents 
		IfcDimensionalExponents::IfcDimensionalExponents() { m_entity_enum = IFCDIMENSIONALEXPONENTS; }
		IfcDimensionalExponents::IfcDimensionalExponents( int id ) { m_id = id; m_entity_enum = IFCDIMENSIONALEXPONENTS; }
		IfcDimensionalExponents::~IfcDimensionalExponents() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcDimensionalExponents::setEntity( shared_ptr<IfcAlignmentP6Entity> other_entity )
		{
			shared_ptr<IfcDimensionalExponents> other = dynamic_pointer_cast<IfcDimensionalExponents>(other_entity);
			if( !other) { return; }
			m_LengthExponent = other->m_LengthExponent;
			m_MassExponent = other->m_MassExponent;
			m_TimeExponent = other->m_TimeExponent;
			m_ElectricCurrentExponent = other->m_ElectricCurrentExponent;
			m_ThermodynamicTemperatureExponent = other->m_ThermodynamicTemperatureExponent;
			m_AmountOfSubstanceExponent = other->m_AmountOfSubstanceExponent;
			m_LuminousIntensityExponent = other->m_LuminousIntensityExponent;
		}
		void IfcDimensionalExponents::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCDIMENSIONALEXPONENTS" << "(";
			if( m_LengthExponent == m_LengthExponent ){ stream << m_LengthExponent; }
			else { stream << "$"; }
			stream << ",";
			if( m_MassExponent == m_MassExponent ){ stream << m_MassExponent; }
			else { stream << "$"; }
			stream << ",";
			if( m_TimeExponent == m_TimeExponent ){ stream << m_TimeExponent; }
			else { stream << "$"; }
			stream << ",";
			if( m_ElectricCurrentExponent == m_ElectricCurrentExponent ){ stream << m_ElectricCurrentExponent; }
			else { stream << "$"; }
			stream << ",";
			if( m_ThermodynamicTemperatureExponent == m_ThermodynamicTemperatureExponent ){ stream << m_ThermodynamicTemperatureExponent; }
			else { stream << "$"; }
			stream << ",";
			if( m_AmountOfSubstanceExponent == m_AmountOfSubstanceExponent ){ stream << m_AmountOfSubstanceExponent; }
			else { stream << "$"; }
			stream << ",";
			if( m_LuminousIntensityExponent == m_LuminousIntensityExponent ){ stream << m_LuminousIntensityExponent; }
			else { stream << "$"; }
			stream << ");";
		}
		void IfcDimensionalExponents::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcDimensionalExponents::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<7 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcDimensionalExponents, expecting 7, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignmentP6Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>7 ){ std::cout << "Wrong parameter count for entity IfcDimensionalExponents, expecting 7, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readIntValue( args[0], m_LengthExponent );
			readIntValue( args[1], m_MassExponent );
			readIntValue( args[2], m_TimeExponent );
			readIntValue( args[3], m_ElectricCurrentExponent );
			readIntValue( args[4], m_ThermodynamicTemperatureExponent );
			readIntValue( args[5], m_AmountOfSubstanceExponent );
			readIntValue( args[6], m_LuminousIntensityExponent );
		}
		void IfcDimensionalExponents::setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> )
		{
		}
		void IfcDimensionalExponents::unlinkSelf()
		{
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
