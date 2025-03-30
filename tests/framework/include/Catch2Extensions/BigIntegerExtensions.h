#pragma once

#include <catch2/catch_tostring.hpp>
#include <Crypto/Models/BigInteger.h>

// Add StringMaker specialization for CBigInteger
namespace Catch {
    template<size_t NUM_BYTES, class ALLOC>
    struct StringMaker<CBigInteger<NUM_BYTES, ALLOC>> {
        static std::string convert(const CBigInteger<NUM_BYTES, ALLOC>& value) {
            return value.ToHex();
        }
    };
}
