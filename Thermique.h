#ifndef THERMIQUE_H
#define THERMIQUE_H

#include "Moteur.h"

class Thermique : public Moteur {
private:
    float cylindree;

public:
    Thermique();
    Thermique(int puissance, float cylindree);
    ~Thermique() override;

    float getCylindree() const;
    void setCylindree(float newCylindree);

    Moteur* clone() const override;
};

#endif