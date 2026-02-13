#ifndef _SHORTYPES_H
#define _SHORTYPES_H

#include <assert.h>
#include <stddef.h>
#include <stdint.h>

// Variable size types

typedef intptr_t  isize;
typedef size_t    usize;

typedef unsigned char      uchar;
typedef unsigned short     ushort;
typedef unsigned int       uint;
typedef unsigned long      ulong;
typedef unsigned long long uloong;
typedef long long          loong;


// Fixed size types

typedef int8_t   i8;
typedef int16_t  i16;
typedef int32_t  i32;
typedef int64_t  i64;

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

#if _MSC_VER
typedef _int128 i128;
typedef unsigned _int128 u128;
#elif __GNUC__ || __clang__
typedef __int128 i128;
typedef unsigned __int128 u128;

typedef _Float16 f16;
typedef __float128 f128;
#endif
typedef float f32;
typedef double f64;
typedef long double f80;


// Statically check type sizes to catch weird compiler implementation specific bugs

#define ASSERT_SIZE_MSG(type, expected_size) \
	static_assert(sizeof(type) == expected_size, "type " #type " has a different size than expected (" #expected_size " bytes).")
#define ASSERT_LEAST_SIZE_MSG(type, expected_size) \
	static_assert(sizeof(type) >= expected_size, "type " #type " has a size smaller than expected (at least " #expected_size " bytes).")
#define ASSERT_EQ_SIZE_MSG(type1, type2) \
	static_assert(sizeof(type1) == sizeof(type2), "type " #type1 " has a different size than type " #type2 ", which should be the same.")

#if __GNUC__ || __clang__ || _MSC_VER
ASSERT_SIZE_MSG(i128, 16);
ASSERT_SIZE_MSG(u128, 16);
#if __GNUC__ || __clang__
ASSERT_SIZE_MSG(f16, 2);
ASSERT_SIZE_MSG(f128, 16);
#endif
#endif
ASSERT_SIZE_MSG(f32, 4);
ASSERT_SIZE_MSG(f64, 8);
ASSERT_LEAST_SIZE_MSG(f80, 10);
ASSERT_EQ_SIZE_MSG(isize, usize);

#endif /* _SHORTYPES_H */
