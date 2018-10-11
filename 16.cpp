#include <iostream>
using namespace std;
int main ()
 {
  int idade;

  cout << "Informe a idade da pessoa: "; // Ler a idade de uma pessoa e informar a sua classe eleitoral, conforme:
  cin >> idade;

  if (idade < 16)
  // Não-eleitor (abaixo de 16 anos)
     cout << "\nNao eleitor."; 
  else if ((idade >= 18) && (idade <= 65))
  // Eleitor obrigatório (entre 18 e 65 anos)
          cout << "\nEleitor obrigatorio."; 
       else
	   // Eleitor facultativo (entre 16 e 18 ou maior de 65 anos).
          cout << "\nEleitor facultativo."; 
}
