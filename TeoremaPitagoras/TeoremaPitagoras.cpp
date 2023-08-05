#include <iostream>
#include <math.h>

int main()
{
	float c, a, b;
	int opcao;

	opcao: 

	std::cout << "\tQue valor deseja calcular?" << std::endl;

	std::cout << "1 - Hipotenusa" << std::endl;
	std::cout << "2 - Cateto" << std::endl;
	std::cout << "3- Sair." << std::endl;

	std::cin >> opcao;


	if (opcao == 1)
	{

		std::cout << "Incira o valor do primeiro cateto:" << std::endl;
		std::cin >> a;
		std::cout << "Incira o valor do segundo cateto:" << std::endl;
		std::cin >> b ;
		std::cout << "\nValores dos catetos sao: \n" << "Cateto 1: " << a << "Cateto 2: " << b << "\n";

		c = sqrt((pow(a, 2) + pow(b, 2)));

		std::cout << " A Hipotenuza tem o valor de :" << c << "\n";
	}

	else if (opcao == 2)
	{
		std::cout << "Incira o valor da Hipotenusa : " << std::endl;
		std::cin >> c;

		std::cout << "Incira o valor do cateto" << std::endl;
		std::cin >> a ;


		b = sqrt(pow(c, 2) - pow(a, 2));

		std::cout << "\nValor do Cateto : " << b;
	}

	else if(opcao == 3)
	{
		std::cout << " Saindo do programa ! ";
		return 0;


	}
	return 0;
}