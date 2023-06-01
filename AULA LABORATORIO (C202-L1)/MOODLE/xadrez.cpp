#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	int L, C;
	
	//entrada de dados
	cout<<"Declare o numeros de linhas:";
	cin>>L;
	cout<<"Declare o numeros de colunas:";
	cin>>C;
	
	//condição e saida de dados
	if (L%2!=0 && C%2!=0 || L%2==0 && C%2==0)               /*1 representa o branco e 0 representa o preto*/
		cout<<"1"<<endl;
	else 
		cout<<"0"<<endl;
	
	return 0;
	
}