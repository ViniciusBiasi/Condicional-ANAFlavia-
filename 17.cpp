#include <iostream>
using namespace std;
int main() {
	
  char sexo;
  float h, psIdeal;

  cout << "Informe o sexo (M/F): ";
  cin >> sexo;

  cout << "Informe a altura (m): ";
  cin >> h;

  if ((sexo == 'M') || (sexo == 'm'))
     psIdeal = (72.7 * h) - 58;
  else
     psIdeal = (62.1 * h) - 44.7;

  cout << "\nO Peso Ideal eh: kgs." <<psIdeal;
}
