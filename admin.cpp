#include "admin.h"

Admin::Admin(string nom, float sueldo,int hr):Empleado(nom,sueldo){
    setHrs(hr);
}
void Admin::setHrs(int newHrs)
{
    hrs = newHrs;
}
void Admin::imprimir(){
    Empleado::imprimir();
    cout << "Horas trabajadas = "<<hrs<<endl;
}
