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


    if (obtenerDias()<0 ||fechaInicio==fechaFin){
        return precio;
    }else{

        precio = precio + (obtenerDias() * (barco.getEslora()*10));

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

int Alquiler::obtenerDias(){
    int dias=0;
    int dF,mF,aF,diasF;
    dF = this->fechaFin/1000000;//dia final
    mF = this->fechaFin/10000 - int(dF)*100;//mes final ;
    aF = this->fechaFin - int(dF)*1000000-int (mF)*10000 ;//año final
    diasF = ((mF-1)*30) + (mF-2)/2 + (-1+(mF-1)/6)*((mF-1) % 2) + (1-(min(mF-1,1)/1)) + min(1, mF/3)*(1 - min(aF%4, 1)) + dF; //calculo de dias;
    int dI,mI,aI,diasI;
    dI = this->fechaInicio/1000000;//dia inicial
    mI = (this->fechaInicio/10000) - dI*100;//mes inicial ;
    aI = this->fechaInicio - dI*1000000-mI*10000;//año inicial
    diasI = ((mI-1)*30) + (mI-2)/2 + (-1+(mI-1)/6)*((mI-1) % 2) + (1-(min(mI-1,1)/1)) + min(1, mI/3)*(1 - min(aI%4, 1)) + dI; //calculo de dias
    //dias = (diasF-diasI);
    dias = (aF-aI)*365+((aF-aI+(aI+3)%4)/4); //contribucion a la diferencia en dias de anio
    dias += diasF - diasI;
    return dias;
}