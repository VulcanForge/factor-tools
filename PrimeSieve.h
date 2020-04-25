#pragma once

//size_t
#include <cstddef>
//uint64_t
#include <cstdint>
#include <vector>

#include "BitArray.h"

/// <summary>
/// An Eratosthenes prime sieve.
/// </summary>
class PrimeSieve
{
private:
    /// <summary>
    /// The underlying bit array.
    /// </summary>
    BitArray sieve;

    /// <summary>
    /// The upper bound on the numbers sieved.
    /// </summary>
    size_t limit;

    /// <summary>
    /// The prime numbers in [0, limit).
    /// </summary>
    std::vector<uint64_t> primes;

public:
    /// <summary>
    /// Constructs a PrimeSieve over [0, limit).
    /// </summary>
    PrimeSieve (size_t limit);

    /// <summary>
    /// Constructs a PrimeSieve over [0, limit).
    /// </summary>
    /// <param name="verbose">Whether to output progress to std::clog.</param>
    PrimeSieve (size_t limit, bool verbose);

    /// <summary>
    /// Returns the upper bound on the primes sieved.
    /// </summary>
    size_t Limit () const;

    /// <summary>
    /// Returns an iterator to the beginning of the primes in [0, Limit ()).
    /// </summary>
    std::vector<uint64_t>::const_iterator ListBegin () const;

    /// <summary>
    /// Returns an iterator to the end of the primes in [0, Limit ()).
    /// </summary>
    std::vector<uint64_t>::const_iterator ListEnd () const;

    /// <summary>
    /// Returns the number of primes in [0, Limit ()).
    /// </summary>
    size_t Count () const;

    /// <summary>
    /// Returns whether n is prime, if n is in [0, Limit ()).
    /// </summary>
    bool IsPrime (size_t n) const;
};
