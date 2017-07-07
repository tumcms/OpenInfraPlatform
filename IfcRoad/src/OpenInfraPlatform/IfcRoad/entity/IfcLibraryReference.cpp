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
#include "include/IfcExternalReferenceRelationship.h"
#include "include/IfcIdentifier.h"
#include "include/IfcLabel.h"
#include "include/IfcLanguageId.h"
#include "include/IfcLibraryInformation.h"
#include "include/IfcLibraryReference.h"
#include "include/IfcRelAssociatesLibrary.h"
#include "include/IfcText.h"
#include "include/IfcURIReference.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcLibraryReference 
		IfcLibraryReference::IfcLibraryReference() { m_entity_enum = IFCLIBRARYREFERENCE; }
		IfcLibraryReference::IfcLibraryReference( int id ) { m_id = id; m_entity_enum = IFCLIBRARYREFERENCE; }
		IfcLibraryReference::~IfcLibraryReference() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcLibraryReference::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcLibraryReference> other = dynamic_pointer_cast<IfcLibraryReference>(other_entity);
			if( !other) { return; }
			m_Location = other->m_Location;
			m_Identification = other->m_Identification;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_Language = other->m_Language;
			m_ReferencedLibrary = other->m_ReferencedLibrary;
		}
		void IfcLibraryReference::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCLIBRARYREFERENCE" << "(";
			if( m_Location ) { m_Location->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Language ) { m_Language->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ReferencedLibrary ) { stream << "#" << m_ReferencedLibrary->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcLibraryReference::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcLibraryReference::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcLibraryReference, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcLibraryReference, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Location = IfcURIReference::readStepData( args[0] );
			m_Identification = IfcIdentifier::readStepData( args[1] );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			m_Language = IfcLanguageId::readStepData( args[4] );
			readEntityReference( args[5], m_ReferencedLibrary, map );
		}
		void IfcLibraryReference::setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self_entity )
		{
			IfcExternalReference::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcLibraryReference> ptr_self = dynamic_pointer_cast<IfcLibraryReference>( ptr_self_entity );
			if( !ptr_self ) { throw IfcRoadException( "IfcLibraryReference::setInverseCounterparts: type mismatch" ); }
			if( m_ReferencedLibrary )
			{
				m_ReferencedLibrary->m_HasLibraryReferences_inverse.push_back( ptr_self );
			}
		}
		void IfcLibraryReference::unlinkSelf()
		{
			IfcExternalReference::unlinkSelf();
			if( m_ReferencedLibrary )
			{
				std::vector<weak_ptr<IfcLibraryReference> >& HasLibraryReferences_inverse = m_ReferencedLibrary->m_HasLibraryReferences_inverse;
				std::vector<weak_ptr<IfcLibraryReference> >::iterator it_HasLibraryReferences_inverse;
				for( it_HasLibraryReferences_inverse = HasLibraryReferences_inverse.begin(); it_HasLibraryReferences_inverse != HasLibraryReferences_inverse.end(); ++it_HasLibraryReferences_inverse)
				{
					shared_ptr<IfcLibraryReference> self_candidate( *it_HasLibraryReferences_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						HasLibraryReferences_inverse.erase( it_HasLibraryReferences_inverse );
						break;
					}
				}
			}
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
