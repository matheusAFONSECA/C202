#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	int m;
	float nota1, nota2, media;
	
	do
	{
		cout<<"Digite a sua matricula: ";
		cin>>m; //entrada da matricula do aluno
		cout<<"Declare as notas da prova 1 e 2, respectivamente: ";
		cin>>nota1>>nota2; //entrada de notas
		media=(nota1+nota2)/2; //calculo da media/ 
		cout<<"A m�dia do aluno de matricula "<<m<<" �: "<<media<<endl;
		if (media>=60) //condi��o para receber aprova��o
			cout<<"APROVADO!!!"<<endl;
		else if(media<30)
			cout<<"REPROVADO"<<endl;
		else 
			cout<<"EXAME"<<endl;
		
	}while(m>=1); //caso a condi��o seja falsa � deixado de lado o boloco de comando e segue o programa
	
	return 0;
	
}