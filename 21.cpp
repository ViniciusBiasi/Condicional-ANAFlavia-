#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{

int dia, mes, ano;
string mes_ex;
setlocale (LC_ALL, "");

cout << "Digite um dia: "<<endl;
cin  >> dia;
cout << "Digite um mes: "<<endl;
cin  >> mes;
cout << "Digite um ano: "<<endl;
cin  >> ano;

cout <<"Sua data foi: "<<dia<<"/"<<mes<<"/"<<ano<<endl;

if ((mes == 1))  

     mes_ex = "Janeiro";
 
   if ((mes == 2)) 
   {
      mes_ex ="Fevereiro";
    
      if ((mes == 3)) 
	  {
         mes_ex = "Março";
       
         if ((mes == 4)) 
		 {
            mes_ex = "Abril";
         
            if ((mes == 5)) 
			{
            	
               mes_ex = "Maio";
             
               if ((mes == 6)) 
			   {
                  mes_ex = "Junho";
              
                  if ((mes == 7)) 
				  {
                     mes_ex = "Julho";
                 
                     if ((mes == 8)) 
					 {
                        mes_ex = "Agosto";
                    
                        if ((mes == 9)) 
						{
                           mes_ex = "Setembro";
                        
                           if ((mes == 10))
						   {
                              mes_ex = "Outubro";
                          
                              if ((mes == 11))
							  {
                                 mes_ex = "Novembro";
                              
                                 if ((mes == 12))
								 {
                                    mes_ex = "Dezembro";
                                 }
                              }
                           }
                       }
                     }
                  }
               }
            }
         }
      }
   }


cout << "Data por extenso: " <<dia<< " de " <<mes_ex<< " de " <<ano<<endl;

}
