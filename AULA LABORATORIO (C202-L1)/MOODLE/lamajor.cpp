#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis
	int n, m, maior, x;
	
	cin>>n;  //entrada do n�mero de idades que ser�o analisadas
	
	m=0;  //vari�vel que ser� repons�vel para ser a flag
	maior=0;  //vari�vel respons�vel por indicar a maior idade
	
	do  //inicio do comando do-while
	{
		cin>>x;  //entrada da idade a ser analisada
		if (x<0)
			m=m;
		else if (x>maior)
		{	
			maior=x;  //defini��o da idade que ser� a maior
		   	m++;
		}
		else if (x>0)
			m++;
	}while(m!=n);
	
	cout<<maior<<endl;
	
	return 0;
}