#include "persona.h"

Persona::Persona(string nombre)
{
    setNombre(nombre);
}

void Persona::setNombre(const string &newNombre)
{
    if (newNombre.length()<=0) {
        nombre="Nombre no valido";
    }
    else {
        nombre=newNombre;
    }
}
void Persona::imprimir(){
    cout <<"Nombre = "<<nombre<<endl;
}
