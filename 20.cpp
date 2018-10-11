#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
	
float Moeda,Valor_converter,Valor_convertido;
char Nome_Moeda, Controle_saida;      

setlocale (LC_ALL,  "");

cout <<"Escolha o número da opção para conversão:"<<endl;
cout << "1 - Euro"<<endl;
cout << "2 - Libra Esterlina" <<endl;
cout << "3 - Dólar "<<endl;
cout << "4 - Iene" <<endl;
cin  >> Moeda;

cout << "Cotação na tabela a seguir: = "<<endl;
 cout << "Euro R$ 2,617 \n " " Libra Esterlina R$ 3,816 \n " "  Dólar R$ 2,071 \n " " Iene R$ 1,018.\n "<<endl;
 
cout << "Digite o valor em R$ para conversão:"<<endl;
cin  >> Valor_converter;



      if (Moeda == 1)
                  {
 	
                     cout << " € Euro";
                     Valor_convertido = Valor_converter * 2.617;
                     
                     }
                          if (Moeda == 2)
                          {
                          	
                          	cout <<" £ Libra Esterlina";
                          	Valor_convertido = Valor_converter * 3.816;
                          	
						  }

                              if (Moeda == 3)
                              {
                              	cout << " U$$ Dólar ";
                              	Valor_convertido = Valor_converter * 2.071;
							  }
                                     if (Moeda == 4)
                                     {
                                     	cout << " ¥ Iene";
                                     	Valor_convertido = Valor_converter * 1.018;
                                  	
									 }
									 
									
                                    
                                    cout << " O valor é: "<<Valor_convertido <<endl;
                                    
                                    
} 
