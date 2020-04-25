#pragma once

//uint64_t
#include <cstdint>

/// <summary>
/// A prime power.
/// </summary>
struct PrimePower
{
    /// <summary>
    /// The prime number.
    /// </summary>
    uint64_t prime;

    /// <summary>
    /// The power.
    /// </summary>
    uint64_t power;

    /// <summary>
    /// Constructs a PrimePower.
    /// </summary>
    /// <param name="prime">The prime number.</param>
    /// <param name="power">The power.</param>
    PrimePower (uint64_t prime, uint64_t power);
};
