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

struct A2
{
    uint16_t m{3};
    bool n;
};

struct B2 : public A2
{
    bool o;
};

void printStruct2Info11();

