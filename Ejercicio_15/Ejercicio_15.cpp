#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int h, num_entradas;
    char zona, socio;
    double precio_base, descuento_cantidad, descuento_socio, precio_final;

    cout << "Ingresar la zona elegida (V: Vip, P: Platea, E: Popular): ";
    cin >> zona;

    cout << "Ingresar el numero de entrada: ";
    cin >> num_entradas;

    cout << "Es socio de la U (S: si; N: no): ";
    cin >> socio;
    
    precio_base = (zona == 'V' || zona == 'v') * 350.00 + (zona == 'P' || zona == 'p') * 130.00 + (zona == 'E' || zona == 'e') * 50.00;
    descuento_cantidad =  (num_entradas >= 3 && num_entradas <= 6) * 0.05 + (num_entradas >= 7 && num_entradas <= 9) * 0.075 + (num_entradas > 9) * 0.10; 
    descuento_socio =(socio == 'S' || socio == 's') * 0.08;
    precio_final = precio_base * num_entradas * (1 - descuento_cantidad) * (1 - descuento_socio);

    cout << "El monto a pagar es: " << precio_final << endl;

	h = _getch();
	return 0;
}