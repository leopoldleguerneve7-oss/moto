#include "Conducteur.h"
#include <sstream>
#include <stdexcept>

Conducteur::Conducteur() : nom(""), prenom(""), anneeNaissance(0) {
}

Conducteur::Conducteur(const std::string& nom, const std::string& prenom, int anneeNaissance)
    : nom(nom), prenom(prenom), anneeNaissance(anneeNaissance) {
}

std::string Conducteur::getNom() const {
    return nom;
}

std::string Conducteur::getPrenom() const {
    return prenom;
}

int Conducteur::getAnneeNaissance() const {
    return anneeNaissance;
}

void Conducteur::addMoto(Moto newMoto) {
    mesMotos.push_back(std::move(newMoto));
}

void Conducteur::rmMoto(Moto rmMoto) {
    for (auto it = mesMotos.begin(); it != mesMotos.end(); ++it) {
        if (it->getCouleur() == rmMoto.getCouleur()) {
            mesMotos.erase(it);
            break;
        }
    }
}

Moto Conducteur::extraireMoto(const std::string& couleur) {
    for (auto it = mesMotos.begin(); it != mesMotos.end(); ++it) {
        if (it->getCouleur() == couleur) {
            Moto extraite = std::move(*it);
            mesMotos.erase(it);
            return extraite;
        }
    }
    throw std::runtime_error("Aucune moto de cette couleur chez ce conducteur");
}

std::string Conducteur::toString() const {
    std::ostringstream oss;
    oss << "Conducteur: " << prenom << " " << nom << " (" << anneeNaissance << ")\n";
    oss << "Nombre de motos: " << mesMotos.size() << "\n";
    for (const auto& moto : mesMotos) {
        oss << "  - " << moto.toString() << "\n";
    }
    return oss.str();
}