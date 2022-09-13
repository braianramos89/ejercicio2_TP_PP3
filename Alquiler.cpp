//
// Created by braian on 10/09/2022.
//

#include "Alquiler.h"
#include "ctime"

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

    float dF,mF,aF,diasF;
    dF=this->fechaFin/1000000;//dia final
    mF= ((this->fechaFin/1000000) - int(dF))*100;//mes final ;
    aF=((((this->fechaFin/1000000) - int(dF))*100)-int (mF))*10000 ;//año final
    diasF = (aF*365)+((mF-1)*30)+dF;
    int dI,mI,aI,diasI;
    dI=this->fechaInicio/1000000;//dia inicial
    mI= ((this->fechaInicio/1000000) - dI)*100;//mes inicial ;
    aI=((((this->fechaInicio/1000000) - dI)*100)-mI)*10000 ;//año inicial
    diasI = (aI*365)+((mI-1)*30)+dI;
    dias=(diasI-diasF);
/*
    if(mmF==mmI){
        dias = (ddF-ddI)+1;
    } else{
        int diasMes = (30-ddI)+ddF+1;
        meses= mmF-mmI;
        dias=diasMes+(meses*30);
    }*/
    /*time_t feche11 = fechaFin;
    time_t feche22 = fechaInicio;
    dias = (feche11-feche22)/864000;*/
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