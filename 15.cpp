#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float  ir,inss,salario_bruto,salario_liquido,hora_extra,valor_hora_extra;
    string  nome;

cout << "Informe seu nome"<<endl;
cin >> nome;

cout << "\n Informe a quantidade de horas extras trabalhadas";
cin >> hora_extra;

valor_hora_extra = hora_extra * 10;
salario_bruto = (3 * 350) + valor_hora_extra;

  if (salario_bruto > 1.500) { 
   inss = salario_bruto * 0.12;
   ir = salario_bruto * 0.20;
   salario_liquido = salario_bruto - (inss + ir);
}
cout << "Nome: "<<nome <<endl;
cout << "Salário bruto é:R$"<<salario_bruto<<endl; 
cout << "Salário liquido é:R$" <<salario_liquido<<endl;
cout << "Hora trabalhada:"<<hora_extra<<endl;
cout << "INSS:R$" <<inss<<endl;
cout << "IR:R$" <<ir<<endl;
}
