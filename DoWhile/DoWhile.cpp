#include <iostream>
#include <locale.h>

int manin()
{

	setlocale(LC_ALL, "portuguese");
	int Escolha = 0;

	do
	{
		std::cout << "\t****Tickets Cinema***\n" << std::endl;

		std::cout << "1 - Para Meia Entrada\n";
		std::cout << "2 - Para Inteira\n";
		std::cout << "\nSair";
		
		std::cin >> Escolha;

		switch (Escolha)
		{
		
		case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
			break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
			break;
		case 3: std::cout << "\nSaindo do Menu\n";
			break;




		default: std::cout << "\nOpção Invalida\n";
			break;
		}
	




		std::cout << "\t****Escolha sua Opção: ****\n";

	} while (Escolha != 3);

	std::cin >> Escolha;
}