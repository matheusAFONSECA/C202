#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");  //abilita o idioma português
	
	//declaração de variáveis
	int numero, guarda_maior, guarda_menor;
	int i;
	
	//entrada do primeiro número
	cout<<"Entre com o 1° número inteiro: ";
	cin>>numero;
	
	guarda_maior=numero;  //guarda o número de parâmetro
	guarda_menor=numero;  //guarda o número de parâmetro
	
	i=1;  //controla a quantidade de vezes que os números entrarão
	
	while(i<10){
		//entrada dos outros números que serão analisados
		cout<<"Entre com o "<<i+1<<"° número inteiro: ";
		cin>>numero;
		
		if(numero>guarda_maior)  //condição para renomear o novo número maior
			guarda_maior=numero;
		else if(numero<guarda_menor)  //condição para renomear o novo número menor
			guarda_menor=numero;
		
		i++;  //incremento da variável de controle da critica
	}
	
	cout<<endl<<"O menor número entrado é: "<<guarda_menor<<endl;
	cout<<"O maior número entrado é: "<<guarda_maior<<endl;
	
	return 0;

}