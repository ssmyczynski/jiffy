#include "fmt/format.h"

#define BEGIN_C extern "C" {
#define END_C }

BEGIN_C

int
format_double(unsigned char* buf, size_t size, size_t* len, double val)
{
    *len = fmt::format_to_n((char*)buf, size, FMT_STRING("{}"), val).size;
    return 1;
}

int
format_int64(unsigned char* buf, size_t size, size_t* len, int64_t val) 
{
    *len = fmt::format_to_n((char*)buf, size, FMT_STRING("{}"), val).size;
    return 1;
}

END_C
