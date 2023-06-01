#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");  //abilita o idioma português
	
	//declaração de variáveis
	double n, soma, i;
	
	//explicação de variáveis
	soma=0;  //variável responsável pela soma dos termos
	i=0;  //variável que conta a quantidade de números entrados
	
	//entrada do primeiro número
	cin>>n;
	
	if(n==0)  //se 0 for o primeiro número digitado
		cout<<"Não foi entrado nenhum número"<<endl;
	else{
		do{
			soma=soma+n;
			i++;
			cin>>n;  //reentrada de um novo número que será analisado
		}while(n!=0);
		
		//saida de dados
		cout<<endl<<"Foram entrados "<<i<<" numero(s)"<<endl;
		cout<<fixed<<setprecision(1);
		cout<<"A media dos numeros entrados e: "<<soma/i<<endl;
	}
}