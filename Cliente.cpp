//
// Created by braian on 10/09/2022.
//

#include "Cliente.h"


Cliente::Cliente(string nombre, string dni) {
    this->nombre=nombre;
    this->dni=dni;
}

Cliente::~Cliente() {

}

void Cliente::mostrar() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"DNI: "<<dni<<endl;
}