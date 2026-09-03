#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H

#include <string>
#include <vector>
#include "Moto.h"

/**
 * @file Conducteur.h
 * @brief Déclaration de la classe Conducteur
 */

/**
 * @brief Représente un conducteur possédant une ou plusieurs motos (agrégation)
 */
class Conducteur {
private:
    std::string nom;
    std::string prenom;
    int anneeNaissance;
    std::vector<Moto> mesMotos;

public:
    Conducteur();
    Conducteur(const std::string& nom, const std::string& prenom, int anneeNaissance);

    std::string getNom() const;
    std::string getPrenom() const;
    int getAnneeNaissance() const;

    /**
     * @brief Ajoute une moto au conducteur (transfert de propriété)
     * @param newMoto La moto à ajouter
     */
    void addMoto(Moto newMoto);

    /**
     * @brief Retire une moto du conducteur (identifiée par sa couleur)
     * @param rmMoto Une moto "prototype" servant uniquement à identifier la couleur à retirer
     */
    void rmMoto(Moto rmMoto);

    /**
     * @brief Retire une moto par couleur et la retourne (pour la transférer à un autre conducteur)
     * @param couleur Couleur de la moto à extraire
     * @return La moto extraite, prête à être déplacée ailleurs
     */
    Moto extraireMoto(const std::string& couleur);

    std::string toString() const;
};

#endif