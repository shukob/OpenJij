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

#ifndef OPENJIJ_RESULT_GET_SOLUTION_HPP__
#define OPENJIJ_RESULT_GET_SOLUTION_HPP__

#include <graph/all.hpp>
#include <system/all.hpp>

namespace openjij {
    namespace result {

        /**
         * @brief get solution of classical ising system (no Eigen implementation)
         *
         * @tparam GraphType graph type
         * @param system classical ising system without Eigen implementation
         *
         * @return solution
         */
        template<typename GraphType>
        const graph::Spins get_solution(const system::ClassicalIsing<GraphType, false>& system){
            return system.spin;
        }

        /**
         *a @brief get solution of classical ising system (with Eigen implementation)
         *
         * @tparam GraphType graph type
         * @param system classical ising system with Eigen implementation
         *
         * @return solution
         */
        template<typename GraphType>
        const graph::Spins get_solution(const system::ClassicalIsing<GraphType, true>& system){
            //convert from Eigen::Vector to std::vector
            graph::Spins ret_spins(system.num_spins);
            for(std::size_t i=0; i<system.num_spins; i++){
                ret_spins[i] = system.spin(i);
            }
            return ret_spins;
        }

        //template<typename GraphType>
        //const graph::Spins get_solution(const system::TransverseIsing<GraphType>& system){
        //    graph::Spins ret_spins(system.trotter_spins[0].size());
        //}

    } // namespace result
} // namespace openjij

#endif