#include "Test.hpp"

#include <iostream>

void printStructInfo11()
{

    std::cout << "\nC++ 11\n";
    A a;
    std::cout << "Size of A: " << sizeof(A) << '\n';
    std::cout << "   Memory locations: m(" << &(a.m)
        << ") n: (" << &(a.n) << ")\n";

    B b;
    std::cout << "Size of B: " << sizeof(B) << '\n';
    std::cout << "   Memory locations: m(" << &(b.m)
        << ") n: (" << &(b.n) << ") o(" << &(b.o) << ")\n";

}

void printStruct2Info11()
{

    std::cout << "\nC++ 11\n";
    A2 a;
    std::cout << "Size of A2: " << sizeof(A2) << '\n';
    std::cout << "   Memory locations: m(" << &(a.m)
        << ") n: (" << &(a.n) << ")\n";

    B2 b;
    std::cout << "Size of B2: " << sizeof(B2) << '\n';
    std::cout << "   Memory locations: m(" << &(b.m)
        << ") n: (" << &(b.n) << ") o(" << &(b.o) << ")\n";

}
