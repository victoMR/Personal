#include "profesor.h"

Profesor::Profesor(string nom,float sueldo,int hr):Empleado(nom,sueldo){
    setHrs(hr);
}
void Profesor::setHrs(int newHrs)
{
    if (newHrs<1) {
        hrs=0;
    }
    else {
        hrs = newHrs;
    }
}
void Profesor::imprimir(){
    Empleado::imprimir();
    cout << "Horas frente a el grupo  = "<<hrs<<endl;
}
