//
// Created by braian on 10/09/2022.
//

#include "Yate.h"

Yate::Yate(string matricula, float eslora , int anioDeFabricacion, int cvPotencia , int cantCamarotes) : Barco(matricula,eslora,anioDeFabricacion) {
    this->cvPotencia=cvPotencia;
    this->cantCamarotes=cantCamarotes;
}

Yate::~Yate() {

}

void Yate::mostrar() {
    Barco::mostrar();
    cout<<"Potencia: "<<cvPotencia<<endl;
    cout<<"Cantidad de camarotes: "<<cantCamarotes<<endl;
}