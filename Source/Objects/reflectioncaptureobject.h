//-----------------------------------------------------------------------------
//           Name: reflectioncaptureobject.h
//      Developer: Wolfire Games LLC
//    Description: 
//        License: Read below
//-----------------------------------------------------------------------------
//
//   Copyright 2022 Wolfire Games LLC
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//
//-----------------------------------------------------------------------------
#pragma once

#include <Objects/object.h>
#include <Graphics/textureref.h>
#include <Asset/Asset/texture.h>

//-----------------------------------------------------------------------------
// Class Definition
//-----------------------------------------------------------------------------

class ReflectionCaptureObject: public Object
{
public:
    EntityType GetType() const override { return _reflection_capture_object; }
    bool Initialize() override;

    void Moved(Object::MoveType type) override;
    void Dispose() override;
    void GetDesc(EntityDescription &desc) const override;
    bool SetFromDesc( const EntityDescription& desc ) override;
    ReflectionCaptureObject();
    void Draw() override;
    ~ReflectionCaptureObject() override;
    void GetDisplayName(char* buf, int buf_size) override;

    bool dirty;
    TextureRef cube_map_ref;
    vec3 avg_color[6];

private:
    int shape;
    int parallax_shape;
};
