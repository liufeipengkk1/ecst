// Copyright (c) 2015-2016 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0
// http://vittorioromeo.info | vittorio.romeo@outlook.com

#pragma once

#include <ecst/config.hpp>
#include <ecst/aliases.hpp>
#include "./executor.hpp"

ECST_INNER_PARALLELISM_COMPOSER_NAMESPACE
{
    namespace fixed_threshold
    {
        namespace impl
        {
            template <                     // .
                typename TEntityThreshold, // .
                typename TStrategyGreater, // .
                typename TStrategyLower    // .
                >
            struct parameters
            {
                using strategy_greater = TStrategyGreater;
                using strategy_lower = TStrategyLower;

                template <typename TParameters>
                using executor_type = executor<TParameters>;

                static constexpr auto entity_threshold()
                {
                    return TEntityThreshold::value;
                }
            };
        }
    }
}
ECST_INNER_PARALLELISM_COMPOSER_NAMESPACE_END
