#include <iostream> 
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));


	//Voce pode usar () para indicar valores literais 
	// {} � inicializa��o uniforme , valores literais quanto escalares (vetores enum) 

	int NumeroInteiro{ 12 };
	float NumeroReal{ 34.56 };
	char Caractere{ 'c' };

	//String � uma cadeia de caracteres


	std::string Texto{"Vou aprender C++ e descobrir o lado sombrio da for�a!"};
	std::printf("Valor N�mero Inteiro = %d \n", NumeroInteiro);
	std::printf("Valor Numero Real = %.2f \n", NumeroReal);

	std::cout << "\t***** Multiplas String em uma Linha ! ******* \n";

	
	std::printf("Valor Numero Inteiro = %d Numero Real = %4.f Caractere = %c - Texto = %s  \n", NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
	
	std::cout << "\t***** Spring com STD nao prcisa d c_str()! ******* \n";

	std::cout << "Texto da string:" << Texto << "\n";

	std::cout << "\t***** Olha que legal ******* \n";

	std::printf("O Valor do Caractere Digitado : %c na Tabela ASCII � %d \n", Caractere, Caractere);


	
	system("PAUSE");
	return 0;





}