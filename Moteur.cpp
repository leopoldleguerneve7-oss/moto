
#include "Moteur.h"

Moteur::Moteur() : puissance(0) {
}

Moteur::Moteur(int puissance) : puissance(puissance) {
}

Moteur::~Moteur() {
}

int Moteur::getPuissance() const {
    return puissance;
}

void Moteur::setPuissance(int puissance) {
    this->puissance = puissance;
}