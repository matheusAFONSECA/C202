#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	float  x, f;

    //entrada de dados
    cout<<"Digite um valor:";
    cin>>x;
    
    //calculo
    f = 1/sqrt(x) + 1;
    
    if (x <= 0)
    	cout<<"Calculo imposs�vel...";
    if (x > 0)
    	cout<<"O valor de f(x) �:"<<f;
    
    return 0;
 	
}