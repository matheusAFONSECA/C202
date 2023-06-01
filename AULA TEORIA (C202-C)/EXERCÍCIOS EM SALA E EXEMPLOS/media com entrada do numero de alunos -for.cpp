#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	int i, n;
	double pv1, pv2, mf;
	
	//entrada do números de alunos
	cout<<"Declare a quantidade de alunos:";
	cin>>n;
	
	//estrutura de repetição
	for(i = 1; i <= n; i++)
	{
		//entrada de notas
		cout<<"Digite as notas da prova 1 e da prova 2 do aluno "<<i<<" :";
		cin>>pv1>>pv2;
		//calculos
		mf = (pv1 + pv2)/2;
		//condição e saída de dados
		if (mf >= 50)
			cout<<"Média: "<<mf<<" - APROVADO"<<endl;
		else 
			cout<<"Média: "<<mf<<" - REPROVADO"<<endl;
	}
	
	return 0;
	
}