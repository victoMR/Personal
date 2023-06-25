#include <QCoreApplication>
#include "admin.h"
#include "profesor.h"
#include "alumno.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Persona *prof=new Profesor("Goyo",5000.00,24);     /// estos son punteros
    Persona *admin=new Admin("",3500.00,12);
    Persona *alum=new Alumno("Victor",2,"TI");

    cout <<endl<<"Profesor"<<endl;
    prof->imprimir();
    cout <<endl<<"Admin"<<endl;
    admin->imprimir();
    cout <<endl<<"Alumno"<<endl;
    alum->imprimir();

    return a.exec();
}
