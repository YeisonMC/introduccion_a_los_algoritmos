#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int h, edad;
    char modelo, color;
    double precio_base, incremento;

    cout << "Ingresar el modelo del auto (A o B): ";
    cin >> modelo;

    cout << "Ingresar el color del auto (B: blanco; M: metalizado; O: otros): ";
    cin >> color;

    cout << "Ingresar la edad del conductor: ";
    cin >> edad;

   
    precio_base = (modelo == 'A' && color == 'B') * 240.50 + (modelo == 'A' && color == 'M') * 330.00 + (modelo == 'A' && color == 'O') * 270.50 + (modelo == 'B' && color == 'B') * 300.00 + (modelo == 'B' && color == 'M') * 360.50 + (modelo == 'B' && color == 'O') * 330.00 ;
    incremento = (edad < 31) * 0.25 + (edad > 65) * 0.10;
   
    double precio_final = precio_base + incremento;

    cout << "Precio del seguro: " << precio_final << endl;

	h = _getch();
	return 0;
}