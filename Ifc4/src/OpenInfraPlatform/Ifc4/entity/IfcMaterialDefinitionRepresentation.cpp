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
#include "include/IfcLabel.h"
#include "include/IfcMaterial.h"
#include "include/IfcMaterialDefinitionRepresentation.h"
#include "include/IfcRepresentation.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcMaterialDefinitionRepresentation 
		IfcMaterialDefinitionRepresentation::IfcMaterialDefinitionRepresentation() { m_entity_enum = IFCMATERIALDEFINITIONREPRESENTATION; }
		IfcMaterialDefinitionRepresentation::IfcMaterialDefinitionRepresentation( int id ) { m_id = id; m_entity_enum = IFCMATERIALDEFINITIONREPRESENTATION; }
		IfcMaterialDefinitionRepresentation::~IfcMaterialDefinitionRepresentation() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcMaterialDefinitionRepresentation::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcMaterialDefinitionRepresentation> other = dynamic_pointer_cast<IfcMaterialDefinitionRepresentation>(other_entity);
			if( !other) { return; }
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_Representations = other->m_Representations;
			m_RepresentedMaterial = other->m_RepresentedMaterial;
		}
		void IfcMaterialDefinitionRepresentation::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCMATERIALDEFINITIONREPRESENTATION" << "(";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_Representations );
			stream << ",";
			if( m_RepresentedMaterial ) { stream << "#" << m_RepresentedMaterial->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcMaterialDefinitionRepresentation::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcMaterialDefinitionRepresentation::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<4 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcMaterialDefinitionRepresentation, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>4 ){ std::cout << "Wrong parameter count for entity IfcMaterialDefinitionRepresentation, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Name = IfcLabel::readStepData( args[0] );
			m_Description = IfcText::readStepData( args[1] );
			readEntityReferenceList( args[2], m_Representations, map );
			readEntityReference( args[3], m_RepresentedMaterial, map );
		}
		void IfcMaterialDefinitionRepresentation::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcProductRepresentation::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcMaterialDefinitionRepresentation> ptr_self = dynamic_pointer_cast<IfcMaterialDefinitionRepresentation>( ptr_self_entity );
			if( !ptr_self ) { throw Ifc4Exception( "IfcMaterialDefinitionRepresentation::setInverseCounterparts: type mismatch" ); }
			if( m_RepresentedMaterial )
			{
				m_RepresentedMaterial->m_HasRepresentation_inverse.push_back( ptr_self );
			}
		}
		void IfcMaterialDefinitionRepresentation::unlinkSelf()
		{
			IfcProductRepresentation::unlinkSelf();
			if( m_RepresentedMaterial )
			{
				std::vector<weak_ptr<IfcMaterialDefinitionRepresentation> >& HasRepresentation_inverse = m_RepresentedMaterial->m_HasRepresentation_inverse;
				std::vector<weak_ptr<IfcMaterialDefinitionRepresentation> >::iterator it_HasRepresentation_inverse;
				for( it_HasRepresentation_inverse = HasRepresentation_inverse.begin(); it_HasRepresentation_inverse != HasRepresentation_inverse.end(); ++it_HasRepresentation_inverse)
				{
					shared_ptr<IfcMaterialDefinitionRepresentation> self_candidate( *it_HasRepresentation_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						HasRepresentation_inverse.erase( it_HasRepresentation_inverse );
						break;
					}
				}
			}
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
