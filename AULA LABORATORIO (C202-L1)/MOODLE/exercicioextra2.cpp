#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");  //abilita o idioma portugu�s
	
	//declara��o de vari�veis
	double n, soma, i;
	
	//explica��o de vari�veis
	soma=0;  //vari�vel respons�vel pela soma dos termos
	i=0;  //vari�vel que conta a quantidade de n�meros entrados
	
	//entrada do primeiro n�mero
	cin>>n;
	
	if(n==0)  //se 0 for o primeiro n�mero digitado
		cout<<"N�o foi entrado nenhum n�mero"<<endl;
	else{
		do{
			soma=soma+n;
			i++;
			cin>>n;  //reentrada de um novo n�mero que ser� analisado
		}while(n!=0);
		
		//saida de dados
		cout<<endl<<"Foram entrados "<<i<<" numero(s)"<<endl;
		cout<<fixed<<setprecision(1);
		cout<<"A media dos numeros entrados e: "<<soma/i<<endl;
	}
}