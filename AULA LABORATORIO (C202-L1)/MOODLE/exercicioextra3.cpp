#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");  //abilita o idioma portugu�s
	
	//declara��o de vari�veis
	int numero, guarda_maior, guarda_menor;
	int i;
	
	//entrada do primeiro n�mero
	cout<<"Entre com o 1� n�mero inteiro: ";
	cin>>numero;
	
	guarda_maior=numero;  //guarda o n�mero de par�metro
	guarda_menor=numero;  //guarda o n�mero de par�metro
	
	i=1;  //controla a quantidade de vezes que os n�meros entrar�o
	
	while(i<10){
		//entrada dos outros n�meros que ser�o analisados
		cout<<"Entre com o "<<i+1<<"� n�mero inteiro: ";
		cin>>numero;
		
		if(numero>guarda_maior)  //condi��o para renomear o novo n�mero maior
			guarda_maior=numero;
		else if(numero<guarda_menor)  //condi��o para renomear o novo n�mero menor
			guarda_menor=numero;
		
		i++;  //incremento da vari�vel de controle da critica
	}
	
	cout<<endl<<"O menor n�mero entrado �: "<<guarda_menor<<endl;
	cout<<"O maior n�mero entrado �: "<<guarda_maior<<endl;
	
	return 0;

}