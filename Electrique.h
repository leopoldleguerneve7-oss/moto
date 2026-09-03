
#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include "Moteur.h"

/**
 * @file Electrique.h
 * @brief Déclaration de la classe Electrique
 */

/**
 * @brief Représente un moteur électrique
 */
class Electrique : public Moteur {
private:
    float tensionMax; ///< Tension maximale supportée par le moteur

public:
    /**
     * @brief Constructeur par défaut
     */
    Electrique();

    /**
     * @brief Constructeur avec paramètres
     * @param puissance Puissance du moteur
     * @param tensionMax Tension maximale
     */
    Electrique(int puissance, float tensionMax);

    /**
     * @brief Destructeur
     */
    ~Electrique() override;

    /**
     * @brief Récupère la tension maximale
     * @return La tension maximale
     */
    float getTensionMax() const;

    /**
     * @brief Modifie la tension maximale
     * @param tensionMax La nouvelle tension maximale
     */
    void setTensionMax(float tensionMax);

    /**
     * @brief Crée une copie de ce moteur électrique
     * @return Un pointeur vers une nouvelle instance Electrique
     */
    Moteur* clone() const override;
};

#endif