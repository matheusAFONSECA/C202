#include <iostream>
#include <stdio.h>
#include <strings.h>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	char tipo[1], tipo1[]="R", fonte1[]="E",fonte2[]="S", fonte[1];
	double c, reside, comer, energia, solar;
	int op, retorno, retorno1, codigo, retorno2, coer, reso;
	
	c=0;  //representa o n° de consumidores
	reside=0;  //representa quem consome residencial
	comer=0;  //representa quem consome comercial 
	energia=0;  //representa quem usa a fonte eletrica
	solar=0;  //representa quem usa a fonte solar
	reso=0;  //representa quem tem residencial e usa solar
	coer=0;  //representa quem tem comercial e usa eletrica
	
	//entrada de dados
	do{
		cout<<"Leitura de dados: "<<endl;
		cout<<"Digite o código: ";
		cin>>codigo;
		
		cin.ignore();
		cout<<"Tipo de consumo: R (residencial) ou C (comercial): ";
		cin>>tipo;
		cout<<"Fonte energética: E (elétrica), S (solar) ou O (outras): ";
		cin.ignore();
		cin>>fonte;
		
		retorno = strcmp(tipo, tipo1);  /*função responsável por dizer se o estado digitado 
										tem os mesmo caracteres que R, se sim o valor é 0*/
			if (retorno==0)
				reside++;  //incrementa no n° de quem usa residencial
			else if(retorno!=0)
				comer++;  //incrementa no n° de quem usa comercial

		retorno1 = strcmp(fonte, fonte1);  /*função responsável por dizer se o estado digitado 
										tem os mesmo caracteres que E, se sim o valor é 0*/
			if (retorno1==0){
				energia++;  //incrementa no n° de quem usa energia elétrica
				if(retorno!=0)
			    	coer++;  //incrementa no n° de quem é comercial e usa elétrica
			}
			
		retorno2 = strcmp(fonte, fonte2);  /*função responsável por dizer se o estado digitado 
										tem os mesmo caracteres que S, se sim o valor é 0*/
		if (retorno2==0){
				solar++;  //incrementa no n° de quem usa energia solar
				if(retorno==0)
					reso++;  //incremente no n° de quem é residencial e usa solar
		}
		
		c++;  //incrementa um ao número de consumidores pesquisados
		
		cout<<endl<<"Tecle 1 para novo cadrastro (ou 0 para sair): ";
		cin>>op;
		cout<<endl;  //deixar o output mais organizado
	}while(op==1);
	
	//saida de dados
	cout<<"Consumidores pesquisados: "<<c<<endl;
	cout<<"Tipo Residencial: "<<(reside/c)*100<<"%"<<endl;
	cout<<"Tipo Comercial: "<<(comer/c)*100<<"%"<<endl;
	if (coer==0)
		cout<<"Comércios que usam energia elétrica: 0%"<<endl;
	else 
		cout<<"Comércios que usam energia elétrica: "<<(comer/coer)*100<<"%"<<endl;
	if (reso==0)
		cout<<"Residências que usam energia solar: 0%"<<endl;
	else
		cout<<"Residências que usam energia solar: "<<(reside/reso)*100<<"%"<<endl;
	
	return 0;
	
}