#include <iostream>
//Crie uma funcao que indique se o numero e par ou impar. 
//Receba numero do usuario e exibba na tela o numero recebido e  delhare se ele e pár ou impar.

bool isPar(int num1);






int main()
{
	int Numero;
	std::cout << "\t****** Textando Funcoes , Par ou Impar !*******\n";
	std::cout << "Digite um Numero Inteiro :\n";
	std::cin >> Numero;

	if (isPar(Numero) == true)
	{
		std::cout << "\n Seu Numero escolido e : " << Numero << "PAR\n";
	}

	else if (isPar(Numero) == false)
	{
		std::cout << "\n Seu Numero escolido e : " << Numero << "IMPAR\n";



	}







	return 0;
}

bool isPar(int num1)
{
	//se o resto da divisao for igual a 0 
	//o nomero e par 
	if(num1 % 1 == 0)
	return true;
	return false;
	
		

	
}
