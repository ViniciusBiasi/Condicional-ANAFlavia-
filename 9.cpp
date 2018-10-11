#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
	int conta, consumidor, consumo;
	float soma;
	
	setlocale (LC_ALL, "Portuguese");
	
	cout << "Digite a conta do cliente: "<<endl;
	cin  >> conta;
	
	cout << "Qual o tipo de consumidor o cliente é (residencial, comercial ou industrial): "<<endl;
	cin  >> consumidor;
	
	cout << "O consumo da água do cliente em (m^3): "<<endl;
	cin >> consumo;
	
	if ((consumidor=="residencial" && consumo==5.00 )){
		
		soma = 5.00 + 0.05 * consumo;
		
		}
	if ((consumidor=="comercial" && consumo==500.00 && consumo<=80 || consumidor=="comercial" && consumo==0.25 && consumo=>80 )){
		
		soma = 500.00 + 
		
		}
	if (consumidor=="industrial" && consumo==800.00 && consumo<=100 || ){
		
		}	
	
	cout << "A conta do cliente é: "<<conta <<endl;
	cout << "O valor da conta é: "<<endl;
	}
