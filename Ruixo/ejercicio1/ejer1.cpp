#include "ejer1.h"

namespace parcial
{
	void mostrarCreditos()
	{
		cout << "Lucio Ruixo, " << endl;
		cout << "Visual Studio 2019" << endl;
	}

	float diferencia(float num1, float num2)
	{
		float resta = num1 - num2;

		if (resta >= 0)
			return resta;
		else
			return resta * -1;
	}
}