#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//declara��o de vari�veis
	int i;
	double N1, N2, N3, ME; 
	double MA; 
	
	//entrada de dados
	cin>>i;  //n�mero de indentifica��o do aluno
	do{
		cin>>N1;
	}while(N1<0 || N1>10); //cr�tica para aceitar nota 
	do{
		cin>>N2;
	}while(N2<0 || N2>10);  //cr�tica para aceitar nota
	do{
		cin>>N3;
	}while(N3<0 || N3>10);  //cr�tica para aceitar nota
	do{
		cin>>ME;
	}while(ME<0 || ME>10);  //cr�tica para aceitar m�dia dos exerc�cios
	
	//calculo da m�dia de aproveitamento
	MA=(N1+cbrt(N2)+pow(N3,0.2)+ME)/2.5;
	
	cout<<i<<endl;  //n�mero de identifica��o do aluno
	
	cout<<N1<<" "<<N2<<" "<<N3<<" "<<ME<<endl;  //saida das notas
	
	cout<<fixed<<setprecision(2);
	cout<<MA<<endl;  //saida da m�dia de aproveitamento
	
	if(MA>9)  //saida de conceito
		cout<<"A"<<endl;
	else if(MA>=7.5 && MA<9)
		cout<<"B"<<endl;
	else if(MA>=6 && MA<7.5)
		cout<<"C"<<endl;
	else if(MA>=4 && MA<6)
		cout<<"D"<<endl;
	else if(MA<4)
		cout<<"E"<<endl;
	
	if(MA>6)  //condi��o para ser aprovado
		cout<<"Aprovado"<<endl;
	else 
		cout<<"Reprovado"<<endl;
	
	return 0;
	
}