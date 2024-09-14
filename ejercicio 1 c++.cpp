#include <iostream>
using namespace std;


enum Calificacion { A, B, C, D, F };


Calificacion convertirCalificacion(int puntaje) {
    const int LIMITE_A = 90;
    const int LIMITE_B = 80;
    const int LIMITE_C = 70;
    const int LIMITE_D = 60;

    if (puntaje >= LIMITE_A) {
        return A;
    } else if (puntaje >= LIMITE_B) {
        return B;
    } else if (puntaje >= LIMITE_C) {
        return C;
    } else if (puntaje >= LIMITE_D) {
        return D;
    } else {
        return F;
    }
}


char calificacionALetra(Calificacion cal) {
    switch (cal) {
        case A: return 'A';
        case B: return 'B';
        case C: return 'C';
        case D: return 'D';
        case F: return 'F';
        default: return 'F'; 
    }
}

int main() {
    int puntaje;

    cout << "Ingresa tu calificación numérica (0-100): ";
    cin >> puntaje;

 
    if (puntaje < 0 || puntaje > 100) {
        cout << "Calificación fuera del rango permitido." << endl;
        return 1; 
    }

    
    Calificacion cal = convertirCalificacion(puntaje);

   
    cout << "Tu calificación en letra es: " << calificacionALetra(cal) << endl;

    return 0;
}
