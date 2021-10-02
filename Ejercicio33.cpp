#include <iostream>
using namespace std;

/**
*Ejercicio 33
*
*Willie Bigstep de los Red Sox tiene una probabilidad de 0.3 de pegar un hit cada vez que batea. 
*Cual es la probabilidad en 50 veces al bat de que su promedio sea menor que 0.250?
*
**/

//@Autor	SebastianRuiz18 	
//@Fecha	17 Sep 2021

void WillieBigstep(){
	double Prob50 = 0.3/50.0;
	double Prom250 = 0.250 * 100 / 0.3;
	cout << "De 50 Hits Willie da: " << Prob50 << "%" << endl;
	cout << "Por lo tanto hay una probabilidad de: " << Prom250 << "% de que su promedio sea menor a 250" << endl;
}

int main() {
	WillieBigstep();
	
	return 0; 
}
