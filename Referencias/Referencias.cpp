#include <iostream>

int main()
{
	int Numero{ 1024 };
	char Letra{ 'A' };
	//Declara uma referencia um (ALIAS) para variavel numero , neste caso nao e criado a reagiao de memoria , ref nao tem endereco na ram e sim na propria variavel .
	int& Ref = Numero;


	std::cout << " \t ****Valor de Numero Usando REF ****\n\n";

	std::cout << "Valor de numero : " << Ref << "\n";

	//Basta coloca o nome da Referencia !
	 
	std::cout << "\nValor Endereco de Numero: " << &Numero << "\n";
	std::cout << "\nValor Endereco de Numero: " << &Ref << "\n";

	int* ptr = &Numero;

	std::cout << "\nValor Endereco de Ptr na RAM: " << &ptr << "\n";
	std::cout << "Valor endereco contido dentro de Ptr: " << ptr;




	system("PAUSE");
	return 0;
}