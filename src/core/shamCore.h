#ifndef core_H
#define DEVEL

// data
#include <stdint.h>
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef short f16;
typedef float f32;
typedef double f64;


// constants
#define BASE_WIDTH 1920
#define BASE_HEIGHT 1080


// logging
#ifdef DEVEL
    #include <stdio.h>
    #define LOG_FMT_M(fmt, x) fprintf(stderr, fmt, x)
#endif


#endif // !core_H
#define core_H
