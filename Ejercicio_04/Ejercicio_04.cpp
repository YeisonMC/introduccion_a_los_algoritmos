#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {

	int h, diametro, ingredientes;

	cout << "Ingresar los centimentoros de diametro de la Pizza: " ;
	cin >> diametro; 

	cout << "Ingresar la cantidad de ingredientes extras: " ;
	cin >> ingredientes; 


	double precioPizza = (diametro * 1.5) + (ingredientes * 2.5);

	cout << "El precio de la Pizza es: S/. " << precioPizza;

	h = _getch();
	return 0;
}