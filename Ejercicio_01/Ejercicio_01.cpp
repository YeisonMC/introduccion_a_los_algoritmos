#include <iostream>
#include <conio.h>
#include <string>
using namespace std; 

int main() {

	int h, moneda;

	cout << "Ingresar la cantidad de soles: "; 
	cin >> moneda;

	int moneda_cinco = moneda / 5; 
	moneda = moneda % 5;

	int moneda_dos = moneda / 2; 
	moneda = moneda % 2;

	int moneda_uno = moneda; 

	cout << "Total de monedas: " << moneda <<endl; 
	cout << "Monedas de 5 soles: " << moneda_cinco << endl;
	cout << "Monedas de 2 soles: " << moneda_dos << endl;
	cout << "Monedas de 1 sol: " << moneda_uno << endl;

	h = _getch();
	return 0;
}