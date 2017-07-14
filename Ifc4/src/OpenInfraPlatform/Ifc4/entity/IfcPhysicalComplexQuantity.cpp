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
#include "include/IfcExternalReferenceRelationship.h"
#include "include/IfcLabel.h"
#include "include/IfcPhysicalComplexQuantity.h"
#include "include/IfcPhysicalQuantity.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcPhysicalComplexQuantity 
		IfcPhysicalComplexQuantity::IfcPhysicalComplexQuantity() { m_entity_enum = IFCPHYSICALCOMPLEXQUANTITY; }
		IfcPhysicalComplexQuantity::IfcPhysicalComplexQuantity( int id ) { m_id = id; m_entity_enum = IFCPHYSICALCOMPLEXQUANTITY; }
		IfcPhysicalComplexQuantity::~IfcPhysicalComplexQuantity() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcPhysicalComplexQuantity::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcPhysicalComplexQuantity> other = dynamic_pointer_cast<IfcPhysicalComplexQuantity>(other_entity);
			if( !other) { return; }
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_HasQuantities = other->m_HasQuantities;
			m_Discrimination = other->m_Discrimination;
			m_Quality = other->m_Quality;
			m_Usage = other->m_Usage;
		}
		void IfcPhysicalComplexQuantity::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCPHYSICALCOMPLEXQUANTITY" << "(";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_HasQuantities );
			stream << ",";
			if( m_Discrimination ) { m_Discrimination->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Quality ) { m_Quality->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Usage ) { m_Usage->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcPhysicalComplexQuantity::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcPhysicalComplexQuantity::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcPhysicalComplexQuantity, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcPhysicalComplexQuantity, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Name = IfcLabel::readStepData( args[0] );
			m_Description = IfcText::readStepData( args[1] );
			readEntityReferenceList( args[2], m_HasQuantities, map );
			m_Discrimination = IfcLabel::readStepData( args[3] );
			m_Quality = IfcLabel::readStepData( args[4] );
			m_Usage = IfcLabel::readStepData( args[5] );
		}
		void IfcPhysicalComplexQuantity::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcPhysicalQuantity::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcPhysicalComplexQuantity> ptr_self = dynamic_pointer_cast<IfcPhysicalComplexQuantity>( ptr_self_entity );
			if( !ptr_self ) { throw Ifc4Exception( "IfcPhysicalComplexQuantity::setInverseCounterparts: type mismatch" ); }
			for( int i=0; i<m_HasQuantities.size(); ++i )
			{
				if( m_HasQuantities[i] )
				{
					m_HasQuantities[i]->m_PartOfComplex_inverse.push_back( ptr_self );
				}
			}
		}
		void IfcPhysicalComplexQuantity::unlinkSelf()
		{
			IfcPhysicalQuantity::unlinkSelf();
			for( int i=0; i<m_HasQuantities.size(); ++i )
			{
				if( m_HasQuantities[i] )
				{
					std::vector<weak_ptr<IfcPhysicalComplexQuantity> >& PartOfComplex_inverse = m_HasQuantities[i]->m_PartOfComplex_inverse;
					std::vector<weak_ptr<IfcPhysicalComplexQuantity> >::iterator it_PartOfComplex_inverse;
					for( it_PartOfComplex_inverse = PartOfComplex_inverse.begin(); it_PartOfComplex_inverse != PartOfComplex_inverse.end(); ++it_PartOfComplex_inverse)
					{
						shared_ptr<IfcPhysicalComplexQuantity> self_candidate( *it_PartOfComplex_inverse );
						if( self_candidate->getId() == this->getId() )
						{
							PartOfComplex_inverse.erase( it_PartOfComplex_inverse );
							break;
						}
					}
				}
			}
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
