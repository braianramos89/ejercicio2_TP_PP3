//
// Created by braian on 10/09/2022.
//

#include "Deportivo.h"

Deportivo::Deportivo(string matricula, float eslora, int anioDeFabricacion, int cvPotencia) : Barco(matricula,eslora,anioDeFabricacion) {
    this->cvPotencia=cvPotencia;
}

Deportivo::~Deportivo() {

}

void Deportivo::mostrar() {
    Barco::mostrar();
    cout<<"Potencia: "<<cvPotencia<<endl;
}
