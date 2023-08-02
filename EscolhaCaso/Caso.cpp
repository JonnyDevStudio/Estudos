#include <iostream>

int main()
{
	int Num1, Num2;
	char Operacao;

	std::cout << "\tDigite um Numero : \n";
	std::cin >> Num1;

	std::cout << "\tDigite outro Numero : \n";
	std::cin >> Num2;

	std::cout << "\tQual Operacao deseja efetuar? \n + Adicao \n - Subitracao \n * Multiplicacao \n / Divisao \n ";

	std::cout << "\tDigite sua opcao :\n ";
	std::cin >> Operacao;

	switch (Operacao)
	{
	case '+':
		std::cout << "Soma de Num1 + Num2 =\n " << Num1 + Num2 << "\n";
		break;
	case '-':
		std::cout << "Subtracao de Num1 - Num2 =\n " << Num1 - Num2 << "\n";
	case '*':
		std::cout << "Multipçicacao de Num01 * Num02 =\n " << Num1 * Num2 << "\n";
	case '/':
		std::cout << "Divisao de Numero 01 / Numero 02 = \n" << Num1 / Num2 << "\n";

	default:
		std::cout << "\nVoce nao digitou um operador valido !\n";
		break;
	}
	
	std::cout << "\n";
	system("PAUSE");



}