#include <iostream>
#include <tchar.h>
//BUSCAR LEITOR DE ACENTUACAO EM PORTUGUES

int main()
{

	_tsetlocale(LC_ALL, _T("portuguese"));
	//INSERIR ACENTUACAO NO CODIGO 

	int NumVidas = 5;
	int Pontuacao = 1350;
	
	std::cout << "****Inicio do Jogo****" << std::endl << std::endl;

	std::cout << "Vidas jogador:" << NumVidas << std::endl;
	//Colocar numero de vida descrito na variavel como numero atual do jogador 

	std::cout << "Pontua��o :" << Pontuacao << std::endl;
	//Colocar numero da pontuacao de variavel conectada a frase . 


	std::cout << "Endere�o que NumVidas Ocupa na Mem�ria RAM" << &NumVidas << std::endl;

	std::cout << "Endere�o que Pontua��o Ocupa na Mem�ria RAM" << &Pontuacao << std::endl << std::endl;

	std::cout << "****Durante o Jogo****" << std::endl;

	Pontuacao = Pontuacao + 150;
	NumVidas = NumVidas - 1;


	std::cout << "Vidas jogador:" << NumVidas << std::endl;
	//Colocar numero de vida descrito na variavel como numero atual do jogador 

	std::cout << "Pontua��o :" << Pontuacao << std::endl;
	//Colocar numero da pontuacao de variavel conectada a frase . 




	std::cout << "teste 2" << std::endl;
	std::cout << "***********" << std::endl;

	system("PAUSE");


}