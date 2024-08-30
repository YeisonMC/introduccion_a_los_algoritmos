#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int h, opcion;
	int precio = 25;

	cout << "Tipo de pizza [1,2,3]: ";
	cin >> opcion;

	double descuento = (opcion == 1) * (precio - 2.5) + (opcion == 2) * (precio - 3.75) + (opcion == 3) * (precio - 5) ;

	cout << "Precio: " << precio << endl ; 
	cout << "Total a pagar: " << descuento << endl ; 
	h = _getch();
	return 0;
}