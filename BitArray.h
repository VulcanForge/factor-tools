#pragma once

//size_t
#include <cstddef>
//uint64_t
#include <cstdint>
#include <vector>

/// <summary>
/// An array of single-bit elements.
/// </summary>
class BitArray
{
private:
    /// <summary>
    /// The underlying storage.
    /// </summary>
    std::vector<uint64_t> storage;

    /// <summary>
    /// The number of elements.
    /// </summary>
    size_t count;

public:
    /// <summary>
    /// Constructs a BitArray with a given number of elements.
    /// </summary>
    BitArray (size_t count);
    
    /// <summary>
    /// Constructs a BitArray with a given number of elements all initialized to a default value.
    /// </summary>
    BitArray (size_t count, bool defaultValue);

    /// <summary>
    /// Returns the value of the element at a given index.
    /// </summary>
    bool Get (size_t index) const;

    /// <summary>
    /// Sets the value of the element at a given index.
    /// </summary>
    void Set (size_t index, bool value);

    /// <summary>
    /// Returns the number of elements.
    /// </summary>
    size_t Count () const;
};
