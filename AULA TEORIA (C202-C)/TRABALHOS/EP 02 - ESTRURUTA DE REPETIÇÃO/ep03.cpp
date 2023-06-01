#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");  //aceitar o idioma portugu�s
	
	//declara��o de vari�veis
	double a, b, c, d, p;
	int idade, grupo, op;
	
	
	a=0;  //vari�vel que corresponde ao plano A
	b=0;  //vari�vel que corresponde ao plano B
	c=0;  //vari�vel que corresponde ao plano C
	d=0;  //vari�vel que corresponde ao plano D
	p=0;  //vari�vel que corresponde ao n�mero de pessoas analisadas
	
	do{  //do-while repons�vel por repetir a analise de outro poss�vel plano
		//entrada de dados
		do{
			cout<<"Entre com a idade: ";
			cin>>idade;  //vari�vel que analisa a idade
		}while(idade<0);  //se a idade for negativa o processo recome�a
		do{
			cout<<"Qual o grupo de risco (1 ou 2): ";
			cin>>grupo;  //vari�vel que guarda o grupo de risco
		}while(grupo!=1 && grupo!=2);  //somente aceita o grupo de risco 1 ou 2
		switch(grupo){  //analise da vari�vel grupo
			case 1:  /*se for do grupo de de risco 1 ser� analisado e 
    				 determinado qual o melhor plano*/
				if(idade<=15){
					cout<<"Melhor op��o: plano A"<<endl;
					a++;
				}
				else if(idade>15 && idade<=35){
					cout<<"Melhor op��o: plano A"<<endl;
					a++;
				}
				else if(idade>35 && idade<=55){
					cout<<"Melhor op��o: plano B"<<endl;
					b++;
				}
				else if(idade>55){
					cout<<"Melhor op��o: plano C"<<endl;
					c++;
				}
				break;
			case 2:  /*se for do grupo de de risco 2 ser� analisado e 
			         determinado qual o melhor plano*/
				if(idade<=15){
					cout<<"Melhor op��o: plano A"<<endl;
					a++;
				}
				else if(idade>15 && idade<=35){
					cout<<"Melhor op��o: plano B"<<endl;
					b++;
				}
				else if(idade>35 && idade<=55){
					cout<<"Melhor op��o: plano C"<<endl;
					c++;
				}
				else if(idade>55){
					cout<<"Melhor op��o: plano D"<<endl;
					d++;
				}
			   	break;
		}
		p++;  /*incrementa um ao n�mero de pessoas analisadas, representando o
			  n�mero de pessoas total*/
		//flag
		do{
		cout<<endl<<"Para repetir digite 1 caso queira encerrar digite 2 ";
		cin>>op;
		}while(op!=1 && op!=2);
		cout<<endl;
	}while(op==1);
	
	//saida de dados
	cout<<fixed<<setprecision(2);  /*saida da porcentagem com duas casas
								   decimais*/
	cout<<endl<<"Plano A: "<<(a/p)*100<<" %"<<endl;
	cout<<"Plano B: "<<(b/p)*100<<" %"<<endl;
	cout<<"Plano C: "<<(c/p)*100<<" %"<<endl;
	cout<<"Plano D: "<<(d/p)*100<<" %"<<endl;
	
	return 0;
	
}