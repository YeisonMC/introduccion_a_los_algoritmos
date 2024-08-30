#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int h, l1, l2, l3;

	cout << "Ingrese los 3 lados: ";
	cin >> l1 >> l2 >> l3; 
	

	bool equilatero = (l1 == l2) && (l2 == l3);
	bool isosceles = (l1 == l2) || (l2 == l3) || (l3 == l1);
	bool escaleno = (l1 != l2) && (l2 != l3) && (l3 != l1);
 
	char test_equilatero = (equilatero == 0) * 'F' + (equilatero == 1) * 'V'; 

	cout << "Equilatero: " << test_equilatero  << endl;
	cout << "Isosceles: " << (isosceles && !equilatero ? "V" : "F") << endl;
	cout << "Escaleno: " << (escaleno ? "V" : "F") << endl;

	h = _getch();
	return 0;
}