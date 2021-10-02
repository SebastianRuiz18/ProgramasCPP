#include <iostream>
#include <cstdlib>
using namespace std;
 
/**
*Ejercicio 37
*
*Calcular al probabilidad de 2 personas en una habitacion con desde 1 persona hasta 50 persona, tengan la misma fecha de nacimiento.
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
  int x;
  x = 1;
  long double probabilidad;
  do {
  		grupo = x;
  		probabilidad = calcular(grupo);
  		cout << "La probabilidad de que en un grupo de " << grupo << " personas, dos cumplan anios el mismo dia es de un " << probabilidad << "%" << endl;
		x++;
  } while (x <= 50);
  
  return 0;
}
