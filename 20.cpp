#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
	
float Moeda,Valor_converter,Valor_convertido;
char Nome_Moeda, Controle_saida;      

setlocale (LC_ALL,  "");

cout <<"Escolha o n�mero da op��o para convers�o:"<<endl;
cout << "1 - Euro"<<endl;
cout << "2 - Libra Esterlina" <<endl;
cout << "3 - D�lar "<<endl;
cout << "4 - Iene" <<endl;
cin  >> Moeda;

cout << "Cota��o na tabela a seguir: = "<<endl;
 cout << "Euro R$ 2,617 \n " " Libra Esterlina R$ 3,816 \n " "  D�lar R$ 2,071 \n " " Iene R$ 1,018.\n "<<endl;
 
cout << "Digite o valor em R$ para convers�o:"<<endl;
cin  >> Valor_converter;



      if (Moeda == 1)
                  {
 	
                     cout << " � Euro";
                     Valor_convertido = Valor_converter * 2.617;
                     
                     }
                          if (Moeda == 2)
                          {
                          	
                          	cout <<" � Libra Esterlina";
                          	Valor_convertido = Valor_converter * 3.816;
                          	
						  }

                              if (Moeda == 3)
                              {
                              	cout << " U$$ D�lar ";
                              	Valor_convertido = Valor_converter * 2.071;
							  }
                                     if (Moeda == 4)
                                     {
                                     	cout << " � Iene";
                                     	Valor_convertido = Valor_converter * 1.018;
                                  	
									 }
									 
									
                                    
                                    cout << " O valor �: "<<Valor_convertido <<endl;
                                    
                                    
} 
