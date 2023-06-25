    #ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>
using namespace std;
class Persona
{
public:
    Persona(string);
    virtual void imprimir();   /// const es una referencia que no cambia que maneja a nuestra variable como constante
    void setNombre(const string &newNombre);

private:
    string nombre;
};

#endif // PERSONA_H
