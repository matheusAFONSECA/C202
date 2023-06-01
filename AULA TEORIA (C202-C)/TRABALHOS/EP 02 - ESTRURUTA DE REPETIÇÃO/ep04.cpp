#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");  //aceitar o idioma portugu�s
	
	//declara��o de vari�veis
	double z, y, q1s, q1n, q2s, q2n, q3s, q3n;
	int n, q1, q2, q3;
	
	//entrada do n�mero de alunos
	cout<<"N�mero de alunos que responderam a pesquisa: ";
	cin>>n;
	
	q1s=0;  //vari�vel que representa o sim na primeira pergunta
	q1n=0;  //vari�vel que representa o n�o na primeira pergunta
	q2s=0;  //vari�vel que representa quem quer voltar �s aulas presenciais na segunda pergunta
	q2n=0;  //vari�vel que representa quem n�o que voltar �s aulas presenciais na segunda pergunta
	q3s=0;  //vari�vel que representa o sim na terceira pergunta
	q3n=0;  //vari�vel que representa o n�o na terceira pergunta
	z=0;  //vari�vel que representa quem mora em santa rita e que pretende voltar �s aulas presenciais
	y=0;  //vari�vel que representa quem n�o mora em santa rita e que pretende voltar as aulas presenciais
	
	//entra de dados
	for(int i=1; i<=n; i++){
		do{
			cout<<endl<<"O aluno "<<i<<" se sente seguro para voltar as aulas?(1-sim e 2-n�o) ";
			cin>>q1;
		}while(q1!=1 && q1!=2);  //critica para que seja realizado a entrada do dado correto
		switch(q1){
			case 1: 
				q1s++;  //incrementa 1 para a resposta sim na primeira pergunta
				break;
			case 2:
				q1n++;  //incrementa 1 para a resposta n�o na primeira pergunta
				break;
		}
		do{
			cout<<"O aluno "<<i<<" pretende voltar �s aulas presenciais (op��o 1), ou continuar com as aulas remotas (op��o 2)? ";
			cin>>q2;
		}while(q2!=1 && q2!=2);  //critica para que seja realizado a entrada do dado correto
		switch(q2){
			case 1: 
				q2s++;  //incrementa 1 para a resposta sim na segunda pergunta
				break;
			case 2:
				q2n++;  //incrementa 1 para a resposta n�o na segunda pergunta
				break;
		}
		do{
			cout<<"O aluno "<<i<<" reside em Sta. Rita do Sapuca�?(1-sim e 2-n�o): ";
			cin>>q3;
			cout<<endl;
		}while(q3!=1 && q3!=2);  //critica para que seja realizado a entrada do dado correto
		switch(q3){
			case 1: 
				q3s++;  //incrementa 1 para a resposta sim na terceira pergunta
				break;
			case 2:
				q3n++;  //incrementa 1 para a resposta n�o na terceira pergunta
				break;
		}
		if(q2==1 && q3==1)  /*condi��o que diz quem pretende voltar as aulas presenciais e � de Santa Rita*/
			z++;
		if(q2==1 && q3==2)  /*condi��o que diz quem pretende voltar as aulas presenciais e n�o � de Santa Rita*/
			y++;
	}
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	cout<<endl<<"Alunos que se sentem seguros com a volta �s aulas presenciais: "<<(q1s/n)*100<<" %"<<endl;
	cout<<"Alunos que pretendem continuar com as aulas remotas: "<<(q2n/n)*100<<" %"<<endl<<endl;
	cout<<"Alunos que residem em Santa Rita e querem voltar �s aulas presenciais: "<<(z/n)*100<<" %"<<endl;
	cout<<"Alunos que n�o residem em Santa Rita e querem voltar �s aulas presenciais: "<<(y/n)*100<<" %"<<endl;
	
	return 0;
	
}