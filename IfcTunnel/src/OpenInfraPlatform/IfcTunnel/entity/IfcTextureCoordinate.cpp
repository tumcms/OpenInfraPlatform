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
#include "include/IfcSurfaceTexture.h"
#include "include/IfcTextureCoordinate.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// ENTITY IfcTextureCoordinate 
		IfcTextureCoordinate::IfcTextureCoordinate() { m_entity_enum = IFCTEXTURECOORDINATE; }
		IfcTextureCoordinate::IfcTextureCoordinate( int id ) { m_id = id; m_entity_enum = IFCTEXTURECOORDINATE; }
		IfcTextureCoordinate::~IfcTextureCoordinate() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcTextureCoordinate::setEntity( shared_ptr<IfcTunnelEntity> other_entity )
		{
			shared_ptr<IfcTextureCoordinate> other = dynamic_pointer_cast<IfcTextureCoordinate>(other_entity);
			if( !other) { return; }
			m_Maps = other->m_Maps;
		}
		void IfcTextureCoordinate::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCTEXTURECOORDINATE" << "(";
			writeEntityList( stream, m_Maps );
			stream << ");";
		}
		void IfcTextureCoordinate::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcTextureCoordinate::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<1 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcTextureCoordinate, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcTunnelException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>1 ){ std::cout << "Wrong parameter count for entity IfcTextureCoordinate, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReferenceList( args[0], m_Maps, map );
		}
		void IfcTextureCoordinate::setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self_entity )
		{
			IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcTextureCoordinate> ptr_self = dynamic_pointer_cast<IfcTextureCoordinate>( ptr_self_entity );
			if( !ptr_self ) { throw IfcTunnelException( "IfcTextureCoordinate::setInverseCounterparts: type mismatch" ); }
			for( int i=0; i<m_Maps.size(); ++i )
			{
				if( m_Maps[i] )
				{
					m_Maps[i]->m_IsMappedBy_inverse.push_back( ptr_self );
				}
			}
		}
		void IfcTextureCoordinate::unlinkSelf()
		{
			IfcPresentationItem::unlinkSelf();
			for( int i=0; i<m_Maps.size(); ++i )
			{
				if( m_Maps[i] )
				{
					std::vector<weak_ptr<IfcTextureCoordinate> >& IsMappedBy_inverse = m_Maps[i]->m_IsMappedBy_inverse;
					std::vector<weak_ptr<IfcTextureCoordinate> >::iterator it_IsMappedBy_inverse;
					for( it_IsMappedBy_inverse = IsMappedBy_inverse.begin(); it_IsMappedBy_inverse != IsMappedBy_inverse.end(); ++it_IsMappedBy_inverse)
					{
						shared_ptr<IfcTextureCoordinate> self_candidate( *it_IsMappedBy_inverse );
						if( self_candidate->getId() == this->getId() )
						{
							IsMappedBy_inverse.erase( it_IsMappedBy_inverse );
							break;
						}
					}
				}
			}
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
