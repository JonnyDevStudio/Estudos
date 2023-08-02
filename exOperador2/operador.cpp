#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int NumeroInteiro{ 12 };
	float NumeroReal{ 34.36 };
	char Caractere{ 'c' };

	std::string Texto ("Texto da String");
	std::printf("Valor Número Inteiro = %d \n ", NumeroInteiro);
	std::printf("Valor Número Real = %.2f ", NumeroReal);
	std::printf("Valor Numero inteiro = %d Numero Real = %.2f - Caractere : %c - Texto: %s ", NumeroInteiro, NumeroReal, Caractere, Texto );

	//%d indica que voce quer que seja colocado na string
	//valor numero inteiro = %d - o valor da variavel NumeroInteiro

	return 0;
	system("PAUSE");	



}