 #include <iostream> 
 #include <locale.h>
 using namespace std;
 int main ()
 {

char placa;


setlocale (LC_ALL, "");
cout << "Digite o ultimo numero da placa do veiculo: "<<endl;
cin >> placa;

   
   
    switch (placa ) {
	 //O mês é determinado pelo ultimo número da placa do carro.

            case  '0':

                cout << "até dezembro";

                break;

            case '1':

                cout<< "Abril";

                break;

            case '2':

                cout <<"até Maio";

                break;

            case '3':

                cout<< "até Junho";

                break;

            case '4':

                cout << "até Julho";

                break;

            case '5':

                cout <<"até Agosto";

                break;

            case '6':

                cout << "até Agosto";
                break;

            case '7':

            cout<< "até Setembro";

                 break;

            case '8':

            cout<< "até Outubro";

                  break;

            case '9':

            cout << "até Novembro";

                  break;

            default:

                cout<< "Placa informada é inválida!";

         }

}




