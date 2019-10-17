#pragma once

#include <typed-geometry/common/assert.hh>
#include <typed-geometry/detail/macros.hh>

namespace tg
{
/// interval arithmetic
/// use #include <typed-geometry/feature/interval.hh> for all features
/// NOTE:
///   * intervals cannot be compared
///   * intervals represent a closed interval [min, max]
///   * unbounded intervals can use +inf and -inf (though all actual values are finite)
template <class T>
struct interval;

template <class T>
struct interval
{
    T min = {};
    T max = {};

    constexpr interval() = default;
    explicit constexpr interval(T v) : min(v), max(v) {}
    constexpr interval(T min, T max) : min(min), max(max) { TG_CONTRACT(min <= max); }
};
}
