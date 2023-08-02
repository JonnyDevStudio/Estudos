#include <iostream> 
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Escolha = 0;
	do
	{
		std::cout << "\t**** Tickets Cinema****\n" << std::endl;
		std::cout << "1 - Para Meia Entrada\n" << std::endl;
		std::cout << "2 - Para Inteira\n" << std::endl;
		std::cout << "3 - Sair\n" << std::endl;
		std::cout << "\t**** Escolha Opcao****\n" << std::endl;
		std::cin >> Escolha;
		
		switch (Escolha)
		{ 
		case 1: std::cout << "Ticket Meia Comprado\n";
			break;
		case 2: std::cout << "Ticket Inteira Comprado\n";
			break;
		case 3: std::cout << "***Saindo do Menu*****\n";
			break;
		default: std::cout << "Opçao Invalida\n";
			break;
		}

	} while (Escolha!= 3);


	
	
	return 0;
}