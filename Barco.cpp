//
// Created by braian on 10/09/2022.
//

#include "Barco.h"


Barco::Barco(string matricula,float eslora, int anioFabricacion){
    this->matricula=matricula;
    this->eslora=eslora;
    this->anioFabricacion=anioFabricacion;
}

Barco::~Barco() {

}

void Barco::mostrar() {
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Eslora: "<<eslora<<endl;
    cout<<"Anio de fabricacion: "<<anioFabricacion<<endl;
}