#include <iostream>
using namespace std;

/**
*Ejercicio 34
*
*Un politico arroja 10,000 panfleto sobre uan ciudad de 2,000 manzanas.
*Suponiendo que cada manzana tiene la misma probabilidad de recibir panfleto.
*Cual es la probabilidad de que 1  casa no reciba panfleto?
*
**/

//@Autor	SebastianRuiz18 	
//@Fecha	17 Sep 2021

void Panfleto(){
	int ProbRecibir = 10000/2000;
	int ProbNoRecibir = 100 - ProbRecibir;
	cout << "De 10,000 Panfletos el: " << ProbRecibir << "% de las cuadras recibiran panfletos." << endl;
	cout << "Por lo tanto hay una probabilidad de: " << ProbNoRecibir << "% de las cuadras que no reciban panfletos" << endl;
}

int main() {
	Panfleto();
	
	return 0; 
}
