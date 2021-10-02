#include <iostream>
#include <cstdlib>
#include <cmath>
#include <math.h>
using namespace std;
 
/**
*Ejercicio 38
*
*Calcular la probabilidad de 3 personas en una habitacion con 12 personas tengan la misma fecha de nacimiento.
*
**/

//@Autor	SebastianRuiz18 	
//@Fecha	20 Sep 2021
 
int fact(int n){ // Para calcular Factoriales
     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}

int nPr(int n, int r){
	return fact(n)/(fact(n-r));
}

int nCr (int n, int r)
{
	return fact(n)/(fact(r)*(n-r));
}

int main()
{
	long sub;
	long calc;
	sub = (int)(pow(365, 12) + 0.5);
	calc = (nCr(12, 3) * nPr(365, 10))/sub;
	cout << "la probabilidad de 3 personas en una habitacion con 12 personas tengan la misma fecha de nacimiento es: " << calc;
}
