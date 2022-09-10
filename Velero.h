
#ifndef MAIN_CPP_VELERO_H
#define MAIN_CPP_VELERO_H
#include <iostream>
#include "Barco.h"

class Velero : public Barco {

private:
    int cantMastiles;

public:
    Velero(string , float , int , int );
    ~Velero();
    void mostrar();
};


#endif //MAIN_CPP_VELERO_H
