#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
    int main()
{
	 int ano, diasano, mes;
	
	 
	 setlocale (LC_ALL, "Portuguese");
	 
	 cout << "Digite um mês: (EM FORMA DE NUMERO)"<<endl;
	 cin  >> mes;
	 
	 cout << "Digite um ano: "<<endl;
	 cin  >> ano;
	 
	  if (((ano%4==0)) && ((ano%100!=0))  || ((ano%400==0))) {
		          diasano=366;
	            }
	                 else{
		          diasano=365;
	                 }
	
	               if (ano%4==0){
		 
	                   diasano=366; 
		                   }
	                            else{
			
	                       diasano=365;
			                      }
			  
	                          if (((mes==1)) || ((mes==3)) || ((mes==5)) || ((mes==7)) || ((mes==8)) || ((mes==10)) || ((mes==12)))
	                          {
	                          
		                    cout << "DIAS = 31"<<endl;
		                  cout << "DIAS NO ANO = "<<diasano<<endl;
	                       }
	                                         if (((mes==4))||((mes==6))||((mes==9))||((mes==11)))
	                                        {
		                                    cout << "DIAS = 30"<<endl;
		                                    cout <<"DIAS NO ANO = "<<diasano<<endl;
	                                               }
	                                                 if (((mes==2)) && (ano%4==0))
	                                                     {
		                                              cout << "DIAS=29"<<endl;
		                                              cout <<"DIAS NO ANO ="<<diasano<<endl;
	                                                            } 
	                                                             if (((mes==2)) && ((ano%4!=0)))
	                                                                {
		                                                             cout << "DIAS=28"<<endl;
		                                                          cout << "DIAS NO ANO="<<diasano<<endl;
	                                                             }
	return 0;
}
