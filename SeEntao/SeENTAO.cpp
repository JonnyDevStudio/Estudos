#include <iostream>
#include <string>

int main()
{
	bool bFezSol, bCarropronto, bSalarioDepositado;
	bool bAcesso;

	std::string SenhadeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	if (SenhaDigitada == SenhadeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		system("PAUSE");
	}

	else
	{
		std::cout  << "Acesso Negado! " << "\n";
		system("PAUSE");
		
	}
	bFezSol = bCarropronto = bSalarioDepositado = true;
	if (bAcesso == (true));
	
	{

		if (bFezSol && bCarropronto && bSalarioDepositado)
		{

			std::cout << "Vai dar pria!!!" << std::endl;
		}

		else
		{
			std::cout << "Nao vai da Praia!!" << "\n";
		
		
		}



	}
	system("PAUSE");
	return 0;
}
	