#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float pn,p;
	string d,tdf;
	cout<<"Insira o preço normal da fita em reais:"<<endl;
	cin>>pn;
	cout<<"Insira sua categoria (comum ou lançamento):"<<endl;
	cin>>tdf;
	cout<<"Insira o dia da semana:"<<endl;
	cin>>d;
	if(d=="segunda" && tdf=="lançamento" || d=="terça" && tdf=="lançamento" || d=="quinta" && tdf=="lançamento" ){
		p=(0.6*pn)+((1.15*pn)-pn);}
			if (d=="segunda" && tdf=="comum" || d=="terça" && tdf=="comum" || d=="quinta" && tdf=="comum" ){
			p=0.6*pn;}
				if (d=="quarta" && tdf=="lançamento" || d=="sexta" && tdf=="lançamento" || d=="sábado" && tdf=="lançamento" || d=="domingo" && tdf=="lançamento"){
				p=1.15*pn;}
					if (d=="quarta" && tdf=="comum" || d=="sexta" && tdf=="comum" || d=="sábado" && tdf=="comum" || d=="domingo" && tdf=="comum"){
					p=pn;}
					cout<<"O preço da fita é: R$"<<p<<endl;
}

