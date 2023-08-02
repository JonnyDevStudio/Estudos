#include <iostream>
#include <tchar.h>

int main()
{
	double Numero;
	bool ResultadoLogico;
	bool ResultadoLogico2;


	_tsetlocale(LC_ALL,_T("portuguese"));


	std::cout << "Digite um Número: ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";

	ResultadoLogico = ((Numero > 100) && (Numero != 0));

	std::cout << "O reultado logico da expressão ((Numero > 100) && (Numero != 0)) é : " << ResultadoLogico << std::endl;

	ResultadoLogico2 = ((Numero == 100) || (Numero > 200)) && (Numero < 1000);

	std::cout << "O resultado lógico da expressão ((Numero == 100) || (Numero > 1000 )) && (Numero <1000) é : " << ResultadoLogico << std::endl;

	system("PAUSE");
	return 0;

}