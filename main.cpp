#include <iostream>
#include "Barco.h"
#include "Deportivo.h"
#include "Velero.h"
#include "Yate.h"
#include "Alquiler.h"
#include "Cliente.h"

int main() {


    Cliente cliente1("Juan", "12345678");
    Yate yate1("1234", 10, 2000, 2, 3);
    Velero velero1("1234", 10, 2001, 2);
    Deportivo deportivo1("1234", 10, 2002, 2);
  //  Alquiler alquiler1(10042021,20042021 , cliente1, yate1, "1234");
   // Alquiler alquiler2(02042021,13042021 , cliente1, velero1, "1234");
    Alquiler alquiler3 (10052022, 10062022, cliente1, deportivo1, "1234");

   // alquiler1.mostrar();
  //  alquiler2.mostrar();
    alquiler3.mostrar();





    return 0;
}
