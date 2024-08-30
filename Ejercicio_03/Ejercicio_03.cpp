#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int h, neumaticos;

	cout << "Numero de neumaticos a comprar: ";
	cin >> neumaticos;

	double oferta = (neumaticos < 3) * (neumaticos * 145) + (neumaticos >= 3 && neumaticos <= 5) * (neumaticos * 138) + (neumaticos > 5) * (neumaticos * 135);    

	//cout << "Cantidad de neumaticos comprados: " << neumaticos << endl;
	cout << "Precio total a pagar: S/. " << oferta << endl;

	h = _getch();
	return 0;
}