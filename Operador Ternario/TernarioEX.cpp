#include <iostream>


int main()
{
	

	double MaiorNumero, Numero01, Numero02;

	std::cout << "Digite o primeiro Número\n";
	std::cin >> Numero01;
	
	std::cout << " Digite o segundo Número: \n";
	std::cin >> Numero02;

	if (Numero01 > Numero02)
	{
		std::cout << "\nNúmero 1 Maior que Número 2 \n";
	}
	else
	{
		std::cout << "Numero 02 maior que numero 01 \n";
	}


	std::cout << "\t******OPERADOR TERNARIO ******* \n";


	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;

	std::cout << "Maior Número Digitado: \n" << MaiorNumero << "\n";

	std::cout << "\t******OPERADOR TERNARIO-2 ******* \n";

	(Numero01 > Numero02) ? std::cout << "Número 01 Maior que Número02 \n" : std::cout << "Numero 02 maior que numero 01 \n";

	system("PAUSE");
}
