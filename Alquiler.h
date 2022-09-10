
#ifndef MAIN_CPP_ALQUILER_H
#define MAIN_CPP_ALQUILER_H
#include <iostream>
#include "Barco.h"
#include "Cliente.h"


using namespace std;
class Alquiler {

private:
    int fechaInicio;
    int fechaFin;
    Cliente cliente;
    Barco barco;
    string posicionDeAmarre;

public:
    Alquiler(int , int , Cliente , Barco , string );
    ~Alquiler();
    virtual void mostrar();
    float calcularAlquiler();

};


#endif //MAIN_CPP_ALQUILER_H
