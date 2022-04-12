
#include "lib/Test.hpp"

#include <iostream>

void printStructInfo14()
{
    std::cout << "\nC++ 14\n";
    A a;
    std::cout << "Size of A: " << sizeof(A) << '\n';
    std::cout << "   Memory locations: m(" << &(a.m)
        << ") n: (" << &(a.n) << ")\n";

    B b;
    std::cout << "Size of B: " << sizeof(B) << '\n';
    std::cout << "   Memory locations: m(" << &(b.m)
        << ") n: (" << &(b.n) << ") o(" << &(b.o) << ")\n";

}

int main()
{

    printStructInfo11();
    printStructInfo14();

}

