#include <iostream>

int main()
{
	int soma = 0;
	for (int Num = 1; Num <= 100; Num++)
	{
		soma = soma + Num;

	}
	std::cout << "\nA soma dos Numeros de 1 a 100 : " << soma << "\n";
	system("PAUSE");
	return 0;
}