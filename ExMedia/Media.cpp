#include <iostream>



int main()
{
	float Numero1;
	float Numero2;
	float Numero3;
	float Media;

	setlocale(LC_ALL, "portuguese");

	std::cout << "\t****Digite sua Nota 01 :****" << std::endl;
	std::cin >> Numero1;
	std::cout << "Seu primeira nota  = " << Numero1 << "\n";


	//Primeira variavel armazenada

	std::cout << "\t****Digite sua Nota 02****" << std::endl;
	std::cin >> Numero2;
	std::cout << "Sua segunda nota = " << Numero2 << std::endl;
	//Segunda variavel armazenada e mostrada ao usuaio

	std::cout << "\t****Digite sua Nota 03****" << std::endl;
	std::cin >> Numero3;
	std::cout << "Sua terceira nota = " << Numero3 << "\n";
	//Terceira variavel armazenada e mostrada ao usuaio

	std::cout << "\tSuas notas digitadas sao: " << std::endl;
	std::cout << Numero1 << "   " << Numero2 << "   " << Numero3 << std::endl;
	//Apresentando os Valores

	Media = (Numero1 + Numero2 + Numero3) / 3;

	std::cout << "\t****Sua Media e de :****" << std::endl;
	std::cout << Media << std::endl;


		system("PAUSE");


}

