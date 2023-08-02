#include <iostream>

int main()
{
	int* ptr;

	int Numero = { 101 };

	std::cout << "Endereco de Numero:  " << &Numero << "\n";
	std::cout << "Endereco de Ptr: " << &ptr << "\n";

	ptr = &Numero;



	system("PAUSE");
	return 0;
}