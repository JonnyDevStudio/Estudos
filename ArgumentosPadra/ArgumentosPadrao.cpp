#include <iostream>

void Coordenadas(int x, int y, int z);

int main()
{
	Coordenadas(5, 4, 3);

	system("PAUSE");
	return 0;

}

void Coordenadas(int x, int y, int z)
{
	x *= 10;
	y *= 10;
	z *= 10;

	std::cout << "(" << x << " - " << y << " - " << z << " ) ";

}