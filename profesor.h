#ifndef PROFESOR_H
#define PROFESOR_H
#include "empleado.h"

class Profesor: public Empleado{

public:
    Profesor(string, float, int);
    void setHrs(int newHrs);
    void imprimir();
private:
    int hrs;

};

#endif // PROFESOR_H
