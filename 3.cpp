#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a, b, c;
	float x1, x2, d;
	
	
	
	            cout << "Dgite um valor para A: "<<endl;
	            cin  >> a;
	            
	            cout << "Digite um outro valor para B: "<<endl;
	            cin  >> b;
	            
	            cout << "Digite um terceiro valor para C:"<<endl;
	            cin  >> c;
	         
 	           d = pow(b,2) - (4*a*c); x1= (-b + sqrt (d)) / (2 * a); x2= (-b - sqrt (d)) / (2 * a); 
 	
 	
	                       if (d==0){
		                   cout <<"RAIZ UNICA =\n" ,x1;
                      	}
	                if (d<0){	
		           cout <<"RAIZES IMAGINARIAS \n";
	           }
            	if (d>0){
	            cout<<"RAIZES DISTINTAS\n", x1 ,x2;
	       }
          	
 	return 0;
 
	
	
}
