#include "Moto.h"
#include <sstream>

/**
 * @file Moto.cpp
 * @brief Implémentation de la classe Moto
 */

Moto::Moto(Moteur* moteur, std::string couleur)
    : poids(150), couleur(std::move(couleur)), nom(""), moteur(moteur) {
}

Moto::~Moto() {
    delete moteur;
}

Moto::Moto(Moto&& autre) noexcept
    : poids(autre.poids), couleur(std::move(autre.couleur)),
      nom(std::move(autre.nom)), moteur(autre.moteur) {
    autre.moteur = nullptr;
}

Moto& Moto::operator=(Moto&& autre) noexcept {
    if (this != &autre) {
        delete moteur;
        poids = autre.poids;
        couleur = std::move(autre.couleur);
        nom = std::move(autre.nom);
        moteur = autre.moteur;
        autre.moteur = nullptr;
    }
    return *this;
}

int Moto::getPoids() const {
    return poids;
}

void Moto::setPoids(int poids) {
    this->poids = poids;
}

std::string Moto::getCouleur() const {
    return couleur;
}

Moteur* Moto::getMoteur() const {
    return moteur;
}

float Moto::getAcceleration() const {
    if (moteur == nullptr || poids == 0) {
        return 0.0f;
    }
    const float vitesseMS = 50.0f / 3.6f; // 50 km/h en m/s
    return static_cast<float>(moteur->getPuissance()) / (static_cast<float>(poids) * vitesseMS);
}

std::string Moto::toString() const {
    std::ostringstream oss;
    oss << "Moto " << couleur << ", poids: " << poids << " kg";
    if (moteur != nullptr) {
        oss << ", puissance moteur: " << moteur->getPuissance() << " W";
    }
    oss << ", acceleration a 50km/h: " << getAcceleration() << " m/s2";
    return oss.str();
}