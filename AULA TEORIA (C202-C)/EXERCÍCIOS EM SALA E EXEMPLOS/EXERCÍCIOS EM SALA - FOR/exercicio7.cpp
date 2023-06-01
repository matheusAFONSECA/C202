#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variáveis
	int n, i, c1=0, c2=0, c3=0, op;
	
	//entrada do números de alunos 
	cout<< "qual a quantidade de alunos? ";
	cin>>n;
	
	for (i = 1; i<=n; i++)
	{
		cin>>op;
		
		if(op==1)
			c1++;
		else if (op==2)
			c2++;
		else 
			c3++;
	}
	
	cout<<"Números de alunos que escolheram a opção 1: "<<c1<<endl;
	cout<<"Números de alunos que escolheram a opção 2: "<<c2<<endl;
	cout<<"Números de alunos que escolheram a opção 3: "<<c3<<endl;
	
	return 0;
	
	
}