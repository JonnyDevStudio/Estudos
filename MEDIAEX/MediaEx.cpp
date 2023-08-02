#include <iostream>

int main()
{
	float Nota1, Nota2, Nota3, Nota4, Media;

	std::cout << "Digite sua Primeira Nota :\n " << std::endl;
	std::cin >> Nota1;

	std::cout << "\tDigite sua Segunda Nota: \n" << std::endl;
	std::cin >> Nota2;

	std::cout << "\tDigite sua Terceira Nota: \n" << std::endl;
	std::cin >> Nota3;

	std::cout << "\tDigite sua Quarta Nota: \n" << std::endl;
	std::cin >> Nota4;


	std::cout << "Suas notas foram : \n" << std::endl;
	std::cout << Nota1 << "\n" << Nota2 << "\n" << Nota3 << "\n" << Nota4 << "\n";

	Media = (Nota1 + Nota2 + Nota3 + Nota4) / 4;

	std::cout << "Sua media foi de : \n" << Media << "\n";

	if (Media)
	{
		Media > 6;
		std::cout << "Parabens voce foi aprovado !!" << "\n";
	}
	else (Media)
	{
		Media < 6;
		std::cout << "Que pena voce foi reprovado , reveja o conteudo do curso e tente novamente!" << "\n";
	}
	

	system("PAUSE");
}