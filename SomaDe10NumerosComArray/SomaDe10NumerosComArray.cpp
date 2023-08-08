#include <iostream>
//EX- Soma de 10 Numeros
int main()
{

	double Numeros[10];
	double Soma{ 0.0 };


	//(i+1) Nao alteramos o valor , pois nao tem atribuicaoo i= (i+1) 
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Digite Um Numero : " << (i + 1) << " : ";
		std::cin >> Numeros[i];
		Soma = Soma + Numeros[i];

		system("CLS");

	}

	
	std::cout << "Soma dos Numeros : " << Soma << "\n";


	return 0;
}