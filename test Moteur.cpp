
#include <iostream>
#include "Electrique.h"
#include "Thermique.h"

int main() {
    Electrique e(15000, 400.0f);
    Thermique t(25000, 650.0f);

    std::cout << "Moteur electrique - Puissance: " << e.getPuissance()
              << " W, Tension max: " << e.getTensionMax() << " V" << std::endl;

    std::cout << "Moteur thermique - Puissance: " << t.getPuissance()
              << " W, Cylindree: " << t.getCylindree() << " cm3" << std::endl;

    // Test du clonage polymorphique
    Moteur* clone = e.clone();
    std::cout << "Clone puissance: " << clone->getPuissance() << " W" << std::endl;
    delete clone;

    return 0;
}