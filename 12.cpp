#include<math.h>
#include<iostream>
#include <locale.h>
using namespace std;
int main(){
  float codigo, valor, cl;
  setlocale (LC_ALL, "");
  
  cout << "Digite o preço normal que está na etiqueta: "<<endl;
  cin  >> valor;
  
  cout << "Escolha um condição de pagamento: "<<endl;
  cin >> codigo;
  

	if (codigo == 1){
	cl = valor-valor*0.10;
	cout <<"PRECO FINAL = "<<cl;
}
	else if (codigo == 2){
	cl = valor-valor*0.05;
	cout << "PRECO FINAL = " <<cl;
	}
	else if (codigo ==3){
	cl = valor + 0.0;
	cout << "PRECO FINAL = "<<cl;
	}
	
	else if (codigo ==4){
	cl = valor+valor*0.10;
	cout << "PRECO FINAL = "<<cl;
	}
	
	return 0;
} 
