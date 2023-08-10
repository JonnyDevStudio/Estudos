#include <iostream>
#include <array>


void MostrarVetor(int Array[], int TamVetor);


int main()
{
	int Vetor[] = { 1,2,3,4,5,6,7,8,9,10 };

	//Sizeof devolve o numero em bytes do tamanho de uma variavel,logo sizeof(Vetor) vai devolver o numero de elementos do vetor multiplicado pelo tamannho do seu tipo
	int TamanhoVetor = std::size(Vetor);

	// Apartir de VS 2017 voce ´pode usar std::size (sem informar o tipo de variavel)
	std::cout << "\nTamanho Vetor: " << TamanhoVetor;
	std::cout << "\nTamanho de um float: " << sizeof(float);
	std::cout << "\nTamanho de um int: " << sizeof(int);

	MostrarVetor(Vetor, TamanhoVetor);



	system("PAUSE");
	return 0;
}
//Para receber uma funcao basta colocao o tipo do nome do vetor 

void MostrarVetor(int Array[], int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{

		std::cout << " - " << Array[i] << " - ";

	}



}
