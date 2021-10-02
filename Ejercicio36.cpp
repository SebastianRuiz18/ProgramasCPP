#include <iostream>
#include <cstdlib>
using namespace std;
 
/**
*Ejercicio 36
*
*Al estar una habitacion con 29 personas determinaremos la probabilidad de tener la misma fecha de cumpleaños que otra persona
*
*Al tener 23 nacimientos aleatorios debemos determinar si 2 o mas de ellos tienen la misma fecha.
*
**/

//@Autor	SebastianRuiz18 	
//@Fecha	20 Sep 2021
 
long double calcular(int personas)
{
   long double p=1;
   for(int i=0;i<personas;i++)
   {
      p=p*(365-i)/365;
   }
   p=100*(1-p);
   return p;
}
 
int main() 
{
  int grupo;
  long double probabilidad;
  grupo = 30;
  probabilidad = calcular(grupo);
  cout << "La probabilidad de que estemos en un grupo de 29 personas y cumplamos anios el mismo dia es de un: " << probabilidad << "%" << endl;
  return 0;
}
