#include<iostream>
#include<math.h>
#include <locale.h>
using namespace std;
int main(){
	
  float valorfin, valorfab, itema, itemb, itemc, itemd;
   char a[3], b[3], c[3], d[3];
   
   setlocale (LC_ALL, "");
   cout << "Digite o  valor do preço inicial de fábrica: "<<endl;
   cin >> valorfab; 
   
   cout <<"O carro pode ter as seguintes opções: "<<endl;
   
   cout << "Ar condicionado: (SIM / NÃO)"<<endl;
   cin >> a; 
	if (a,"SIM")	{
		itema = 1750;
	}
	else {
		itema = 0;
	}
	 cout <<  "Pintura Metálica: (SIM / NÃO)" <<endl;
	 cin  >> b;
	if (b,"SIM") {
		itemb = 800;
	}
	else {
		itemb = 0;
	}
	cout << " Vidro Elétrico: (SIM / NÃO) " <<endl;
    cin  >> c;
	if (c,"SIM") {
		itemc = 1200;
	}
	else {
		itemc = 0;
	}
	cout << " Direção Hidráulica: (SIM / NÃO )" <<endl;
	cin >> d;
	if (d,"SIM") {
		itemd = 2000;
	}
	else {
		itemd = 0;
	}
	valorfin = valorfab + itema + itemb + itemc + itemd;
	cout <<"PRECO FINAL = \n" <<valorfin;
	return 0;
} 
