#ifndef MOTO_H
#define MOTO_H

#include <string>
#include "Moteur.h"

class Moto {
private:
    int poids;
    std::string couleur;
    std::string nom;
    Moteur* moteur;

public:
    Moto(Moteur* moteur, std::string couleur);
    ~Moto();

    Moto(const Moto&) = delete;
    Moto& operator=(const Moto&) = delete;

    int getPoids() const;
    void setPoids(int poids);
    std::string getCouleur() const;
    Moteur* getMoteur() const;

    float getAcceleration() const;
    std::string toString() const;
};

#endif