#include <iostream>
#include "../Persona.cpp"
using namespace std;

class Inicio
{
public:
    Inicio(){};
    void init();
};

void Inicio::init()
{
    Persona persona;
    persona.pedirDatos();
    persona.mostrarPersona();
    persona.calcularImc();
    cout << "Es mayor de edad? " << (persona.mayorEdad() ? "Si" : "No") << endl;
}