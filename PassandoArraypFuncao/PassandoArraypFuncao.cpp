#include <iostream>

void MostrarVetor(int Array[], int TamVetor);


int main()
{
	int Vetor[] = { 1,2,3,4,5,6,7,8,9,10 };
	MostrarVetor(Vetor, 10);



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
