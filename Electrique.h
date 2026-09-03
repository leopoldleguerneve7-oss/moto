#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include "Moteur.h"

class Electrique : public Moteur {
private:
    float tensionMax;

public:
    Electrique();
    Electrique(int puissance, float tensionMax);
    ~Electrique() override;

    float getTensionMax() const;
    void setTensionMax(float tensionMax);

    Moteur* clone() const override;
};

#endif