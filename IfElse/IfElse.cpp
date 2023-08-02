#include <iostream>
#include <string>

int main()
{

	bool bFezSol, bCarroPronto, bSalariodepositado;
	bool bAcesso;

	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\n Acesso Autorizado!!" << "\n";
		bAcesso = true;
		system("PAUSE");
	}
	else
	{
		std::cout << "\n Acesso Negado!!" << "\n";
		system("PAUSE");
		exit(0);

	}

	bFezSol = bCarroPronto = bSalariodepositado = true;


	if (bAcesso == true)
	{

		if (bFezSol && bCarroPronto && bSalariodepositado)
		{
			std::cout << "Vai dar Praia!! " << std::endl;
		}
		
		else
		{
			std::cout << "Nao vai dar praia " << std::endl;
		}


	}

	system("PAUSE");
}