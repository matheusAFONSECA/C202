#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	int i;
	double pv1, pv2, mf;
	
	for (i = 1; i <= 3; i++ )  ///estrutura de repeti��o
	{
		cout<<"Declare a nota da prova 1 e prova 2 do aluno "<<i<<": "; //entrada de dados
		cin>>pv1>>pv2;
		mf = (pv1 + pv2)/2;   //calculo
		if (mf >= 50)  //condi��o e sa�da de dados
			cout<<"M�dia: "<<mf<<" - APROVADO"<<endl;
		else 
			cout<<"M�dia: "<<mf<<" - REPROVADO"<<endl;
	}
	
	return 0;
	
}