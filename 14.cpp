#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
  int insc; 
  float media, nota1, nota2, nota3, ma;
  
  setlocale (LC_ALL, "");
  
  cout << "Digite a inscrição do aluno: "<<endl;
  cin >> insc;
  
  cout << "Digite a média dos exercicios que fazem parte da prova: "<<endl;
  cin >> media;
  
  cout << "Nota 1: "<<endl;
  cin >> nota1;
  
  cout << "Nota 2: "<<endl;
  cin >> nota2;
  
  cout << "Nota 3: "<<endl;
  cin >> nota3;
  
  	
	ma = (nota1 + nota2*2 + nota3*3 + media)/7;
	
	cout <<"NUMERO DE IDENTIFICACAO = " <<insc<< " " "MEDIA DOS EXERCICIOS = " <<media<< " "<<endl;  
	cout << "\n MEDIA DE APROVEITAMENTO = " " "<<ma  ;
	if (ma <= 4){
	
	cout << "\n CONCEITO E, ALUNO REPROVADO\n";}
	            else if (ma > 4 && ma <= 6){
               	cout << "\n CONCEITO D, ALUNO REPROVADO\n";}
	                else if (ma > 6 && ma <= 7.5){
                     cout << "\n CONCEITO C, ALUNO APROVADO\n";}
                                	else if (ma > 7.5 && ma <= 9){
                                 	cout << "\n CONCEITO B, ALUNO APROVADO\n";}
	                                             else if (ma > 9){
	                                              cout << "\n CONCEITO A, ALUNO APROVADO\n";}
	return 0;
} 
