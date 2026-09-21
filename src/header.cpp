#include <iostream>
#include <header.h>

// Definition des fonctions
float calc_delta(float a, float b, float c){
     return (b * b) - (4.0f * a * c);
    }

void lire_abc(float& a, float& b, float& c){
    std::cout << "Saisissez la valeur de a : ";
    std::cin >> a;
    
    // Sécurité pour s'assurer que 'a' n'est pas nul si c'est une équation du 2nd degré
    while (a == 0.0f) {
        std::cout << "Le coefficient 'a' ne doit pas être nul pour une équation du 2nd degré. Recommencez : ";
        std::cin >> a;
    }

    std::cout << "Saisissez la valeur de b : ";
    std::cin >> b;

    std::cout << "Saisissez la valeur de c : ";
    std::cin >> c;

}
