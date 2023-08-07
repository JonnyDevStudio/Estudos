#include <iostream>

//Crie um programa que recebe o nome do aluno e suas 5 notas e depois mostre a media destas notas


int main()
{
	float Nota1, Nota2, Nota3, Nota4, Nota5, Media;
	std::string NomeAluno;

	std::cout << "\t******************EX-NOTAS (Sem Arrray) ***********************" << "\n";

	//Armazena variavel do nome
	std::cout << "Digite o nome do Aluno : " << std::endl;
	std::cin >> NomeAluno;
	std::cout << NomeAluno << "\n";

	// Armazena e mostra as Notas do aluno 

	std::cout << "\t******************NOTAS***********************" << "\n";

	std::cout << "Digite a primeira nota :" << "\n";
	std::cin >> Nota1;
	std::cout << "Nota01 = " << Nota1 << "\n";

	std::cout << "Digite a Segunda nota :" << "\n";
	std::cin >> Nota2;
	std::cout << "Nota02 = " << Nota2 << "\n";

	std::cout << "Digite a Tercira nota :" << "\n";
	std::cin >> Nota3;
	std::cout << "Nota03 = " << Nota3 << "\n";

	std::cout << "Digite a Quarta nota :" << "\n";
	std::cin >> Nota4;
	std::cout << "Nota04 = " << Nota4 << "\n";

	std::cout << "Digite a Quinta nota :" << "\n";
	std::cin >> Nota5;
	std::cout << "Nota04 = " << Nota5 << "\n";


	std::cout << "\t******************Media***********************" << "\n";

	std::cout << NomeAluno << "\n";
	std::cout << "\tNota01 = " << Nota1 << "\tNota02 = " << Nota2 << "\tNota03 = " << Nota3 << "\tNota04 = " << Nota4 << "\tNota05 = " << Nota5 << "\n";

	Media = ((Nota1 + Nota2 + Nota3 + Nota4 + Nota5) / 5);
	std::cout << "Sua media e  :" << Media << "\n";
	
	std::cout << "\t******************EX-NOTAS (COM Arrray) ***********************" << "\n";





	system("PAUSE");
	return 0;
}