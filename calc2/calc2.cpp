#include <iostream>

float Soma(float Num1, float Num2);
float Subt(float Num1, float Num2);
float Mult(float Num1, float Num2);
float Divi(float Num1, float Num2);

int main()
{
	int Num1, Num2;

	std::cout << "\t Digite o primeiro Numero\n";
	std::cin >> Num1;

	std::cout << "\t Digite o segundo Numero\n";
	std::cin >> Num2;

	std::cout << "Resultado\n";
	std::cout << "Soma" << Soma(Num1, Num2) << "\n";
	std::cout << "Subitracao \n" << Subt(Num1, Num2) << "\n";
	std::cout << "Divisao\n" << Divi(Num1, Num2) << "\n";
	std::cout << "Multiplicacao \n" << Mult(Num1, Num2) << "\n";

	system("PAUSE");
	return 0;
}

float Soma(float Num1, float Num2)
{
	return Num1 + Num2;
}

float Subt(float Num1, float Num2)
{
	return Num1 - Num2;
}

float Mult(float Num1,float Num2)
{
	return Num1 * Num2;
}

float Divi(float Num1, float Num2)
{
	return Num1 / Num2;
}
