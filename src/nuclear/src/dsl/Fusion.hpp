/*
 * MIT License
 *
 * Copyright (c) 2014 NUClear Contributors
 *
 * This file is part of the NUClear codebase.
 * See https://github.com/Fastcode/NUClear for further info.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef NUCLEAR_DSL_FUSION_HPP
#define NUCLEAR_DSL_FUSION_HPP

#include "../threading/ReactionHandle.hpp"
#include "fusion/BindFusion.hpp"
#include "fusion/GetFusion.hpp"
#include "fusion/GroupFusion.hpp"
#include "fusion/InlineFusion.hpp"
#include "fusion/PoolFusion.hpp"
#include "fusion/PostRunFusion.hpp"
#include "fusion/PreRunFusion.hpp"
#include "fusion/PreconditionFusion.hpp"
#include "fusion/PriorityFusion.hpp"
#include "fusion/ScopeFusion.hpp"

namespace NUClear {
namespace dsl {

    /// All of the words from a reaction handle "fused" together into one type
    template <typename... Words>
    struct Fusion
        : fusion::BindFusion<Words...>
        , fusion::GetFusion<Words...>
        , fusion::GroupFusion<Words...>
        , fusion::InlineFusion<Words...>
        , fusion::PoolFusion<Words...>
        , fusion::PostRunFusion<Words...>
        , fusion::PreRunFusion<Words...>
        , fusion::PreconditionFusion<Words...>
        , fusion::PriorityFusion<Words...>
        , fusion::ScopeFusion<Words...> {};

}  // namespace dsl
}  // namespace NUClear

#endif  // NUCLEAR_DSL_FUSION_HPP
