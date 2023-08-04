#include <iostream>

int main()
{

	int* ptr;
	int Numero{ 234 };


	std::cout << "\t ***Crie uma variavel de nome Numero do tipo inteiro e valor igual a 234 *** \n" << "\n";

	std::cout << "Variavel inteira Numero : " << Numero << "\n" << "\n";


	std::cout << "\t ***Crie um ponteiro de nome Ponteiro capaz de apontar para uma variavel do tipo inteiro *** \n" << "\n";


	ptr = &Numero;



	std::cout << "Valor apontado  em prt : " << *ptr << "\n" << "\n";



	std::cout << "\t ***Troque o valor de numero para 1456 unsando Ponteiro *** \n" << "\n";

	*ptr = 1456;
	
	std::cout << "Valor apontado  em prt : " << *ptr << "\n";

	std::cout << "\t ***Mostre o endereco da memoria Ram em que estao carregados as variaveis Ponteiro e Numero: *** \n" << "\n";

	std::cout << "Endereco da memoria RAM que estao carregado variavel Numero: \n" << &Numero << "\n";
	std::cout << "Endereco da memoria RAM que estao carregado variavel Numero: \n" << &ptr << "\n";

	std::cout << "\t ***Crie um outro ponteiro de nomo OutroPtr: *** \n" << "\n";

	int* OutroPtr;



	std::cout << "\t ***Faça Outroptr Apontar para mesma variavel e ptr aponta *** \n" << "\n";
	OutroPtr = ptr;

	std::cout << "\t ***Usando Ponteiro some 200 ao valor contido em Numero : *** \n" << "\n";

	*ptr = Numero + 200;
	std::cout << "Valor apontado  em OutroPrt : " << *OutroPtr << "\n";
	std::cout << "Valor apontado  em prt : " << *ptr << "\n";




	system("PAUSE");
	return 0;
}