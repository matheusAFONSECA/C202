#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <strings.h>  //biblioteca que libera a fun��o strcmp
					  //fun��o strcmp � repons�vel por comparar strings
using namespace std;

int main()
{
	//declara��o de vari�veis
	char nome[50], uf[3], cpf[12];
	char uf1[]="MG";
	double y=0, op, x=0, retorno, z=0;
	double mg, outros;
	
	do
	{
		y++; //n�mero de visitantes 
		cout<<"Nome: ";
		cin.getline(nome, 50);  //entrada do nome do visitante
		cout<<"CPF: ";
		cin.ignore(0);  //CPF do visitante
		cin>>cpf;
		cout<<"Estado de origem (deve ser digitado em letras maiusculas e em sigla): "; 
		cin>>uf;  //estado de origem do visitante
		cout<<endl<<nome<<" - "<<cpf<<" - "<<uf<<endl;
		cout<<endl<<"digite 1 para  novo cadastro e 0 para sair ";
		cin>>op;
		cin.ignore();
		retorno = strcmp(uf, uf1);  /*fun��o respons�vel por dizer se o estado digitado 
									tem os mesmo caracteres que mg, se sim o valor � 0*/
			if (retorno==0)
				x++; //representa o n�mero de pessoas de MG
			else if(retorno!=0)
				z++; //representa o n�mero de pessoas de outros estados
			cout<<endl;
	}while(op==1);
	
	//calculo das porcentagens
	mg= (x/y)*100;  //porcetagem de MG
	outros= (z/y)*100;  //porcentagem de outros estados
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<"Visitantes de Minas Gerais, em porcentagem: "<<mg<<" %"<<endl;
	cout<<"Visitantes de outros estados, em porcetagem: "<<outros<<" %"<<endl;
		
	return 0;
	
}