#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int h;
	double x, y;

	cout << "Ingresar la coordenada X: ";
	cin >> x;

	cout << "Ingresar la coordenada Y: ";
	cin >> y;

	int cuadrante = (x > 0 && y > 0) * 1 + (x < 0 && y > 0) * 2 + (x < 0 && y < 0) * 3 + (x > 0 && y < 0) * 4;

	cout << (cuadrante != 0 ?
		"El punto se encuentra en el cuadrante " + to_string(cuadrante) :
		"El punto está en un eje o en el origen. Por favor, ingrese coordenadas válidas.") << endl;

	h = _getch();
	return 0;
}