#include "empleado.h"

Empleado::Empleado(string nom,float sueldo):Persona(nom){
    setSueldo(sueldo);
}
void Empleado::setSueldo(float newSueldo)
{
    sueldo = newSueldo;
}
void Empleado::imprimir(){
    Persona::imprimir();
    cout <<"Sueldo de = $"<<sueldo<<endl;
}
