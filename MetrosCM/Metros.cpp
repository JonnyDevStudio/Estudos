#include <iostream>

int main()
{
	float Metros, centimetros;
	printf("Digite a medida em metros:");
	std::cin >> Metros;


	centimetros = Metros * 100;


	printf("%.2fm correspondem a %.2fcm", Metros, centimetros);

	return 0;



}