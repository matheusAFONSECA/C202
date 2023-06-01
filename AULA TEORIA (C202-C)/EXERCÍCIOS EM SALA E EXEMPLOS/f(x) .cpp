#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declaração de variáveis
	float  x, f;

    //entrada de dados
    cout<<"Digite um valor:";
    cin>>x;
    
    //calculo
    f = 1/sqrt(x) + 1;
    
    if (x <= 0)
    	cout<<"Calculo impossível...";
    if (x > 0)
    	cout<<"O valor de f(x) é:"<<f;
    
    return 0;
 	
}