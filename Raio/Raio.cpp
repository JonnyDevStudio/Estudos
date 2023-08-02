#include <iostream>
#include <cmath>


int main()
{
	float Raio, Area;

	printf("\tDigite o valor do raio :\n");

	std::cin >> Raio;

	std::cout << "\tValor do raio escolido e de : \n" << Raio << std::endl;

	Area = 3.1415 * pow(Raio, 2);

	std::cout << ("A area eh %f", Area);





}