#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	char nome[50];
	int n,f, p, POKE=0, FORCA=0;

	//entrada do n�mero de pokemons
	cout<<"Declare o n�mero de pokemons analisados: ";
	cin>>n;
	
	//inicio do comando for e da entrada de dados
	for(int i=1; i<=n; i++)
	{
		cout<<"Declare o nome do pokemon: ";
		cin>>nome;
		cout<<"Declare o n�mero de pokebolas gastas para captur�-lo: ";
		cin>>p;
		cout<<"Declare a for�a do pokemon: ";
		cin>>f;
		FORCA = FORCA + f;   //soma das for�as
		POKE = POKE + p;	//soma de pokebolas gastas
	}
	
	cout<<"Total de pokebolas: "<<POKE<<endl;
	cout<<"M�dia das for�as: "<<FORCA/n<<endl;
	
	
	return 0;
		
}