//-----------------------------------------------------------------------------
//           Name: detailmapinfo.h
//      Developer: Wolfire Games LLC
//    Description: 
//        License: Read below
//-----------------------------------------------------------------------------
//
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

#include <Internal/path_set.h>

#include <string>

struct DetailMapInfo {
    std::string colorpath;
    std::string normalpath;
    std::string materialpath;
    
    inline bool operator==(const DetailMapInfo& other) const {
        return colorpath == other.colorpath &&
               normalpath == other.normalpath &&
               materialpath == other.materialpath;
    }
    
    void Print();
    void ReturnPaths(PathSet &path_set);
};
