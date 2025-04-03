#include "EstadoFoco.hpp"
#include <iostream>

class Foco
{
private:
EstadoFoco estado;

public:
    Foco() {
        estado = EstadoFoco :: Apagado;
    }
    ~Foco() {}
    void Encender(){
        estado = EstadoFoco :: Encendido;

    }
    void Apagar(){
        estado = EstadoFoco :: Apagado;

    }
    void Imprimir(){
        switch (estado)
        {
        case EstadoFoco::Encendido:
std::cout<<"*";
            break;
        case EstadoFoco::Apagado:
        std::cout<<"o";
        default: throw "EstadoFoco no identificado";
            break;
        }
        std::cout << "A";
    }

    void Alternar(){
            if (estado == EstadoFoco::Encendido)
            {
                estado =EstadoFoco::Apagado;
            }else{
                estado == EstadoFoco::Encendido;
            }
    }

};