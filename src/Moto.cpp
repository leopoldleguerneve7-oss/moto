#include "Moto.h"
#include <sstream>

Moto::Moto(Moteur* moteur, std::string couleur)
    : poids(0), couleur(couleur), nom(""), moteur(moteur) {}

Moto::~Moto() {
    delete moteur;
}

int Moto::getPoids() const { return poids; }
void Moto::setPoids(int p) { poids = p; }
std::string Moto::getCouleur() const { return couleur; }
Moteur* Moto::getMoteur() const { return moteur; }

float Moto::getAcceleration() const {
    const float vitesse_ms = 50.0f * 1000.0f / 3600.0f;
    return static_cast<float>(moteur->getPuissance()) / (poids * vitesse_ms);
}

std::string Moto::toString() const {
    std::ostringstream oss;
    oss << "Moto " << nom << " (" << couleur << "), poids: " << poids
        << " kg, puissance moteur: " << moteur->getPuissance() << " W"
        << ", acceleration a 50km/h: " << getAcceleration() << " m/s2";
    return oss.str();
}