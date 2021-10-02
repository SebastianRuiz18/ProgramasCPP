#include <iostream>
using namespace std;

/**
*Ejercicio 40
*
*500 cajas con 500 monedas y 1 moneda falsa cada una. Cual es la probabilidad de sacar 1 moneda falsa?
*
**/

//@Autor	SebastianRuiz18 	
//@Fecha	20 Sep 2021

int main() {
	double CajaT, Mon, MonT, FeikT;
	double Prob;
	
	CajaT = 500;
	Mon = 500;
	MonT = CajaT * Mon;
	FeikT = 1 * CajaT;
	Prob = (FeikT / MonT) * 100;
	
	cout << "Hay: " << MonT << " Monedas totales, de las cuales hay: " << FeikT << " monedas falsas." << endl;
	cout << "Por lo tanto " << Prob << "% de que saquen una falsa";
	return 0;
}

