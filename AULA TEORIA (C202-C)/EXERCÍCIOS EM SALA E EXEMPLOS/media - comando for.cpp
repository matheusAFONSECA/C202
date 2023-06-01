#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	int i;
	double pv1, pv2, mf;
	
	for (i = 1; i <= 3; i++ )  ///estrutura de repetição
	{
		cout<<"Declare a nota da prova 1 e prova 2 do aluno "<<i<<": "; //entrada de dados
		cin>>pv1>>pv2;
		mf = (pv1 + pv2)/2;   //calculo
		if (mf >= 50)  //condição e saída de dados
			cout<<"Média: "<<mf<<" - APROVADO"<<endl;
		else 
			cout<<"Média: "<<mf<<" - REPROVADO"<<endl;
	}
	
	return 0;
	
}