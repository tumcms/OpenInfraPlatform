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

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "OpenInfraPlatform/IfcRoad/model/shared_ptr.h"
#include "OpenInfraPlatform/IfcRoad/model/IfcRoadObject.h"
#include "IfcPresentationItem.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		class IfcBoolean;
		class IfcIdentifier;
		class IfcCartesianTransformationOperator2D;
		class IfcTextureCoordinate;
		class IfcSurfaceStyleWithTextures;
		//ENTITY
		class IfcSurfaceTexture : public IfcPresentationItem
		{
		public:
			IfcSurfaceTexture();
			IfcSurfaceTexture( int id );
			~IfcSurfaceTexture();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcRoadEntity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcSurfaceTexture"; }


			// IfcPresentationItem -----------------------------------------------------------

			// IfcSurfaceTexture -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcBoolean>								m_RepeatS;
			shared_ptr<IfcBoolean>								m_RepeatT;
			shared_ptr<IfcIdentifier>							m_Mode;						//optional
			shared_ptr<IfcCartesianTransformationOperator2D>		m_TextureTransform;			//optional
			std::vector<shared_ptr<IfcIdentifier> >				m_Parameter;				//optional
			// inverse attributes:
			std::vector<weak_ptr<IfcTextureCoordinate> >			m_IsMappedBy_inverse;
			std::vector<weak_ptr<IfcSurfaceStyleWithTextures> >	m_UsedInStyles_inverse;
		};
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform

