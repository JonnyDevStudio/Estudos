#include <iostream>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero = 10;
	double Salario = 4576.90;

	std::cout << "\n Tamanho Variavel N�mero: " << sizeof(Numero) << " Bytes" << "\n";
	std::cout << "Tamanho Variavel Sal�rio: " << sizeof(Salario) << " Bytes" << "\n";
	std::cout << "\n Endereco de memoria da Variavel N�mero: " << &Numero << "\n";
	std::cout << "\n Endereco de mem�ria da Variavel N�mero: " << &Salario << "\n";

	


	
	system("PAUSE");

	return 0;
}