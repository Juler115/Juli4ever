#include "Functions.h"

vector<char> vacas;
vector<char> toros;
void clean() {
	vacas.clear();
	toros.clear();
}


void TyV()
{
	int num = 12345;//rand() % 999999;
	string pienso = to_string(num);
	string adiv;
	cout << "Juguemos vacas y toros, yo pienso en un numero y tu trataras de adivinarlo\n";
	cout << "Si algun numero esta correcto sera una vaca, si ademas de estar correcto esta en la posicion correcta, sera un toro \n";
	cout << "Que empiece la diversion!!!!\n";
	do {
		cout << "Si deseas volver ingresa el numero -1\n";
		cout << "Ingresa tu prediccion de 5 digitos\n";
		cin >> adiv;
		if (adiv == to_string(-111111)) return;
		clean();
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (adiv[i] == pienso[j] && i==j)
				{
					toros.push_back(adiv[i]);
				}
				else if (adiv[i] == pienso[j])
				{
					vacas.push_back(adiv[i]);
				}
			}
		}
		cout << "toros: ";
		for (auto& a : toros) cout << a << " ";
		cout << "\n";
		cout << "vacas: ";
		for (auto& a : vacas) cout << a << " ";
		cout << "\n";
	} while (pienso != adiv);
	cout << "Felicidades acertaste :3";
	Sleep(5000);
}