#include <iostream>




int main()
{
	int Numero01;
	int Numero02;
	int Resultado;
	bool Comparacao;





	std::cout << "\t********* RECEBENDO VALORES  ********" << "\n""\n";



	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;

	std::cout << "\t********* RECEBENDO VALORES  ********" << "\n""\n";

	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << std::endl;

	std::cout << "\t********* Iniciando Pratica de Operador Aritimeticos  ********" << "\n""\n";

	Comparacao = (Numero01 == Numero02);

	std::cout << "Numero 01    igual a Numero 02 : " << Comparacao << "\n";

	Comparacao = (Numero01 != Numero02);
	std::cout << "Numero 01 diferente de numero 02 : " << Comparacao << "\n";

	Comparacao = (Numero01 > Numero02);
	std::cout <<"Numero 01 maior que numero 02 : " << Comparacao << "\n";

	Comparacao = (Numero01 < Numero02);
	std::cout << "Numero 01 menor que Numero 02: " << Comparacao << "\n";

	Comparacao = (Numero01 >= Numero02);
	std::cout << "Numero 01 maior ou igual a numero 02 : " << Comparacao << "\n";

	Comparacao = (Numero01 <= Numero02);
	std::cout << "Numero 01 menor ou igual a Numero02 : " << Comparacao << "\n";

	std::cout << "\t********* Iniciando Pratica de Operando Aritimeticos  ********" << "\n""\n";

	Resultado = (Numero01 + Numero02);
	std::cout << "O resultado entre a soma dos numeros e: " << Resultado << "\n";

	Resultado = (Numero01 - Numero02);
	std::cout << "A subitracao entre os dois numeros e: " << Resultado << "\n";

	Resultado = (Numero01 * Numero02);
	std::cout << "A multiplicacao entre os numeros e: " << Resultado << "\n";

	Resultado = (Numero01 / Numero02);
	std::cout << "A divisao entre os numeros e: " << Resultado << "\n";

	Resultado = (Numero01 % Numero02);
	std::cout << "O resto entre a divisao dos numeros e: " << Resultado << "\n";





	system("PAUSE");






}