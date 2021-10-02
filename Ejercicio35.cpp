#include <iostream>
#include <cstdlib>
using namespace std;

/**
*Ejercicio 35
*
*Hay 23 integrantes en un grupo al azar. La probabilidad de que 2 o mas de los integrantes tengan la misma fecha de nacimiento (Mes y Dia)
* es de 0.5.
*
*Al tener 23 nacimientos aleatorios debemos determinar si 2 o mas de ellos tienen la misma fecha.
*
**/

//@Autor	SebastianRuiz18 	
//@Fecha	17 Sep 2021

int main() {
	int x;
	int y;
	int ArrGrupo[24][2];
	
	cout << "Integrantes  |Mes	 |Dia|" << endl;
	
	for (x = 1;x<=23;x++){
		ArrGrupo[x][0]= rand() % 12 + 1; // Numero aleatorio de 1-12
		if (ArrGrupo[x][0] == 1 || ArrGrupo[x][0] == 3 || ArrGrupo[x][0] == 5 || ArrGrupo[x][0] == 7 || ArrGrupo[x][0] == 8 || ArrGrupo[x][0] == 10 || ArrGrupo[x][0] == 12){
			ArrGrupo[x][1]= rand() % 31 + 1; // Numero aleatorio de 1-31
		}
		else if (ArrGrupo[x][0] == 4 || ArrGrupo[x][0] == 6 || ArrGrupo[x][0] == 9 || ArrGrupo[x][0] == 11){
			ArrGrupo[x][1]= rand() % 30 + 1; // Numero aleatorio de 1-30
		}
		else {
			ArrGrupo[x][1]= rand() % 28 + 1; // Numero aleatorio de 1-28;
		}
		cout << x << "  ........  " << ArrGrupo[x][0] << "  ........  " << ArrGrupo[x][1] << endl;
	}
	
	// Comparamos Fechas
	x = 2;
	y = 1;
	do {
		if (ArrGrupo[y][0] == ArrGrupo[x][0] && ArrGrupo[y][1] == ArrGrupo [x][1])
		{
			cout << "Los integrantes:" << y << " y " << x << "Tienen la misma fecha de nacimiento" << endl;
		}
		else
		{
			x++;
			y++;
		}
	}
	while (x <= 23);
	
}
