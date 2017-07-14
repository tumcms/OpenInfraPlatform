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
#include "include/IfcCovering.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcRelCoversSpaces.h"
#include "include/IfcSpace.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// ENTITY IfcRelCoversSpaces 
		IfcRelCoversSpaces::IfcRelCoversSpaces() { m_entity_enum = IFCRELCOVERSSPACES; }
		IfcRelCoversSpaces::IfcRelCoversSpaces( int id ) { m_id = id; m_entity_enum = IFCRELCOVERSSPACES; }
		IfcRelCoversSpaces::~IfcRelCoversSpaces() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRelCoversSpaces::setEntity( shared_ptr<IfcAlignmentP6Entity> other_entity )
		{
			shared_ptr<IfcRelCoversSpaces> other = dynamic_pointer_cast<IfcRelCoversSpaces>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatingSpace = other->m_RelatingSpace;
			m_RelatedCoverings = other->m_RelatedCoverings;
		}
		void IfcRelCoversSpaces::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRELCOVERSSPACES" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_RelatingSpace ) { stream << "#" << m_RelatingSpace->getId(); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_RelatedCoverings );
			stream << ");";
		}
		void IfcRelCoversSpaces::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRelCoversSpaces::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelCoversSpaces, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignmentP6Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcRelCoversSpaces, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			readEntityReference( args[4], m_RelatingSpace, map );
			readEntityReferenceList( args[5], m_RelatedCoverings, map );
		}
		void IfcRelCoversSpaces::setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> ptr_self_entity )
		{
			IfcRelConnects::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcRelCoversSpaces> ptr_self = dynamic_pointer_cast<IfcRelCoversSpaces>( ptr_self_entity );
			if( !ptr_self ) { throw IfcAlignmentP6Exception( "IfcRelCoversSpaces::setInverseCounterparts: type mismatch" ); }
			for( int i=0; i<m_RelatedCoverings.size(); ++i )
			{
				if( m_RelatedCoverings[i] )
				{
					m_RelatedCoverings[i]->m_CoversSpaces_inverse.push_back( ptr_self );
				}
			}
			if( m_RelatingSpace )
			{
				m_RelatingSpace->m_HasCoverings_inverse.push_back( ptr_self );
			}
		}
		void IfcRelCoversSpaces::unlinkSelf()
		{
			IfcRelConnects::unlinkSelf();
			for( int i=0; i<m_RelatedCoverings.size(); ++i )
			{
				if( m_RelatedCoverings[i] )
				{
					std::vector<weak_ptr<IfcRelCoversSpaces> >& CoversSpaces_inverse = m_RelatedCoverings[i]->m_CoversSpaces_inverse;
					std::vector<weak_ptr<IfcRelCoversSpaces> >::iterator it_CoversSpaces_inverse;
					for( it_CoversSpaces_inverse = CoversSpaces_inverse.begin(); it_CoversSpaces_inverse != CoversSpaces_inverse.end(); ++it_CoversSpaces_inverse)
					{
						shared_ptr<IfcRelCoversSpaces> self_candidate( *it_CoversSpaces_inverse );
						if( self_candidate->getId() == this->getId() )
						{
							CoversSpaces_inverse.erase( it_CoversSpaces_inverse );
							break;
						}
					}
				}
			}
			if( m_RelatingSpace )
			{
				std::vector<weak_ptr<IfcRelCoversSpaces> >& HasCoverings_inverse = m_RelatingSpace->m_HasCoverings_inverse;
				std::vector<weak_ptr<IfcRelCoversSpaces> >::iterator it_HasCoverings_inverse;
				for( it_HasCoverings_inverse = HasCoverings_inverse.begin(); it_HasCoverings_inverse != HasCoverings_inverse.end(); ++it_HasCoverings_inverse)
				{
					shared_ptr<IfcRelCoversSpaces> self_candidate( *it_HasCoverings_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						HasCoverings_inverse.erase( it_HasCoverings_inverse );
						break;
					}
				}
			}
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
