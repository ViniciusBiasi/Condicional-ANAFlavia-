#include<iostream>
#include<math.h>
using namespace std;
int main()
{
     
	float nota1, nota2, nota3, media;
	
	
	cout << "Digite a  1 nota  do aluno: \n";
	cin >> nota1;
	
	cout << "Digite a 2 nota do aluno: \n";
	cin  >> nota2;
	
	cout << "Digite a 3 nota  do aluno: \n";
	cin  >> nota3;
	
      if ((nota1 && nota2 && nota3)){
		media = (nota1)+(nota2)+(nota3)/10;
	             }
	        cout << "As três notas do aluno foram: "<<nota1<<"   "<<nota2<<"  "<<nota3<<"    "<<endl;
	                     cout << "A média do Aluno foi: "<<media <<endl;
	                     
	                     
		
	                             if (media >= 6){
		                         cout << "O aluno foi Aprovado.";
	                              }
	                                   else{
		                               cout << "O aluno foi Reprovado.";
	                                    }
	return 0;
}
	
