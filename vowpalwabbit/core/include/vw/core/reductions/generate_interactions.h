// Copyright (c) by respective owners including Yahoo!, Microsoft, and
// individual contributors. All rights reserved. Released under a BSD (revised)
// license as described in the file LICENSE.

#pragma once

#include "vw/core/vw_fwd.h"

#include <memory>
#include <set>
#include <vector>

namespace VW
{
namespace reductions
{
std::shared_ptr<VW::LEARNER::learner> generate_interactions_setup(VW::setup_base_i& stack_builder);
}
}  // namespace VW
