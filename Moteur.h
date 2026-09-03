
#ifndef MOTEUR_H
#define MOTEUR_H

/**
 * @file Moteur.h
 * @brief Déclaration de la classe abstraite Moteur
 */

/**
 * @brief Classe abstraite représentant un moteur.
 * Ne peut pas être instanciée directement : seules Electrique et Thermique le peuvent.
 */
class Moteur {
protected:
    int puissance; ///< Puissance du moteur en watts

public:
    /**
     * @brief Constructeur par défaut
     */
    Moteur();

    /**
     * @brief Constructeur avec paramètre
     * @param puissance Puissance du moteur
     */
    Moteur(int puissance);

    /**
     * @brief Destructeur virtuel (obligatoire pour une classe de base polymorphique)
     */
    virtual ~Moteur();

    /**
     * @brief Récupère la puissance du moteur
     * @return La puissance en watts
     */
    int getPuissance() const;

    /**
     * @brief Modifie la puissance du moteur
     * @param puissance La nouvelle puissance
     */
    void setPuissance(int puissance);

    /**
     * @brief Crée une copie polymorphique du moteur (le vrai type, Electrique ou Thermique)
     * @return Un pointeur vers une nouvelle instance clonée
     */
    virtual Moteur* clone() const = 0;
};

#endif