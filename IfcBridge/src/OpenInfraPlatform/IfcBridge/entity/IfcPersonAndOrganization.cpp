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

#include "model/IfcBridgeException.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "IfcBridgeEntityEnums.h"
#include "include/IfcActorRole.h"
#include "include/IfcOrganization.h"
#include "include/IfcPerson.h"
#include "include/IfcPersonAndOrganization.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// ENTITY IfcPersonAndOrganization 
		IfcPersonAndOrganization::IfcPersonAndOrganization() { m_entity_enum = IFCPERSONANDORGANIZATION; }
		IfcPersonAndOrganization::IfcPersonAndOrganization( int id ) { m_id = id; m_entity_enum = IFCPERSONANDORGANIZATION; }
		IfcPersonAndOrganization::~IfcPersonAndOrganization() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcPersonAndOrganization::setEntity( shared_ptr<IfcBridgeEntity> other_entity )
		{
			shared_ptr<IfcPersonAndOrganization> other = dynamic_pointer_cast<IfcPersonAndOrganization>(other_entity);
			if( !other) { return; }
			m_ThePerson = other->m_ThePerson;
			m_TheOrganization = other->m_TheOrganization;
			m_Roles = other->m_Roles;
		}
		void IfcPersonAndOrganization::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCPERSONANDORGANIZATION" << "(";
			if( m_ThePerson ) { stream << "#" << m_ThePerson->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_TheOrganization ) { stream << "#" << m_TheOrganization->getId(); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_Roles );
			stream << ");";
		}
		void IfcPersonAndOrganization::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcPersonAndOrganization::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcPersonAndOrganization, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcBridgeException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>3 ){ std::cout << "Wrong parameter count for entity IfcPersonAndOrganization, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_ThePerson, map );
			readEntityReference( args[1], m_TheOrganization, map );
			readEntityReferenceList( args[2], m_Roles, map );
		}
		void IfcPersonAndOrganization::setInverseCounterparts( shared_ptr<IfcBridgeEntity> ptr_self_entity )
		{
			shared_ptr<IfcPersonAndOrganization> ptr_self = dynamic_pointer_cast<IfcPersonAndOrganization>( ptr_self_entity );
			if( !ptr_self ) { throw IfcBridgeException( "IfcPersonAndOrganization::setInverseCounterparts: type mismatch" ); }
			if( m_TheOrganization )
			{
				m_TheOrganization->m_Engages_inverse.push_back( ptr_self );
			}
			if( m_ThePerson )
			{
				m_ThePerson->m_EngagedIn_inverse.push_back( ptr_self );
			}
		}
		void IfcPersonAndOrganization::unlinkSelf()
		{
			if( m_TheOrganization )
			{
				std::vector<weak_ptr<IfcPersonAndOrganization> >& Engages_inverse = m_TheOrganization->m_Engages_inverse;
				std::vector<weak_ptr<IfcPersonAndOrganization> >::iterator it_Engages_inverse;
				for( it_Engages_inverse = Engages_inverse.begin(); it_Engages_inverse != Engages_inverse.end(); ++it_Engages_inverse)
				{
					shared_ptr<IfcPersonAndOrganization> self_candidate( *it_Engages_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						Engages_inverse.erase( it_Engages_inverse );
						break;
					}
				}
			}
			if( m_ThePerson )
			{
				std::vector<weak_ptr<IfcPersonAndOrganization> >& EngagedIn_inverse = m_ThePerson->m_EngagedIn_inverse;
				std::vector<weak_ptr<IfcPersonAndOrganization> >::iterator it_EngagedIn_inverse;
				for( it_EngagedIn_inverse = EngagedIn_inverse.begin(); it_EngagedIn_inverse != EngagedIn_inverse.end(); ++it_EngagedIn_inverse)
				{
					shared_ptr<IfcPersonAndOrganization> self_candidate( *it_EngagedIn_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						EngagedIn_inverse.erase( it_EngagedIn_inverse );
						break;
					}
				}
			}
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
