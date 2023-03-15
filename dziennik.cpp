#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

const int N = 100;
float tab[100];

int main()
{
	fstream plik("dane.txt");
	string dane;
	string wartosc = "     ";

	int index = 0;
	float liczba;
	float min = 0;
	float max = 0;
	float suma = 0;
	float srednia = 0;
	int ilosc_liczb = 0;
	int pierwsza_spacja = 0;

	while (getline(plik, dane))
	{
		cout << dane << '\n';
	}

	plik.close();


	for (int i = 0; i < dane.length(); i++)
	{

			if (dane[i] != ' ' )
			{
				wartosc[index] = dane[i];
				index++;
	
			}
			else
			{
				liczba = stof(wartosc);
				cout << liczba << "\n";
	
				suma += liczba;
				ilosc_liczb++;


			/*
			for (int j = 0; j < 100; j++)
			{
				tab[i] = liczba;
			}
			*/


			
				if (pierwsza_spacja == 0)
				{
					min = liczba;
					pierwsza_spacja = 1;
				}
				else if (liczba < min)
				{
					min = liczba;
				}
				else if (liczba > max)
				{
					max = liczba;
				}
				wartosc = "    ";
				index = 0;
		}
	}
	srednia = suma / ilosc_liczb;
	srednia = srednia * 10;
	srednia = round(srednia) / 10;

	cout << "\n\n *** Minimalna temperatura wynosi " << min << " ***";
	cout << "\n\n *** Minimalna temperatura wynosi " << max << " ***";
	cout << "\n\n *** Srednia temperatura wynosi " << srednia << " ***\n\n";

	/*
	for (int k = 0; k < 100; k++)
	{
		cout << tab[k] << " ";
	}
	*/
}