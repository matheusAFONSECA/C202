#include <iostream>
#include <stdio.h>
#include <strings.h>//biblioteca que libera a fun��o strcmp
					//fun��o strcmp � repons�vel por comparar strings
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o de vari�veis
	int idade, retorno, p, maior, menor, idades, m, f, retorno1;
	double salario, soma, menors;
	char sexo1[]="M", sexo[2];
	
	//entrada da idade a ser analisada primeiro
	cin>>idade;
	menor=idade;  //define a primeira idade colocada como menor
	maior=idade;  //define a segunda idade colocada como maior
	
	//identifica��o de vari�veis
	m=0;  //contagem de homens
	f=0;  //contagem de mulheres
	soma=0;  //soma dos sal�rios
	p=0;  //n�mero de pessoas que responderam
	
	//inicio do la�o de repeti��o do-while
	do{
		if(idade>maior)  /*analise se idade adicionada ap�s o do � maior ou 
						 menor e em seguida � feita a atribui��o se necess�rio*/
			maior=idade;
		else if(idade<menor)
			menor=idade;
		
		cin.ignore();
		cin>>sexo;
		retorno=strcmp(sexo,sexo1); /*analise se o sexo � masculino*/
		if(retorno==0)
			m++;  //incrementa um ao n�mero de homens
		else if(retorno!=0)
			f++;  //incrementa um ao n�mero de mulheres
		
		cin>>salario;  //entrada do sal�rio que a pessoa recebe
		soma=soma+salario;
		if (p==0){  //define o primeiro sal�rio adicionado como o menor
			menors=salario;
			if (retorno==0)
				retorno1=1;  //define o sexo que recebe o menor sal�rio
			else if(retorno!=0)
				retorno1=2;
			idades=idade;  //define a idade que receber o menor sal�rio
		}
		else if(salario<menors){  /*se um novo sal�rio adicionado � menor que o
								 salario anterior, muda-se o novo menor sal�rio*/
			menors=salario;
			if (retorno==0)
				retorno1=1;  //redefine o sexo que recebe o menor sal�rio
			else if(retorno!=0)
				retorno1=2;
			idades=menor;  //redefine a idade que recebe o menor sal�rio
		}	
		
		p++;  //incrementa um ao n�mero de pessoas que responderam
		
		cin>>idade;  //reentrada de uma nova idade paar ser analisada pela critica
	}while(idade!=(-1));  //se a idade digitada for -1 acaba a entrada de dados
	
	//saida de dados
	cout<<endl<<"Media dos salarios: "<<soma/p<<endl;
	cout<<"Maior idade: "<<maior<<endl;
	cout<<"Menor idade: "<<menor<<endl;
	cout<<f<<" mulhere(s) na regi�o"<<endl;
	if (retorno1==1)
	cout<<"Quem recebe o menor sal�rio tem "<<idades<<" anos e � do sexo M"<<endl; 
	else if (retorno1==2)
	cout<<"Quem recebe o menor sal�rio tem "<<idades<<" anos e � do sexo F"<<endl;
	
	return 0;
	
}