#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float pn,p;
	string d,tdf;
	cout<<"Insira o pre�o normal da fita em reais:"<<endl;
	cin>>pn;
	cout<<"Insira sua categoria (comum ou lan�amento):"<<endl;
	cin>>tdf;
	cout<<"Insira o dia da semana:"<<endl;
	cin>>d;
	if(d=="segunda" && tdf=="lan�amento" || d=="ter�a" && tdf=="lan�amento" || d=="quinta" && tdf=="lan�amento" ){
		p=(0.6*pn)+((1.15*pn)-pn);}
			if (d=="segunda" && tdf=="comum" || d=="ter�a" && tdf=="comum" || d=="quinta" && tdf=="comum" ){
			p=0.6*pn;}
				if (d=="quarta" && tdf=="lan�amento" || d=="sexta" && tdf=="lan�amento" || d=="s�bado" && tdf=="lan�amento" || d=="domingo" && tdf=="lan�amento"){
				p=1.15*pn;}
					if (d=="quarta" && tdf=="comum" || d=="sexta" && tdf=="comum" || d=="s�bado" && tdf=="comum" || d=="domingo" && tdf=="comum"){
					p=pn;}
					cout<<"O pre�o da fita �: R$"<<p<<endl;
}

