#include <iostream>

int main()
{
	int Numero = 0;

	std::cout << "\t****Exercicios de loop 1 - 50 em PAR *****\n";

	while (Numero <= 50)
	{

		//Para resultados pares a divisao por 2 e  o resto deve ser diferente de  = 0
		if (Numero % 2 != 0)
		{
			std::cout << Numero;
		}

		
		Numero++;


	}


	system("PAUSE");

}