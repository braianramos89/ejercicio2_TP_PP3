//
// Created by braian on 10/09/2022.
//

#include "Velero.h"

Velero::Velero(string matricula, float eslora, int anioDeFabricacion, int cantMastiles) : Barco(matricula,eslora,anioDeFabricacion) {
    this->cantMastiles=cantMastiles;
}

Velero::~Velero() {

}

void Velero::mostrar() {
    Barco::mostrar();
    cout<<"Cantidad de mastiles: "<<cantMastiles<<endl;
}
