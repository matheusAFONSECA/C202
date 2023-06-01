#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis
	int n, m, maior, x;
	
	cin>>n;  //entrada do número de idades que serão analisadas
	
	m=0;  //variável que será reponsável para ser a flag
	maior=0;  //variável responsável por indicar a maior idade
	
	do  //inicio do comando do-while
	{
		cin>>x;  //entrada da idade a ser analisada
		if (x<0)
			m=m;
		else if (x>maior)
		{	
			maior=x;  //definição da idade que será a maior
		   	m++;
		}
		else if (x>0)
			m++;
	}while(m!=n);
	
	cout<<maior<<endl;
	
	return 0;
}