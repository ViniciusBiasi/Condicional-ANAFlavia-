#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
	
  float a, b, c; 
  	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite um valor para A: ";
	cin  >> a;
	
	cout << "Digite um valor para B:";
	cin  >> b;
	
	cout << "Digite um valor para C:";
	cin  >> c;

	if 
	(pow(b,2) + pow(c,2) == pow(a,2)){
		cout << "TRI�NGULO RET�NGULO\n";
	}
	if 
	(pow(b,2) + pow(c,2) < pow(a,2)){
		cout << "TRI�NGULO OBTUS�NGULO\n";
	}
	if 
	(pow(b,2) + pow(c,2) > pow(a,2)){
		cout << "TRI�NGULO ACUT�NGULO\n";
	}
	return 0;
}
