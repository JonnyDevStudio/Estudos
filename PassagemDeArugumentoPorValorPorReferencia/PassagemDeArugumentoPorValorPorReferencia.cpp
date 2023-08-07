#include <iostream>

void TrocaNumeros(int& Num1, int& Num2);
int main()
{
	setlocale(LC_ALL, "portuguese");
	//Criacao de espaco para variaveis
	int Num1, Num2;
	//Armazenando dados vinda do usuario.
	std::cout << "Digite o Primeiro Número: \n";
	std::cin >> Num1;
	std::cout << "Digite o Segundo Número: \n";
	std::cin >> Num2;

	std::cout << "\n Valores das variavel antes da utilização de ref: " << "Numero1 = " << Num1 << " Numero2 = " << Num2 << "\n";
	std::cout << "\tValores depois de aplicar a funcao TrocaNumeros:****\n";
	TrocaNumeros(Num1, Num2);
	std::cout << "\nNumero1 = " << Num1 << "\n";
	std::cout << "\nNumero2 = " << Num2 << "\n";


	system("PAUSE");
	return 0;
}

void TrocaNumeros(int* Num1, int* Num2)
{
	// Como fazer a troca de valores com essa funcao  .
	int Temp{ *Num1 };
	//Num 1 
	*Num1 = *Num2;
	*Num2 = Temp;

	
}
