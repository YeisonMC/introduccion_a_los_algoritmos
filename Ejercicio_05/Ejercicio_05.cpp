#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int h, horas;

	cout << "Ingresar las horas trabajadas: ";
	cin >> horas; 

	double salario = (horas <= 40) * (horas * 16) + (horas > 40) * (40 * 16 + (horas - 40) * 20);

	cout <<"El salario semanal es: " << salario;


	h = _getch();
	return 0;
}