
#ifndef MAIN_CPP_DEPORTIVO_H
#define MAIN_CPP_DEPORTIVO_H
#include <iostream>
#include "Barco.h"

using namespace std;

class Deportivo : public Barco {

private:
    int cvPotencia;
public:
    Deportivo(string , float , int , int );
    ~Deportivo();
    void mostrar();

};


#endif //MAIN_CPP_DEPORTIVO_H
