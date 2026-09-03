#include "Electrique.h"

Electrique::Electrique() : Moteur(), tensionMax(0.0f) {
}

Electrique::Electrique(int puissance, float tensionMax)
    : Moteur(puissance), tensionMax(tensionMax) {
}

Electrique::~Electrique() {
}

float Electrique::getTensionMax() const {
    return tensionMax;
}

void Electrique::setTensionMax(float tensionMax) {
    this->tensionMax = tensionMax;
}

Moteur* Electrique::clone() const {
    return new Electrique(*this);
}