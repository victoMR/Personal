#ifndef ADMIN_H
#define ADMIN_H
#include "empleado.h"

class Admin:public Empleado{

public:
    Admin(string,float,int);
    void imprimir();
    void setHrs(int newHrs);

private:
    int hrs;
};

#endif // ADMIN_H
