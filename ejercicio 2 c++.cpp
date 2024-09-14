#include <iostream>
using namespace std;


enum TipoEmpleado { Junior, Senior, Manager };


double calcularSalarioSemanal(TipoEmpleado tipo, int horasTrabajadas) {
    const double TARIFA_JUNIOR = 15.0;
    const double TARIFA_SENIOR = 25.0;
    const double TARIFA_MANAGER = 40.0;
    const int HORAS_SEMANALES = 40;
    const double TARIFA_EXTRA = 1.5; 

    double tarifaPorHora;

    
    switch (tipo) {
        case Junior:
            tarifaPorHora = TARIFA_JUNIOR;
            break;
        case Senior:
            tarifaPorHora = TARIFA_SENIOR;
            break;
        case Manager:
            tarifaPorHora = TARIFA_MANAGER;
            break;
        default:
            tarifaPorHora = 0.0; 
    }

   
    if (horasTrabajadas <= HORAS_SEMANALES) {
        return horasTrabajadas * tarifaPorHora;
    } else {
        int horasExtras = horasTrabajadas - HORAS_SEMANALES;
        return (HORAS_SEMANALES * tarifaPorHora) + (horasExtras * tarifaPorHora * TARIFA_EXTRA);
    }
}

int main() {
    int tipoEmpleado;
    int horasTrabajadas;

    
    cout << "Seleccione el tipo de empleado (0: Junior, 1: Senior, 2: Manager): ";
    cin >> tipoEmpleado;

   
    if (tipoEmpleado < 0 || tipoEmpleado > 2) {
        cout << "Tipo de empleado inválido." << endl;
        return 1; 
    }
    cout << "Ingrese la cantidad de horas trabajadas en la semana: ";
    cin >> horasTrabajadas;

  
    double salario = calcularSalarioSemanal(static_cast<TipoEmpleado>(tipoEmpleado), horasTrabajadas);
    cout << "El salario semanal es: $" << salario << endl;

    return 0;
}
