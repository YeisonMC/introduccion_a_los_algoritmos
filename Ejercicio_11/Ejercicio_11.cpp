#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int h, edad, sueldo;
    char nacionalidad;

    sueldo = 2500;

    cout << "Ingresar la edad del jugador: ";
    cin >> edad;

    cout << "Ingresar la nacionalidad del jugador (E: Extranjero; N: Nacional): ";
    cin >> nacionalidad;


    sueldo += 500 * (nacionalidad == 'E' || nacionalidad == 'e');

   
    sueldo += 1400 * (edad >= 15 && edad <= 20);
    sueldo += 1500 * (edad >= 21 && edad <= 25);
    sueldo += 1200 * (edad >= 26 && edad <= 30);
    sueldo += 800 * (edad < 15 || edad > 30);

    cout << "El sueldo del jugador es: " << sueldo << " soles" << endl;

	h = _getch();
	return 0;
}