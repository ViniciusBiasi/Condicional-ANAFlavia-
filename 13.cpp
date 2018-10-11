#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main() {
	
  int ano;
  
  setlocale (LC_ALL, "");

  cout << "Informe o ano da data: "<<endl;
  cin >> ano;
 
  if ((((ano % 4) == 0) && ((ano % 100) != 0)) || ((ano % 400) == 0))
     cout << "\nO ano informado eh bissexto.";
  else
     cout << "\nO ano informado não eh bissexto.";
}

