#include <cstdint>

struct A
{
    uint16_t m;
    bool n;
};

struct B : public A
{
    bool o;
};

void printStructInfo11();

