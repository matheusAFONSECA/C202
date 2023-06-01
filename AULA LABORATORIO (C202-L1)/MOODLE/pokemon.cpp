#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	//declaração de variáveis
	char nome[50];
	int n,f, p, POKE=0, FORCA=0;

	//entrada do número de pokemons
	cout<<"Declare o número de pokemons analisados: ";
	cin>>n;
	
	//inicio do comando for e da entrada de dados
	for(int i=1; i<=n; i++)
	{
		cout<<"Declare o nome do pokemon: ";
		cin>>nome;
		cout<<"Declare o número de pokebolas gastas para capturá-lo: ";
		cin>>p;
		cout<<"Declare a força do pokemon: ";
		cin>>f;
		FORCA = FORCA + f;   //soma das forças
		POKE = POKE + p;	//soma de pokebolas gastas
	}
	
	cout<<"Total de pokebolas: "<<POKE<<endl;
	cout<<"Média das forças: "<<FORCA/n<<endl;
	
	
	return 0;
		
}