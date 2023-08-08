#include <iostream>
//Desenvolva um programa que receba do usuario n de elemento desejado 
//Armazena estes dados em um array.
//Depois mostre na tela qual foi o maio e o menor elemento deste array!


int main()
{
	int NumElementos;
	int Array[20];

	int Min, Max;



	std::cout << "Digite o Numero de Elementos Desejado: " << "\n";
	std::cin >> NumElementos;


	for (int i = 0; i < NumElementos; i++)
	{

		std::cout << "Digite o Elemento " << (i + 1) << " : ";
		std::cin >> Array[i];
	}

	Min = Array[0];
	Max = Array[0];



	for (int i = 0; i < NumElementos; i++) 
	{
		if (Array[i] > Max)
			Max = Array[i];

		else if (Array[i] < Min)
		{
			Min = Array[i];
		} 
			
	

	}

	std::cout << "O Maior Numero : " << Max << "\n";
	std::cout << "O Menor Numero : " << Min << "\n";

	system("PAUSE");
	return 0;
}