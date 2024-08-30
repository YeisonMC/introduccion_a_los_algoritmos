#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int h;

    long long codigo;
    cout << "Ingresar codigo del empleado: ";
    cin >> codigo;

    int segundos = codigo % 100;
    int minutos = (codigo / 100) % 100;
    int hora = (codigo / 10000) % 100;
    int apellido_materno = (codigo / 1000000) % 100;
    int apellido_paterno = (codigo / 100000000) % 100;
    int nombre = (codigo / 10000000000) % 100;

    char inicial_nombre = nombre;
    char inicial_paterno = apellido_paterno;
    char inicial_materno = apellido_materno;

    bool llego_tarde = (hora > 9) || (hora == 9 && minutos > 0) || (hora == 9 && minutos == 0 && segundos > 0);
    char verificar_llegada = (llego_tarde == 1) * 'V' + (llego_tarde == 0) * 'F';

    cout << "Hora de entrada: " << hora << endl;
    cout << "Minuto de entrada: " << minutos << endl;
    cout << "Segundos de entrada: " << segundos << endl;
    cout << "Su nombre empieza con la letra: " << inicial_nombre << endl;
    cout << "Su apellido paterno inicia con la letra: " << inicial_paterno << endl;
    cout << "Su apellido materno inicia con la letra: " << inicial_materno << endl;
    cout << "¿Llego tarde? " << verificar_llegada << endl;
    //cout << "¿Llego tarde? " << (llego_tarde ? "V" : "F") << endl;

	h = _getch();
	return 0;
}