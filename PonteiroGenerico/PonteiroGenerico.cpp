#include <iostream>

int main()
{
	int Numero{ 4890 };
	int Letra{ 'E' };


	//Declarei ponteiro vazio (VOID)
	// Significa que ele ainda na tem um tipo apontado !
	//Isso e util quando nao sabemos o tipo de dado que vai retornar e podemos  depois apontar a  selecionada

	std::cout << "\t***** Aplicacao do ponteiro tipo char ******\n"<< "\n";

	void* ptrG;
	//Agora ptr g passa apontar para  letra 
	ptrG = &Letra;


	//Devemos indicar o tipo que vamos assumir no caso -  *(char*)ptrG
	std::cout << "Valor de Letra Via ptrG: \n" << *(char*)ptrG << "\n";


	std::cout << "\t***** Aplicacao do ponteiro tipo int ******\n"<< "\n";

	ptrG = &Numero;

	std::cout << "Valor de Numero Via ptrG: " << *(int*)ptrG << "\n"<< "\n";


	std::cout << "\t***** Veja que com apenas o ponteiro ptrG, conseguimos manipular e intercalar entre os tipos assumido de variaveis  ******\n";

	





	system("PAUSE");
	return 0;
}