#include <iostream>

int main()
{
    int x { 5 };
    int y { ++x }; // x is incremented to 6, x is evaluated to the value 6, and 6 is assigned to y

    std::cout << x << ' ' << y << '\n';

    int w { 5 };
    int z { w++ }; // w is incremented to 6, copy of original w is evaluated to the value 5, and 5 is assigned to z

    std::cout << w << ' ' << z << '\n';
    return 0;
}