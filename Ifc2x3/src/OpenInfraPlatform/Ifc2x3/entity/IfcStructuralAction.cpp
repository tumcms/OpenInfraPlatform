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

#include "model/Ifc2x3Exception.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "Ifc2x3EntityEnums.h"
#include "include/IfcGlobalOrLocalEnum.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcObjectPlacement.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcProductRepresentation.h"
#include "include/IfcRelAssigns.h"
#include "include/IfcRelAssignsToProduct.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelConnectsStructuralActivity.h"
#include "include/IfcRelDecomposes.h"
#include "include/IfcRelDefines.h"
#include "include/IfcStructuralAction.h"
#include "include/IfcStructuralLoad.h"
#include "include/IfcStructuralReaction.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcStructuralAction 
		IfcStructuralAction::IfcStructuralAction() { m_entity_enum = IFCSTRUCTURALACTION; }
		IfcStructuralAction::IfcStructuralAction( int id ) { m_id = id; m_entity_enum = IFCSTRUCTURALACTION; }
		IfcStructuralAction::~IfcStructuralAction() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcStructuralAction::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcStructuralAction> other = dynamic_pointer_cast<IfcStructuralAction>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_ObjectType = other->m_ObjectType;
			m_ObjectPlacement = other->m_ObjectPlacement;
			m_Representation = other->m_Representation;
			m_AppliedLoad = other->m_AppliedLoad;
			m_GlobalOrLocal = other->m_GlobalOrLocal;
			m_DestabilizingLoad = other->m_DestabilizingLoad;
			m_CausedBy = other->m_CausedBy;
		}
		void IfcStructuralAction::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCSTRUCTURALACTION" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Representation ) { stream << "#" << m_Representation->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_AppliedLoad ) { stream << "#" << m_AppliedLoad->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_GlobalOrLocal ) { m_GlobalOrLocal->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_DestabilizingLoad == false ) { stream << ".F."; }
			else if( m_DestabilizingLoad == true ) { stream << ".T."; }
			stream << ",";
			if( m_CausedBy ) { stream << "#" << m_CausedBy->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcStructuralAction::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcStructuralAction::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<11 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcStructuralAction, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>11 ){ std::cout << "Wrong parameter count for entity IfcStructuralAction, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			m_ObjectType = IfcLabel::readStepData( args[4] );
			readEntityReference( args[5], m_ObjectPlacement, map );
			readEntityReference( args[6], m_Representation, map );
			readEntityReference( args[7], m_AppliedLoad, map );
			m_GlobalOrLocal = IfcGlobalOrLocalEnum::readStepData( args[8] );
			if( _stricmp( args[9].c_str(), ".F." ) == 0 ) { m_DestabilizingLoad = false; }
			else if( _stricmp( args[9].c_str(), ".T." ) == 0 ) { m_DestabilizingLoad = true; }
			readEntityReference( args[10], m_CausedBy, map );
		}
		void IfcStructuralAction::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcStructuralActivity::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcStructuralAction> ptr_self = dynamic_pointer_cast<IfcStructuralAction>( ptr_self_entity );
			if( !ptr_self ) { throw Ifc2x3Exception( "IfcStructuralAction::setInverseCounterparts: type mismatch" ); }
			if( m_CausedBy )
			{
				m_CausedBy->m_Causes_inverse.push_back( ptr_self );
			}
		}
		void IfcStructuralAction::unlinkSelf()
		{
			IfcStructuralActivity::unlinkSelf();
			if( m_CausedBy )
			{
				std::vector<weak_ptr<IfcStructuralAction> >& Causes_inverse = m_CausedBy->m_Causes_inverse;
				std::vector<weak_ptr<IfcStructuralAction> >::iterator it_Causes_inverse;
				for( it_Causes_inverse = Causes_inverse.begin(); it_Causes_inverse != Causes_inverse.end(); ++it_Causes_inverse)
				{
					shared_ptr<IfcStructuralAction> self_candidate( *it_Causes_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						Causes_inverse.erase( it_Causes_inverse );
						break;
					}
				}
			}
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
