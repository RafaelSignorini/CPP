#include <iostream>
#include <windows.h>

template<typename ArgOne, typename ArgTwo>
ArgOne sum(ArgOne argOne, ArgTwo argTwo) {
    return argOne + argTwo;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << sum<float, int>(1.5, 2);

    return 0;
}
