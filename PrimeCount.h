#pragma once

//uint64_t
#include <cstdint>

/// <summary>
/// Returns Legendre's approximation for the number of primes in [0, n].
/// </summary>
uint64_t LegendreCount (uint64_t n);

/// <summary>
/// Returns the logarithmic integral approximation for the number of primes in [0, n].
/// </summary>
uint64_t LiCount (uint64_t n);
