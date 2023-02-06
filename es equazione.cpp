#include <iostream>
#include<cmath>

double calcola_delta(double a, double b, double c) {
    return b * b - 4 * a * c;
}

int main() {
    double a, b, c;

    std::cout << "Inserisci  a, b e c dell'equazione di secondo grado:" << std::endl;
    std::cin >> a >> b >> c;

    double delta = calcola_delta(a, b, c);

    if (delta < 0) {
        std::cout << "L'equazione non ha soluzioni ." << std::endl;
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);

        std::cout << "Le radici dell'equazione sono x1 = " << x1 << " e x2 = " << x2 << std::endl;
    }

    return 0;
}