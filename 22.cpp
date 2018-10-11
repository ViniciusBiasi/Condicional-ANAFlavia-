#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{

   int idade; 
   float peso;

  setlocale (LC_ALL, "");

    cout << "Informe a sua idade.....:"<<endl;
    cin  >> idade;
   
    cout << "Informe seu peso.......:"<<endl;
    cin  >> peso;
    
   if ((idade > 12) && (peso >= 60)) {
       cout << "Voce deve tomar 1000mg!"<<endl;
    
         if ((idade > 12) && (peso < 60)) {
            cout << "Voce deve toma 875mg!!"<<endl;
        
              if ((idade <= 12) && (peso > 5 ) && (peso <= 9)) {
                cout << "Voce deve tomar 125mg!!" <<endl;
              
                   if ((idade <= 12 ) &&(peso > 9.1) && (peso <= 16)) {
                      cout << "Voce deve tomar 250mg!!"<<endl;
                   
                        if ((idade <= 12) && (peso > 16.1) && (peso <=24)) {
                          cout << "Voce deve tomar 375mg!!"<<endl;
                        
                             if ((idade <= 12) && (peso > 24.1) && (peso <= 30)) {
                                cout << "Voce deve tomar 500mg!!"<<endl;
                             if (peso < 31){
							 cout << "Voce deve tomar 750mg!!"<<endl;
                                     } 
							 }
                       }
                   }
              }
         }
    }
 }
