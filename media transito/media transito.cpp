#include <iostream>
//este setor consguiu coletar  os valores em km h : 70.9 , 89.5, 75.6, 102.5,123.6,
//utilizando for each loop calcule a media da rodovia

int main()
{
	float Velocidades[]{ 70.9, 89.5,65.6,102.5,123.6,63.4,74.5,99.5,68.7 };
	float SomaVelocidades{ 0.0 };
	int TamArray{ 0 };
	for (auto Velocidade : Velocidades) 
	{
		SomaVelocidades += Velocidade;
		TamArray++;

	}
	std::cout << "Média de velocidade rodovia é " << SomaVelocidades / TamArray;

	system("PAUSE");
	return 0;
}