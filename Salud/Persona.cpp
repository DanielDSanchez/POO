#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

class Persona
{
private:
    string tipoDoc, documento, nombre, apellido, sexo;
    double peso, estatura, edad;

public:
    Persona(){};
    Persona(string tipoDoc, string documento, string nombre, string apellido,
            string sexo, double peso, double estatura, double edad);

    void pedirDatos();
    void mostrarPersona();
    void calcularImc();
    bool mayorEdad();
};

Persona::Persona(string tipoDoc, string documento, string nombre, string apellido,
                 string sexo, double peso, double estatura, double edad)
{
    this->tipoDoc = tipoDoc;
    this->documento = documento;
    this->nombre = nombre;
    this->apellido = apellido;
    this->sexo = sexo;
    this->peso = peso;
    this->estatura = estatura;
    this->edad = edad;
}

void Persona::pedirDatos()
{
    cout << "Ingrese el tipo de documento" << endl;
    cin >> this->tipoDoc;

    cout << "Ingrese el documento" << endl;
    cin >> this->documento;

    cout << "Ingrese el nombre" << endl;
    cin >> this->nombre;

    cout << "Ingrese el apellido" << endl;
    cin >> this->apellido;

    cout << "Ingrese el peso" << endl;
    cin >> this->peso;

    cout << "Ingrese la estatura" << endl;
    cin >> this->estatura;

    cout << "Ingrese la edad" << endl;
    cin >> this->edad;

    cout << "Ingrese el sexo" << endl;
    cin >> this->sexo;
}

void Persona::mostrarPersona()
{
    system("cls");
    cout << "Tipo documento: " << this->tipoDoc << endl;
    cout << "Documento: " << this->documento << endl;
    cout << "Nombre: " << this->nombre << endl;
    cout << "Apellido: " << this->apellido << endl;
    cout << "Peso: " << this->peso << endl;
    cout << "Estatura: " << this->estatura << endl;
    cout << "Edad: " << this->edad << endl;
    cout << "Sexo: " << this->sexo << endl;
}

void Persona::calcularImc()
{
    double pesoActual = this->peso / (pow(this->estatura, 2));

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
}

bool Persona::mayorEdad()
{
    return this->edad >= 18;
}