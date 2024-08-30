#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int h, litros;
	double costo; 

	cout << "Ingresar el numero de litros consumidos: ";
	cin >> litros; 

	costo = 20; 

	costo += (litros > 50) * ((litros <= 200) * (litros - 50) * 2 + (litros > 200) * 150 * 2);
	costo += (litros > 200) * ((litros - 200) * 3.5);

	cout << "El gasto total de agua es: S/. " << costo  << endl;

	h = _getch();
	return 0;
}