
#ifndef MAIN_CPP_CLIENTE_H
#define MAIN_CPP_CLIENTE_H
#include <iostream>

using namespace std;
class Cliente {

private:
    string nombre;
    string dni;

public:
    Cliente(string , string);
    ~Cliente();
    void mostrar();

};


#endif //MAIN_CPP_CLIENTE_H
