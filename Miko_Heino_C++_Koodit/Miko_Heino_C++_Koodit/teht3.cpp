#include <iostream>

int main() {
    int x = 15;
    std::cout << "x: " << x << '\n';

    int* y;
    std::cout << "x: " << x << '\n';

    y = &x;
    std::cout << "x: " << x << '\n';
    
    *y = *y + 3;
    std::cout << "x: " << x << '\n';

    int z = 2;
    std::cout << "x: " << x << '\n';
    
    int* w;
    std::cout << "x: " << x << '\n';
    
    w = y;
    std::cout << "x: " << x << '\n';
    
    y = 0;
    std::cout << "x: " << x << '\n';
    
    y = &z;
    std::cout << "x: " << x << '\n';
    
    *w = *w + *y;
    std::cout << "x: " << x << '\n';
    
    int t[] = { 9, 10 };
    std::cout << "x: " << x << '\n';
    
    y = t;
    std::cout << "x: " << x << '\n';
    
    *w += *y;
    std::cout << "x: " << x << '\n';
    
    y++;
    std::cout << "x: " << x << '\n';
    
    *w += *y;
    std::cout << "x: " << x << '\n';

    std::cout << "x: " << x << '\n';

    return 0;
}
