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

#include "model/IfcTunnelException.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "IfcTunnelEntityEnums.h"
#include "include/IfcLabel.h"
#include "include/IfcProperty.h"
#include "include/IfcPropertyDependencyRelationship.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// ENTITY IfcPropertyDependencyRelationship 
		IfcPropertyDependencyRelationship::IfcPropertyDependencyRelationship() { m_entity_enum = IFCPROPERTYDEPENDENCYRELATIONSHIP; }
		IfcPropertyDependencyRelationship::IfcPropertyDependencyRelationship( int id ) { m_id = id; m_entity_enum = IFCPROPERTYDEPENDENCYRELATIONSHIP; }
		IfcPropertyDependencyRelationship::~IfcPropertyDependencyRelationship() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcPropertyDependencyRelationship::setEntity( shared_ptr<IfcTunnelEntity> other_entity )
		{
			shared_ptr<IfcPropertyDependencyRelationship> other = dynamic_pointer_cast<IfcPropertyDependencyRelationship>(other_entity);
			if( !other) { return; }
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_DependingProperty = other->m_DependingProperty;
			m_DependantProperty = other->m_DependantProperty;
			m_Expression = other->m_Expression;
		}
		void IfcPropertyDependencyRelationship::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCPROPERTYDEPENDENCYRELATIONSHIP" << "(";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_DependingProperty ) { stream << "#" << m_DependingProperty->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_DependantProperty ) { stream << "#" << m_DependantProperty->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Expression ) { m_Expression->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcPropertyDependencyRelationship::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcPropertyDependencyRelationship::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<5 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcPropertyDependencyRelationship, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcTunnelException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>5 ){ std::cout << "Wrong parameter count for entity IfcPropertyDependencyRelationship, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Name = IfcLabel::readStepData( args[0] );
			m_Description = IfcText::readStepData( args[1] );
			readEntityReference( args[2], m_DependingProperty, map );
			readEntityReference( args[3], m_DependantProperty, map );
			m_Expression = IfcText::readStepData( args[4] );
		}
		void IfcPropertyDependencyRelationship::setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self_entity )
		{
			IfcResourceLevelRelationship::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcPropertyDependencyRelationship> ptr_self = dynamic_pointer_cast<IfcPropertyDependencyRelationship>( ptr_self_entity );
			if( !ptr_self ) { throw IfcTunnelException( "IfcPropertyDependencyRelationship::setInverseCounterparts: type mismatch" ); }
			if( m_DependantProperty )
			{
				m_DependantProperty->m_PropertyDependsOn_inverse.push_back( ptr_self );
			}
			if( m_DependingProperty )
			{
				m_DependingProperty->m_PropertyForDependance_inverse.push_back( ptr_self );
			}
		}
		void IfcPropertyDependencyRelationship::unlinkSelf()
		{
			IfcResourceLevelRelationship::unlinkSelf();
			if( m_DependantProperty )
			{
				std::vector<weak_ptr<IfcPropertyDependencyRelationship> >& PropertyDependsOn_inverse = m_DependantProperty->m_PropertyDependsOn_inverse;
				std::vector<weak_ptr<IfcPropertyDependencyRelationship> >::iterator it_PropertyDependsOn_inverse;
				for( it_PropertyDependsOn_inverse = PropertyDependsOn_inverse.begin(); it_PropertyDependsOn_inverse != PropertyDependsOn_inverse.end(); ++it_PropertyDependsOn_inverse)
				{
					shared_ptr<IfcPropertyDependencyRelationship> self_candidate( *it_PropertyDependsOn_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						PropertyDependsOn_inverse.erase( it_PropertyDependsOn_inverse );
						break;
					}
				}
			}
			if( m_DependingProperty )
			{
				std::vector<weak_ptr<IfcPropertyDependencyRelationship> >& PropertyForDependance_inverse = m_DependingProperty->m_PropertyForDependance_inverse;
				std::vector<weak_ptr<IfcPropertyDependencyRelationship> >::iterator it_PropertyForDependance_inverse;
				for( it_PropertyForDependance_inverse = PropertyForDependance_inverse.begin(); it_PropertyForDependance_inverse != PropertyForDependance_inverse.end(); ++it_PropertyForDependance_inverse)
				{
					shared_ptr<IfcPropertyDependencyRelationship> self_candidate( *it_PropertyForDependance_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						PropertyForDependance_inverse.erase( it_PropertyForDependance_inverse );
						break;
					}
				}
			}
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
