#include <iostream>
#include <stdio.h>
#include <strings.h>//biblioteca que libera a função strcmp
					//função strcmp é reponsável por comparar strings
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	int idade, retorno, p, maior, menor, idades, m, f, retorno1;
	double salario, soma, menors;
	char sexo1[]="M", sexo[2];
	
	//entrada da idade a ser analisada primeiro
	cin>>idade;
	menor=idade;  //define a primeira idade colocada como menor
	maior=idade;  //define a segunda idade colocada como maior
	
	//identificação de variáveis
	m=0;  //contagem de homens
	f=0;  //contagem de mulheres
	soma=0;  //soma dos salários
	p=0;  //número de pessoas que responderam
	
	//inicio do laço de repetição do-while
	do{
		if(idade>maior)  /*analise se idade adicionada após o do é maior ou 
						 menor e em seguida é feita a atribuição se necessário*/
			maior=idade;
		else if(idade<menor)
			menor=idade;
		
		cin.ignore();
		cin>>sexo;
		retorno=strcmp(sexo,sexo1); /*analise se o sexo é masculino*/
		if(retorno==0)
			m++;  //incrementa um ao número de homens
		else if(retorno!=0)
			f++;  //incrementa um ao número de mulheres
		
		cin>>salario;  //entrada do salário que a pessoa recebe
		soma=soma+salario;
		if (p==0){  //define o primeiro salário adicionado como o menor
			menors=salario;
			if (retorno==0)
				retorno1=1;  //define o sexo que recebe o menor salário
			else if(retorno!=0)
				retorno1=2;
			idades=idade;  //define a idade que receber o menor salário
		}
		else if(salario<menors){  /*se um novo salário adicionado é menor que o
								 salario anterior, muda-se o novo menor salário*/
			menors=salario;
			if (retorno==0)
				retorno1=1;  //redefine o sexo que recebe o menor salário
			else if(retorno!=0)
				retorno1=2;
			idades=menor;  //redefine a idade que recebe o menor salário
		}	
		
		p++;  //incrementa um ao número de pessoas que responderam
		
		cin>>idade;  //reentrada de uma nova idade paar ser analisada pela critica
	}while(idade!=(-1));  //se a idade digitada for -1 acaba a entrada de dados
	
	//saida de dados
	cout<<endl<<"Media dos salarios: "<<soma/p<<endl;
	cout<<"Maior idade: "<<maior<<endl;
	cout<<"Menor idade: "<<menor<<endl;
	cout<<f<<" mulhere(s) na região"<<endl;
	if (retorno1==1)
	cout<<"Quem recebe o menor salário tem "<<idades<<" anos e é do sexo M"<<endl; 
	else if (retorno1==2)
	cout<<"Quem recebe o menor salário tem "<<idades<<" anos e é do sexo F"<<endl;
	
	return 0;
	
}