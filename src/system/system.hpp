//    Copyright 2019 Jij Inc.

//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at

//        http://www.apache.org/licenses/LICENSE-2.0

//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.

#ifndef OPENJIJ_SYSTEM_SYSTEM_HPP__
#define OPENJIJ_SYSTEM_SYSTEM_HPP__

namespace openjij {
    namespace system {
        struct classical_system {};
        struct quantum_system {};

        template<typename System>
        struct get_system_type {
            using type = typename System::system_type;
        };
    } // namespace system
} // namespace openjij

#endif