#include <iostream>
#include <tchar.h>

int main()
{
	double Numero;
	bool ResultadoLogico;
	bool ResultadoLogico2;


	_tsetlocale(LC_ALL,_T("portuguese"));


	std::cout << "Digite um N�mero: ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";

	ResultadoLogico = ((Numero > 100) && (Numero != 0));

	std::cout << "O reultado logico da express�o ((Numero > 100) && (Numero != 0)) � : " << ResultadoLogico << std::endl;

	ResultadoLogico2 = ((Numero == 100) || (Numero > 200)) && (Numero < 1000);

	std::cout << "O resultado l�gico da express�o ((Numero == 100) || (Numero > 1000 )) && (Numero <1000) � : " << ResultadoLogico << std::endl;

	system("PAUSE");
	return 0;

}