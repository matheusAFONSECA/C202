#include <iostream>
using namespace std;
int main(void)
    {
setlocale(LC_ALL,"Portuguese");    //habilita a estrutura ortografica em portugues
//entrada de variaveis
    	
		float velocidade, tempo, distancia;
		
//entrada de dados

        cout << "Digite a velocidade (km/h)" << "\n";
		cin >> velocidade;
		cout << "Digite o tempo (h)" << "\n";
		cin >> tempo;
		
//calcula da distancia

		distancia = velocidade*tempo;
		
//saida de dados
         cout << "/n" << "Distancia percorrida = " << distancia << "km" << "/n";
         return 0 ;
	}
	