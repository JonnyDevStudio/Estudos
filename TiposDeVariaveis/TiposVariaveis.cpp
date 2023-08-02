#include <iostream>
#include <iomanip>
#include <fcntl.h>
#include <io.h>


int main()
{
	
	int Numero;
	float Numero2;
	double Numero3;
	char Caractere = 'Ö';
	char Caractere2 = 'k';



	Numero = 54;
	Numero2 = 75.35f;
	Numero3 = 25445.90455551;



	

	

	std::cout << "\t******** VARIAVEL TIPO INTEIRA ******** " << "\n""\n";

	std::cout << "Valor Numero :" << Numero << std::endl;
	std::cout << "Tamanho da variavel Numero :" << sizeof(Numero) << "Bytes" << std::endl;
	std::cout << "Endereco Carregado na memoria: " << &Numero << std::endl;

	std::cout << "\t******** VARIAVEL TIPO FLOAT ******** " << "\n""\n";

	std::cout << "Valor do Numero Float :" << Numero2 << "\n";
	std::cout << "Tamanho da variavel float Numero :" << sizeof(Numero2) << "Bytes" << "\n";
	std::cout << "Endereco carregado na memoria :" << &Numero2 << "\n""\n";

	std::cout << "\t******** VARIAVEL TIPO DOUBLE ******** " << "\n""\n";

	std::cout <<"Valor do Numero Double :" << std::setprecision(12) << Numero3 << "\n";
	std::cout <<"Tamanho da Variavel tipo Double : " << sizeof(Numero3) << "Bytes" << "\n";
	std::cout <<"Endereco Carregado na Memoria :" << &Numero3 << "\n""\n";


	std::cout << "\t******** VARIAVEL TIPO CHAR 1 ******** " << "\n""\n";


	std::cout << "Valor do Char :" << Caractere << "\n";
	std::cout << "Tamanho da variavel tipo CHAR  : " << sizeof(Caractere) << "Bytes" << "\n";
	std::cout << "Endereco carregado na memoria : " << (void *)&Caractere << "\n""\n";


	std::cout << "\t******** VARIAVEL TIPO CHAR 2 ******** " << "\n""\n";


	std::cout << "Valor do Char :" << Caractere2 << "\n";
	std::cout << "Tamanho da variavel tipo CHAR  : " << sizeof(Caractere2) << "Bytes" << "\n";
	std::cout << "Endereco carregado na memoria : " << (void*)&Caractere2 << "\n""\n";


	std::cout << "\t******** VARIAVEL TIPO CHAR UNICODE ******** " << "\n""\n";



	_setmode(_fileno(stdout), _O_U16TEXT);
	std::wcout << L"\u263A""\n""\n";
	





	system("PAUSE");




}