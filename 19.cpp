#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	int a; //nome do fazendeiro.
	int b; //opção de pulveirização
	float c; //area a ser pulverizada.
	float v; //valor em dinheiro do custo.
	
	cout << "Nome do fazendeiro"<<endl;
	cin  >> a;
	
	cout << "Tipo de pulverização"<<endl;
	cout << "1 - Pulverizar contra Ervas Daninhas: R$5,00"<<endl;
	cout << "2 - pulverização contra gafanhotos, R$ 10,00" <<endl;
	cout << "3 - pulverização contra broca, R$ 15,00" <<endl;
	cout << "4 - pulverização contra tudo acima, R$ 25,00"<<endl;
	cin >> b;
	
     cout << "Área a ser pulverizada?"<<endl;
     cin  >> c;
     
     if (( b == 1 && c > 300))
     {
		 cout << "Você ganhou 5% de desconto";
		 v = 0.9 * 50 * c; 
		 }
		 
		else {
			v = 50 * c;
			}
     if (v > 1.750)
     {
		 cout << "Você ganhou 10% de desconto";
		 v = 0.88 * v;
		 }
    
    if ((b == 2 && c > 100))
    {
		v = 0.9 * 100 * c;
		
		}
		  else {
                 v = 100 * c;
			  }
			     if (v > 10000){
			  cout << "Você ganhou 10% de desconto";
			  v = 0.88 * v;
		  }
		  if (( b == 3 && c > 100)) 
		  {
			  cout << "Você ganhou 10% de desconto";
			  v = 0.9 * 150 * c;
			  }
			  
			  else {
				  v = 150 * c;
				  }
				    
				    if ( v > 10000)
				    {
						cout << "Você ganhou 10% de desconto";
						v = 0.88 * v;
						}
		              if (b == 4 && c > 100)
		              {
						  cout << "Você ganhou 5% de desconto";
						  v = 0.9 * 250 * c; 
						  }
						  
						  else {
							  v = 250 * c;
							  }
							  
							  if (v > 10000)
							  {
								  cout << "Você ganhou 10% de desconto";
								 v = 0.88 * v;
								 }
								 
								  cout << "O valor total é de:"  <<v <<endl;
								  			  
} 
