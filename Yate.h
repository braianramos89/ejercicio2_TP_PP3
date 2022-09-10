#ifndef MAIN_CPP_YATE_H
#define MAIN_CPP_YATE_H
#include <iostream>
#include "Barco.h"

class Yate : public Barco {

private:
    int cvPotencia;
    int cantCamarotes;

public:
    Yate(string matricula, float eslora , int anioDeFabricacion , int cvPotencia, int cantCamarotes);
    ~Yate();
    void mostrar();

};


#endif //MAIN_CPP_YATE_H
