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
#include "shared_ptr.h"

namespace OpenInfraPlatform
{
    namespace Ifc4
    {
		// @brief: finds the first occurrence of T in vector
        template<class T, class U>
        bool findFirstInVector( std::vector<shared_ptr<U> > vec, shared_ptr<T>& ptr )
        {
            typename std::vector<shared_ptr<U> >::iterator it_trim = vec.begin();
            for( ; it_trim != vec.end(); ++it_trim )
            {
                shared_ptr<U> item = *(it_trim);
                if( dynamic_pointer_cast<T>(item) )
                {
                    ptr = dynamic_pointer_cast<T>(item);
                    return true;
                }
            }
            return false;
        }
    } // end namespace Ifc4
} // end namespace OpenInfraPlatform
