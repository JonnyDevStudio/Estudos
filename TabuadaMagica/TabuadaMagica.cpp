#include <iostream>

int main()
{
	setlocale(LC_ALL, ("portuguese"));
	int Numero;

	
	std::cout << "\t\t**** Resolva o problema :\n\n";

	std::cout << "\tEscreva um programa em C++ que solicite ao usuário um número inteiro positivo e, em seguida, exiba a tabuada de multiplicação desse número de 1 a 10.\n";


	// Primeiro passo registrar a variavel solicitada
	std::cout << "Digite um numero inteiro positivo :";
	std::cin >> Numero;
	//verificacao de procedimento 
	if (Numero <= 0)
	{
		std::cout << "Numero  deve ser inteiro e positivo !";
			return 1;
	}

	//iniciar tabuada 

	std::cout << "Tabuada de Multiplicacao Para o numer: " << Numero << "\n";

	for (int i = 0; i <= 10; i++)
	{
		std::cout << Numero << " x " << i << " = " << (Numero * i) << "\n";


	}



	return 0;


}