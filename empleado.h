#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "persona.h"
class Empleado :public Persona{

public:
    Empleado(string,float);
    virtual void imprimir();
    void setSueldo(float newSueldo);

private:
    float sueldo;
};

#endif // EMPLEADO_H
