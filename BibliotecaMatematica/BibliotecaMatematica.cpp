#include <iostream>
#include "Matematica.h"

int NumeroGlobal = 5;


int main()
{
	int Numero1, Numero2;


	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Numero1;

	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Numero2;

	std::cout << "\nResuçtado Operadores Matematicas\n";

	std::cout << "Soma : " << Soma(Numero1, Numero2) << "\n";
	std::cout << "Subtracao : " << Subt(Numero1, Numero2) << "\n";
	std::cout << "Multiplicacao : " << Mult(Numero1, Numero2) << "\n";
	std::cout << "Divisao : " << Divi(Numero1, Numero2) << "\n";
	std::cout << "Potencia : " << Pote(Numero1, Numero2) << "\n";
	std::cout << "Raiz Quadrade Numero 1 :" << RaizQ(Numero1) << "\n" << "Raiz Quadrada Numero 2 :" << RaizQ(Numero2) << "\n";

	system("PAUSE");
	return 0;
} 