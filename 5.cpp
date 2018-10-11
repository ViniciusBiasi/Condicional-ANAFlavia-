#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
int num, d1, d2, d3, d4;
int aux, soma1, soma2, y;

               setlocale(LC_ALL, "Portuguese");
              
              cout << "\n Digite um número de 4 dígitos: ";
              cin  >> num;
   	d1=num%10; 
	aux=num/10; 
	d2=aux%10; 
	aux=aux/10; 
	d3=aux%10; 
	d4=aux/10;
	
	soma1 = d2*10+d1; 
	soma2 = d4*10+d3; 
	y=soma1+soma2;
	
	if(pow(y,2) == num){
	cout <<"O NUMERO POSSUI TAL CARACTERÍSTICA\n";	
	}
	else{
	cout <<"O NUMERO NÃO POSSUI TAL CARACTERÍSTICA\n";
		}
	return 0;
}
