#ifndef ALUMNO_H
#define ALUMNO_H
#include "persona.h"

class Alumno: public Persona{

public:
    Alumno(string,int,string);
    void imprimir();
    void setCuatri(int newCuatri);

    void setCarrera(const string &newCarrera);

private:
    int cuatri;
    string carrera;
};

#endif // ALUMNO_H
