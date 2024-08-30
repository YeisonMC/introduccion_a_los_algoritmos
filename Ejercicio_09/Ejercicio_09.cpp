#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	long long codigo; 
	int h, dia, mes, anio, producto, perecible;

	cout << "Ingrese codigo de barras: ";
	cin >> codigo;

	//codigo = 120820206712; 

	dia = (codigo / 10000000000) % 100;
	mes = (codigo / 100000000) % 100;
	anio = (codigo / 10000) % 10000;
	producto = (codigo / 100) % 100;
	perecible = codigo % 100;
	 
	char tipoProducto = producto;

	cout << "Dia de vencimiento: " << dia << endl;
	cout << "Mes de vencimiento: " << mes << endl;
	cout << "Anio de vencimiento: " << anio << endl;
	cout << "El tipo de producto es: " << tipoProducto << endl;
	cout << "Producto perecible (0: No; 1: Si): " << (perecible == 0 ? 1 : 0) << endl;

	h = _getch();
	return 0;
}