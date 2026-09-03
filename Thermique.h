
#ifndef THERMIQUE_H
#define THERMIQUE_H

#include "Moteur.h"

/**
 * @file Thermique.h
 * @brief Déclaration de la classe Thermique
 */

/**
 * @brief Représente un moteur thermique
 */
class Thermique : public Moteur {
private:
    float cylindree; ///< Cylindrée du moteur

public:
    /**
     * @brief Constructeur par défaut
     */
    Thermique();

    /**
     * @brief Constructeur avec paramètres
     * @param puissance Puissance du moteur
     * @param cylindree Cylindrée du moteur
     */
    Thermique(int puissance, float cylindree);

    /**
     * @brief Destructeur
     */
    ~Thermique() override;

    /**
     * @brief Récupère la cylindrée
     * @return La cylindrée
     */
    float getCylindree() const;

    /**
     * @brief Modifie la cylindrée
     * @param newCylindree La nouvelle cylindrée
     */
    void setCylindree(float newCylindree);

    /**
     * @brief Crée une copie de ce moteur thermique
     * @return Un pointeur vers une nouvelle instance Thermique
     */
    Moteur* clone() const override;
};

#endif