
#include "Thermique.h"

/**
 * @file Thermique.cpp
 * @brief Implémentation de la classe Thermique
 */

Thermique::Thermique() : Moteur(), cylindree(0.0f) {
}

Thermique::Thermique(int puissance, float cylindree)
    : Moteur(puissance), cylindree(cylindree) {
}

Thermique::~Thermique() {
}

float Thermique::getCylindree() const {
    return cylindree;
}

void Thermique::setCylindree(float newCylindree) {
    cylindree = newCylindree;
}

Moteur* Thermique::clone() const {
    return new Thermique(*this);
}