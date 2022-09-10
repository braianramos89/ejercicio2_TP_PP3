//
// Created by braian on 10/09/2022.
//

#include "Alquiler.h"

Alquiler::Alquiler(int fechaInicio , int fechaFin, Cliente cliente, Barco barco, string posicionDeAmarre): cliente(cliente),barco(barco){

    this->fechaInicio=fechaInicio;
    this->fechaFin=fechaFin;
    this->posicionDeAmarre=posicionDeAmarre;

}

Alquiler::~Alquiler() {

}

float Alquiler::calcularAlquiler() {
    float precio=1200;
    int dias=0;
    int meses=0;

    if (fechaInicio==fechaFin){
        return precio;
    }

    int ddF,mmF,dmF;
    dmF=this->fechaFin/10000;
    ddF=dmF/100;
    mmF=((dmF/100)-ddF)*100;
    int ddI,mmI,dmI;
    dmI=this->fechaInicio/10000;
    ddI=dmI/100;
    mmI=((dmI/100)-ddI)*100;

    if(mmF==mmI){
        dias = (ddF-ddI)+1;
    } else{
        int diasMes = (30-ddI)+ddF+1;
        meses= mmF-mmI;
        dias=diasMes+(meses*30);
    }

    if (dias<0){
        return precio;
    }else{

        precio = precio + (dias * (barco.getEslora()*10));

        return precio;

    }

}

void Alquiler::mostrar() {
    cout<<"Fecha de inicio: "<<fechaInicio<<endl;
    cout<<"Fecha de fin: "<<fechaFin<<endl;
    cout<<"Posicion de amarre: "<<posicionDeAmarre<<endl;
    cout<<"Precio: "<<calcularAlquiler()<<endl;
    cliente.mostrar();
    barco.mostrar();
}