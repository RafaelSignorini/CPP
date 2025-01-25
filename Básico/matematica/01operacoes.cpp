#include <iostream>
#include <cmath>

int main() {
    double x = 3.41;
    double y = 4.85;
    double z;

    z = std::max(x, y); // apresenta qual dos valores inseridos é o maior
    std::cout << z << '\n';    

    z = std::min(x, y); // apresenta qual dos valores inseridos é o menor
    std::cout << z << '\n';

    z = pow(x, y);
    std::cout << z << '\n';

    z = sqrt(x);
    std::cout << z << '\n';

    z = abs(-y);
    std::cout << z << '\n';

    z = round(x);
    std::cout << z << '\n';

    z = ceil(x); // arredonda para cima sempre
    std::cout << z << '\n';

    z = floor(y); // arredonda para baixo sempre
    std::cout << z << '\n';

    return 0;
}
