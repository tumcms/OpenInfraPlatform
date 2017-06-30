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
#include "include/IfcFace.h"
#include "include/IfcSurfaceTexture.h"
#include "include/IfcTextureMap.h"
#include "include/IfcTextureVertex.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// ENTITY IfcTextureMap 
		IfcTextureMap::IfcTextureMap() { m_entity_enum = IFCTEXTUREMAP; }
		IfcTextureMap::IfcTextureMap( int id ) { m_id = id; m_entity_enum = IFCTEXTUREMAP; }
		IfcTextureMap::~IfcTextureMap() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcTextureMap::setEntity( shared_ptr<IfcBridgeEntity> other_entity )
		{
			shared_ptr<IfcTextureMap> other = dynamic_pointer_cast<IfcTextureMap>(other_entity);
			if( !other) { return; }
			m_Maps = other->m_Maps;
			m_Vertices = other->m_Vertices;
			m_MappedTo = other->m_MappedTo;
		}
		void IfcTextureMap::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCTEXTUREMAP" << "(";
			writeEntityList( stream, m_Maps );
			stream << ",";
			writeEntityList( stream, m_Vertices );
			stream << ",";
			if( m_MappedTo ) { stream << "#" << m_MappedTo->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcTextureMap::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcTextureMap::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcTextureMap, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcBridgeException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>3 ){ std::cout << "Wrong parameter count for entity IfcTextureMap, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReferenceList( args[0], m_Maps, map );
			readEntityReferenceList( args[1], m_Vertices, map );
			readEntityReference( args[2], m_MappedTo, map );
		}
		void IfcTextureMap::setInverseCounterparts( shared_ptr<IfcBridgeEntity> ptr_self_entity )
		{
			IfcTextureCoordinate::setInverseCounterparts( ptr_self_entity );
		}
		void IfcTextureMap::unlinkSelf()
		{
			IfcTextureCoordinate::unlinkSelf();
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
