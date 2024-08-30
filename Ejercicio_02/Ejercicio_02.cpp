#include <iostream>
#include <conio.h>
#include <string>
#include <math.h>
using namespace std;

int main() {

	int h;
	int x1, x2, y1, y2; 

	cout << "Ingresar la coordenada del punto (x1): ";
	cin >> x1;

	cout <<"Ingresar la coordenada del punto (y1): ";
	cin >> y1; 

	cout << "Ingresar la coordenada del punto (x2): ";
	cin >> x2;

	cout <<"Ingresar la coordenada del punto (y2): " ;
	cin >> y2; 

	double distancia = sqrt(pow((x2 - x1), 2)  + (pow((y2 - y1 ) ,2)));

	cout << "la disctancia es: " << distancia; 

	h = _getch();
	return 0;
}