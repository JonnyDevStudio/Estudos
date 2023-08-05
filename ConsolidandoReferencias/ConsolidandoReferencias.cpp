#include <iostream>



int main()
{
	int Numero{ 1024 };
	int Numero2{ 2024 };


	//REF SEMPRE DEVE SER VINCULADA A UMA VARIAVEL AO INICIAR !
	int& RefNum = Numero2;

	int* ptr = &Numero;
	*ptr = 4048;

	std::cout << "Valor de Numero em  : " << *ptr << "\n";

	//No ciclo de vida dem um ponteiro, podemos reatribuir para uma outra variavel.

	ptr = &Numero2;
	*ptr = Numero + 2000;

	std::cout << "Valor de Numero2: " << *ptr << "\n";


	system("PAUSE");
	return 0;
}