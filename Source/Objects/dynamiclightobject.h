//-----------------------------------------------------------------------------
//           Name: dynamiclightobject.h
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

//-----------------------------------------------------------------------------
// Class Definition
//-----------------------------------------------------------------------------

class DynamicLightObject: public Object
{
public:
    EntityType GetType() const override { return _dynamic_light_object; }
    void Draw() override;
    bool Initialize() override;

    void Moved(Object::MoveType type) override;
    void Dispose() override;
    void GetDesc(EntityDescription &desc) const override;
    bool SetFromDesc( const EntityDescription& desc ) override;
    vec3 GetTint() const;
    float GetOverbright() const; 
	DynamicLightObject();
	~DynamicLightObject() override;
    void ReceiveObjectMessageVAList( OBJECT_MSG::Type type, va_list args ) override;
	void SetEnabled(bool val) override;

private:
    int light_id_;

    vec3 color;
    float overbright;
};
