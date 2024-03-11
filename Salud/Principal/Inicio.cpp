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

    double pesoActual = persona.getImc();
    if (pesoActual < 20)
    {
        cout << "El peso esta por debajo de lo ideal" << endl;
    }
    else if (pesoActual >= 20 && pesoActual <= 25)
    {
        cout << "El peso es ideal" << endl;
    }
    else
    {
        cout << "Tiene sobrepeso" << endl;
    }

    cout << "Es mayor de edad? " << (persona.mayorEdad() ? "Si" : "No") << endl;
}