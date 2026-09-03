#include <iostream>
#include "Conducteur.h"
#include "Moto.h"
#include "Electrique.h"
#include "Thermique.h"

/**
 * @file main.cpp
 * @brief Programme principal de test des classes Conducteur/Moto/Moteur
 */

int main() {
    // --- Partie 1 : 1 conducteur + 2 motos (thermique + electrique) ---
    Conducteur c1("Dupont", "Jean", 1998);

    Moto motoElec(new Electrique(15000, 400.0f), "Rouge");
    Moto motoTherm(new Thermique(25000, 650.0f), "Noire");

    c1.addMoto(std::move(motoElec));
    c1.addMoto(std::move(motoTherm));

    std::cout << "=== Etat apres attribution des 2 motos a c1 ===" << std::endl;
    std::cout << c1.toString() << std::endl;

    // --- Partie 2 : 2 nouveaux conducteurs + 1 nouvelle moto, repartition ---
    Conducteur c2("Martin", "Sophie", 2000);
    Conducteur c3("Bernard", "Luc", 1995);

    Moto motoNeuve(new Electrique(18000, 450.0f), "Bleue");

    // On repartit : c1 garde la Rouge, c2 recoit la Noire (extraite de c1), c3 recoit la Bleue (neuve)
    Moto motoNoireExtraite = c1.extraireMoto("Noire");
    c2.addMoto(std::move(motoNoireExtraite));
    c3.addMoto(std::move(motoNeuve));

    std::cout << "=== Etat final apres repartition entre les 3 conducteurs ===" << std::endl;
    std::cout << c1.toString() << std::endl;
    std::cout << c2.toString() << std::endl;
    std::cout << c3.toString() << std::endl;

    return 0;
}