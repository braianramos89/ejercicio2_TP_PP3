#ifndef MAIN_CPP_BARCO_H
#define MAIN_CPP_BARCO_H
#include <iostream>


using namespace std;

class Barco {

private:
    string matricula;
    float eslora;
    int anioFabricacion;

public:

    Barco(string matricula,float eslora, int anioFabricacion);
    ~Barco();
    virtual void mostrar();
    float getEslora();


};

inline float Barco::getEslora() {
    return eslora;
}


#endif //MAIN_CPP_BARCO_H
