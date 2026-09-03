#include "Moto.h"
#include <iostream>

int main() {
    Moteur* m = new Moteur(15000);
    Moto moto(m, "rouge");
    moto.setPoids(180);
    std::cout << moto.toString() << std::endl;
    return 0;
}