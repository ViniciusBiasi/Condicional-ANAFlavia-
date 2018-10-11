#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
  char tipo[8];
   float raio, altura, volume, area, pi=3.1415;
   
   cout << "Digite o raio de um cone reto, de um cilindro ou de uma esfera: "<<endl;
   cin >> raio;
   
   cout << "Digite a altura de um cone reto, de um cilindro ou de uma esfera:"<<endl;
   cin >> altura;
   
   cout << "Escolha um tipo para calcular (CONE / CILINDRO  / ESFERA): "<<endl;
	cin >> tipo;
	
	if (tipo,"CONE"){
	
		volume = (pi * pow(raio,2) * altura)/3; 
		area = pi * raio * sqrt(pow(raio,2) + pow(altura,2));
	}
	if (tipo,"CILINDRO"){
		volume = pi * pow(raio,2) * altura; 
		area = 2 * pi * raio * altura;
	}
	if (tipo,"ESFERA"){
		volume = (pi * 4 * pow(raio,3))/3; 
		area = 4 * pi * pow(raio,2);
	}
	cout << "O volume será: "<<volume <<endl;
	cout <<  "A área: " <<area <<endl;
	
	return 0;
} 
