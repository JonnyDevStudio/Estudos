#include <iostream>


int main()
{
	

	double MaiorNumero, Numero01, Numero02;

	std::cout << "Digite o primeiro N�mero\n";
	std::cin >> Numero01;
	
	std::cout << " Digite o segundo N�mero: \n";
	std::cin >> Numero02;

	if (Numero01 > Numero02)
	{
		std::cout << "\nN�mero 1 Maior que N�mero 2 \n";
	}
	else
	{
		std::cout << "Numero 02 maior que numero 01 \n";
	}


	std::cout << "\t******OPERADOR TERNARIO ******* \n";


	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;

	std::cout << "Maior N�mero Digitado: \n" << MaiorNumero << "\n";

	std::cout << "\t******OPERADOR TERNARIO-2 ******* \n";

	(Numero01 > Numero02) ? std::cout << "N�mero 01 Maior que N�mero02 \n" : std::cout << "Numero 02 maior que numero 01 \n";

	system("PAUSE");
}
