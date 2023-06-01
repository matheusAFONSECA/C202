#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");  //aceitar o idioma portugu�s
	
	//declara��o de vari�veis
	char nome[50];
	int nasc, emp;
	
	//entrada de dados
	cout<<"Declare o nome do funcion�rio: ";
	cin.getline(nome, 50);  //vari�vel que guardara o nome
	do{
		cout<<"Entre com ano de nascimento (1940 a 2020): ";
		cin>>nasc;  //vari�vel com os dados de ano de nascimento
	}while(nasc<1940 || nasc>=2020);
	do{
		cout<<"Qual o ano que entrou na empresa (1970 a 2020): ";
		cin>>emp;  //vari�vel com o ano de entrada na empresa
	}while(emp<1970  || emp>2020);
	
	//saida de dados
	cout<<endl;
	if(nasc<=1955)  //condi��o de 65 anos no minimo
		cout<<"O funcion�rio est� qualificado..."<<endl;
	else if(emp<=1990)  //condi��o de 30 anos trabalhados no minimo
		cout<<"O funcion�rio est� qualificado..."<<endl;
	else if(nasc<=1960 && emp<=1995)  /*condi��o de ter trabalhado 25 ano ou 
									  mais e ter 60 anos ou mais*/
		cout<<"O funcion�rio est� qualificado..."<<endl;
	else  //caso nenhuma condi��o seja satisfeita
		cout<<"O funcion�rio n�o est� qualificado..."<<endl;
	
	return 0;
	
}