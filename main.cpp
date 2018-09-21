#include <iostream>

int main() {
    char c = 'k';
    int a = 3;
    std::cout << c/a << std::endl;
    std::cout << c*a << std::endl;
    std::cout << c-a << std::endl;
    std::cout << c+a << std::endl;
    std::cout << c/float(a) << std::endl;
    c = c/a;
    std::cout << c << std::endl;
    c = c*a*a;
    std::cout << c << std::endl;
    c = (c/(a^2))+a;
    std::cout << c << std::endl;
    c = c-2*a;
    std::cout << c << std::endl;
    return 0;
}