#include <iostream>

//Tipo de retorno da funcao
//Funcao >> tipos de variaveis >> Nomes das variaveis utilizadas 

int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	
	return Numero + NumeroASerSomado;



}
void Mensagem()
{
	std::cout << "\nMensagem de Marte .... Chegamos Bem ...\n";

}








int main()
{

	int Numero,NumeroASerSomado;


	Mensagem();

	std::cout << " Digite um Numero: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite um numero a ser somado: " << "\n";
	std::cin >> NumeroASerSomado;
	std::cout << " A soma deste Numero1 com Numero 2: \n" << Numero + NumeroASerSomado << "\n" << SomaAUmNumero(Numero, NumeroASerSomado);

	system("PAUSE");



	return 0;
}