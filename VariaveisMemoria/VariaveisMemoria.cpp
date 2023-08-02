#include <iostream>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero = 10;
	double Salario = 4576.90;

	std::cout << "\n Tamanho Variavel Número: " << sizeof(Numero) << " Bytes" << "\n";
	std::cout << "Tamanho Variavel Salário: " << sizeof(Salario) << " Bytes" << "\n";
	std::cout << "\n Endereco de memoria da Variavel Número: " << &Numero << "\n";
	std::cout << "\n Endereco de memória da Variavel Número: " << &Salario << "\n";

	


	
	system("PAUSE");

	return 0;
}