#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
	int a, b, c;
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite um valor para A: ";
	cin  >> a;
	
	cout << "Digite um valor para B:";
	cin  >> b;
	
	cout << "Digite um valor para C:";
	cin  >> c;
	
	                  if (a>b)
                     	{// A maior do que B.
	
                       	a = (a+b);
                      	a = (a-b);
                       	b = (b-a);
	
                          	cout << "O NUMERO é o maior.\n" <<a;
	                       }
	                               if (b>c)
	                              {// B maior do que C.
	                               	b = (b+c);
	                                b = (b-c);
		                            c = (c-b);
		
		                                cout << "O NUMERO é o maior.\n" <<b;
	                                     }
	
	                                       if (c>b)
                                           	{// C é o maior de todos os outros valores.
	
                                         	c = (c+b);
	                                        c = (c-b);
                                           	b = (b-c);
	
                                          	cout <<"O NUMERO é o maior de todos." <<c;
	                                         }
	                                         else 
											 {// comando invalido.
											 cout << "NÚMERO INVALIDO, POR FAVOR DIGITE UM NUMERO DIFERENTE DOS OUTROS DIGITADOS."<<endl;
											 }
	return 0;
	
}
