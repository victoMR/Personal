#include "alumno.h"

Alumno::Alumno(string nom,int cua, string car):Persona(nom){
    setCuatri(cua);
    setCarrera(car);
}
void Alumno::setCuatri(int newCuatri)
{                                                                                                                              //   (a || b)       (a && b)
    if (newCuatri<1 || newCuatri>11 ) {  // el || es un or  ///  en c++ se pueden usar or" ||" y and "&&" indefinidamente en un if
        cuatri=0;
    }
    else {
        cuatri = newCuatri;
    }
}
void Alumno::setCarrera(const string &newCarrera)
{
    if (newCarrera.size()<=0) {
        carrera="Carrera no valida ";
    }
    carrera = newCarrera;
}
void Alumno::imprimir(){
    Persona::imprimir();
    cout <<"Cuatrimestre = "<<cuatri<<endl;
    cout <<"Carrera = "<<carrera<<endl;
}
