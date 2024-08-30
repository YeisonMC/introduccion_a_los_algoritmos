#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int h, anios;

    char estudios;
    int puntaje = 0;

    cout << "Ingrese la cantidad de años que labora: ";
    cin >> anios;

    cout << "Estudios (P: primaria; S: secundaria; U: universitario; G: posgrado): ";
    cin >> estudios;

    puntaje += 10 * (anios >= 5);
    puntaje += 5 * (anios < 5);

    puntaje += 5 * (estudios == 'P' || estudios == 'p');
    puntaje += 10 * (estudios == 'S' || estudios == 's');
    puntaje += 20 * (estudios == 'U' || estudios == 'u');
    puntaje += 30 * (estudios == 'G' || estudios == 'g');

    cout << "Puntaje Obtenido: " << puntaje << endl;

	h = _getch();
	return 0;
}