#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	int i, n, x=0, y=0;
	double pv1, pv2, mf;
	
	//entrada do n�meros de alunos
	cout<<"Declare a quantidade de alunos:";
	cin>>n;
	
	//estrutura de repeti��o
	for(i = 1; i <= n; i++)
	{
		//entrada de notas
		cout<<"Digite as notas da prova 1 e da prova 2 do aluno "<<i<<" :";
		cin>>pv1>>pv2;
		//calculos
		mf = (pv1 + pv2)/2;
		//condi��o e sa�da de dados
		if (mf >= 50)
			cout<<"M�dia: "<<mf<<" - APROVADO"<<endl;
		else 
			cout<<"M�dia: "<<mf<<" - REPROVADO"<<endl;
		
		if (mf >= 50)
			x++;
		else 
			y++;
	}
	
	cout<<"N�mero de aprovados: "<<x<<endl;
	cout<<"N�mero de reprovados: "<<y<<endl;
	
	return 0;
	
}