#include <iostream>
using namespace std;

/**
*Ejercicio 31
*
*Cual es la probabilidad de que se termine con mas de 1000 dolares al apostar 1 dolar por minuto en 1 hora 
*con presupuesto de 1000 dolares.
*
**/

//@Autor	SebastianRuiz18 	
//@Fecha	17 Sep 2021

int main() {
	float Beneficio, Perdida, Resultado;
	Beneficio = ((0.47368421052) * (1 * 60) * 1 * 1); //Las veces estimadas que se gana.
	Perdida = ((0.52631578947) * (1 * 60) * 1); //Las veces estimadas que se pierde.
	Resultado = 1000 + (Beneficio - Perdida); //Resultado final para ver si se gana o pierde.
	
	// Desplegamos en pantalla los resultados
	cout << "Se aposto 1 dolar por segundo durante 1 hora con un presupuesto de 1000 dolares." << endl;
	cout << "Hay 18/38 de Ganar al apostar al Negro y 20/38 de Perder." << endl;
	cout << "Ganaste: $" << Beneficio << endl;
	cout << "Perdiste: $" << Perdida << endl;
	cout << "Terminaste con: $" << Resultado << " Dolares";
	return 0;
}

