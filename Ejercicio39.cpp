#include <iostream>
#include <cstdlib>
using namespace std;

/**
*Ejercicio 39
*
*
*
**/

//@Autor	SebastianRuiz18 	
//@Fecha	20 Sep 2021

int main() {
	int Res, x;
	cout << "Resultados: " << endl;
	do{
		Res = rand() % 3 + 1; // Girar la perinola entre sus 3 prosibles resultados
		cout << Res << " - ";
		x++;
	}while (x < 1000);
	
	cout << endl;
	cout << endl << "El resultado final de la perinola fue: " << Res << " en un total de: " << x << " Giros.";
}
