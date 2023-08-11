#include <iostream>

//Duplica Vetor - Recebe um array por referencia, ataves de um ponteiro


void DuplicaVetor(int* Array, int Tam);

// Esta funcao tb recebe um Array via ponteiro mas tamben retorna um ponteiro
//Logo sera capaz de devolver um ponteiro para int

int *invertVetor(int *Array, int Tam);

void MostraVetor(int *Array, int Tam);

int main()
{

	int Numeros[] = { 1,2,3,4,5,6,7,8,9,10 };
	int Tam = sizeof(Numeros) / sizeof(int);
	//Chama a funcao e passa o vetor Numeros para ela
	MostraVetor(Numeros, Tam);



	DuplicaVetor(Numeros, Tam);

	MostraVetor(Numeros, Tam);
	//Aqui Mostra vetor recebe o retorno da funcao inverter vetor
	MostraVetor(invertVetor(Numeros, Tam), Tam);

	return 0;
}

void DuplicaVetor(int* Array, int Tam)
{
	for (int i = 0; i < Tam; i++)
	{
		Array[i] = 2 * Array[i];


	}

}

//Esta Funcao recebe um array (Na realidade recebe o primeiro endereco do array)
// e devolve um aArray invertido

int *invertVetor(int* Array, int Tam)
{

	//Para inventer iremos usar um vetor auxiliar
	//ele precisa ser estatico,pois senao ao sair da funcao ele iria sair da memoria e nao conseguir utilizar o valor
	int j = 0;
	static int ArrayInvertido[10];
	//Para conseguir um vetor com valores invertido 
	//Comeca do indice Tam -1 ou seja 10 - 1  = 9 vai ate i >=0

	for(int i = Tam -1; i >= 0; i--)
	{

		ArrayInvertido[j] = Array[i];
		j++;
	}



	return ArrayInvertido;
}

//Aqui Recebe Um Vetor Via Ponteiro e mostra na tela

void MostraVetor(int *Array, int Tam)
{
	//coloca colchete antes d for 
	std::cout << " [ ";
	//coloca os elementos e finaliza o loop 
	for(int i=0; i < Tam; i++)
	{
		std::cout << Array[i] << "  ";
	
	}
	std::cout << " ] \n\n ";
}
