#include <iostream>
using namespace std;

/**
*Ejercicio 32
*
*En una ruleta americana: Cual es la probabilidad de que el resultado sea:
*a) 0
*b) 00
*c) 0 o 00
*d) Par
*e) En el primer 12
*f) en la segunda columna
*g) 4, 5, 6, 7, 8 o 9
*
**/

//@Autor	SebastianRuiz18 	
//@Fecha	17 Sep 2021

void a(){
	double Prob0 = 1.0/38.0;
	cout << "a) La probabilidad de que el resultado sea 0 es: " << Prob0 << "%" << endl;
}

void b(){
	double Prob00 = 1.0/38.0;
	cout << "b) La probabilidad de que el resultado sea 00 es: " << Prob00 << "%" << endl;
}

void c(){
	double Prob0o00 = 2.0/38.0;
	cout << "c) La probabilidad de que el resultado sea 0 o 00 es: " << Prob0o00 << "%" << endl;
}

void d(){
	double ProbPar = 18.0/38.0;
	cout << "d) La probabilidad de que el resultado sea Par es: " << ProbPar << "%" << endl;
}

void e(){
	double ProbDocena = 12.0/38.0;
	cout << "e) La probabilidad de que el resultado sea Docena es: " << ProbDocena << "%" << endl;
}

void f(){
	double ProbSegColum = 12.0/38.0;
	cout << "f) La probabilidad de que el resultado sea segunda Columna es: " << ProbSegColum << "%" << endl;
}
void g(){
	double Prob4a9 = 6.0/38.0;
	cout << "g) La probabilidad de que el resultado sea 4, 5, 6, 7, 8 o 9 es: " << Prob4a9 << "%" << endl;
}

int main() {
	a();
	b();
	c();
	d();
	e();
	f();
	g();
	
	return 0;
}
