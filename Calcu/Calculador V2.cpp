#include <iostream>

//Etapas do programa
//Entrada: Numeros Reais
//Processamento : Funcao Logica ( Soma , Divisao, Multipl,Subtr)
//Saida: Saida



float Soma(float Num1, float Num2);
float Subtracao(float Num1, float Num2);
float Multipl(float Num1, float Num2);
float Divi(float Num1, float Num2);


int main()
{

	float Num1, Num2;

	std::cout << "Criado por joao cursino\n ";
	std::cout << "Digite o Primeiro Numero:";
	std::cin >> Num1;
	std::cout << "Digite o Segundo Numero:";
	std::cin >> Num2;

	std::cout << "\n***** Resultado das Operacoes **** \n";

	std::cout << "Resultado da Adicao e =\n " << Soma(Num1, Num2) << "\n";

	std::cout << "Resultado da Subtracao e = \n" << Subtracao(Num1, Num2) << "\n";

	std::cout << "Resultado da Multiplicacao e = \n " << Multipl(Num1, Num2) << "\n";

	std::cout << "Resultado da Divisao é = \n" << Divi(Num1, Num2) << "\n";


		system("PAUSE");
	return 0;
}

float Soma(float Num1, float Num2)
{
	return Num1 + Num2;
}

float Subtracao(float Num1, float Num2)
{
	return Num1 - Num2;
}

float Multipl(float Num1, float Num2)
{
	return Num1 * Num2;
}

float Divi(float Num1, float Num2)
{
	return  Num1 / Num2;
}
