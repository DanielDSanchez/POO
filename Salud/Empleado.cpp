#include <iostream>
#include "./Persona.cpp"
using namespace std;

class Empleado : Persona
{
private:
    string cargo, departamento;
    double valorHora, horasTrabajadas;

public:
    Empleado(){};
    double calcularHonorarios();
    void mostrarPersona();
};

double Empleado::calcularHonorarios()
{
    double totalPorHora = this->valorHora * this->horasTrabajadas;
    return totalPorHora - ((totalPorHora * 0.966) / 100);
}

void Empleado::mostrarPersona()
{
    this->mostrarPersona();
    cout << "Cargo: " << this->cargo << endl;
}