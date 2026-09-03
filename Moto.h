#ifndef MOTO_H
#define MOTO_H

#include <string>
#include "Moteur.h"

/**
 * @file Moto.h
 * @brief Déclaration de la classe Moto
 */

/**
 * @brief Représente une moto, possédant son propre moteur (composition)
 */
class Moto {
private:
    int poids;
    std::string couleur;
    std::string nom;
    Moteur* moteur;

public:
    /**
     * @brief Construit une moto à partir d'un moteur (dont elle devient propriétaire) et d'une couleur
     * @param moteur Pointeur vers le moteur (Electrique ou Thermique), la Moto en prend possession
     * @param couleur Couleur de la moto
     */
    Moto(Moteur* moteur, std::string couleur);

    /**
     * @brief Détruit la moto et libère son moteur
     */
    ~Moto();

    // Copie interdite : une moto ne peut pas avoir deux propriétaires de son moteur
    Moto(const Moto&) = delete;
    Moto& operator=(const Moto&) = delete;

    /**
     * @brief Constructeur de déplacement : transfère la propriété du moteur
     */
    Moto(Moto&& autre) noexcept;

    /**
     * @brief Affectation par déplacement
     */
    Moto& operator=(Moto&& autre) noexcept;

    int getPoids() const;
    void setPoids(int poids);
    std::string getCouleur() const;
    Moteur* getMoteur() const;

    /**
     * @brief Calcule l'accélération théorique à 50 km/h : a = P / (m * v)
     * @return L'accélération en m/s²
     */
    float getAcceleration() const;

    /**
     * @brief Représentation textuelle de la moto
     * @return Chaîne descriptive
     */
    std::string toString() const;
};

#endif