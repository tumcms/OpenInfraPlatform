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
#include "../../model/shared_ptr.h"
#include "../../model/IfcBridgeObject.h"
#include "IfcSurfaceTexture.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		class IfcInteger;
		//ENTITY
		class IfcPixelTexture : public IfcSurfaceTexture
		{
		public:
			IfcPixelTexture();
			IfcPixelTexture( int id );
			~IfcPixelTexture();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcBridgeEntity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcBridgeEntity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcPixelTexture"; }


			// IfcPresentationItem -----------------------------------------------------------

			// IfcSurfaceTexture -----------------------------------------------------------
			// attributes:
			//  bool											m_RepeatS;
			//  bool											m_RepeatT;
			//  shared_ptr<IfcIdentifier>					m_Mode;						//optional
			//  shared_ptr<IfcCartesianTransformationOperator2D>	m_TextureTransform;			//optional
			//  std::vector<shared_ptr<IfcIdentifier> >		m_Parameter;				//optional
			// inverse attributes:
			//  std::vector<weak_ptr<IfcTextureCoordinate> >	m_IsMappedBy_inverse;
			//  std::vector<weak_ptr<IfcSurfaceStyleWithTextures> >	m_UsedInStyles_inverse;

			// IfcPixelTexture -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcInteger>						m_Width;
			shared_ptr<IfcInteger>						m_Height;
			shared_ptr<IfcInteger>						m_ColourComponents;
			std::vector<const char* >					m_Pixel;
		};
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform

