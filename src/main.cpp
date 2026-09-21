#include <iostream>
#include <header.h>
#include <cmath>

int main() {
    float a, b, c; // Les coefficients de chque terme de l'équation
    float rac_1, rac_2;
    float delta;
    lire_abc(a, b, c);
    delta = calc_delta(a, b, c);
    // Calculer les racines de l'équation
    if (delta < 0) {
        std::cout << "L'équation n'a pas de racines réelles." << std::endl;
    } else {
        rac_1 = (-b + std::sqrt(delta)) / (2 * a);
        rac_2 = (-b - std::sqrt(delta)) / (2 * a);
        std::cout << "Les racines de l'équation sont : " << rac_1 << " et " << rac_2 << std::endl;
    }
    return 0;
}
