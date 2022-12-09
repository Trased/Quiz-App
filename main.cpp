#include "func.h"

int main()
{
	size_t rep = 1;
	while (rep)
	{
		size_t num;
		cout << "Introdu numarul de intrebari dorite(max 130): ";
		cin >> num;
		while (num > 130)
		{
			cout << "Introducere eronata, mai incearca:\n\nIntrodu numarul de intrebari dorite(max 130):";
			cin >> num;
		}
		int numbers[130];
		srand((unsigned)time(NULL));
		for (int i = 1; i <= num; i++) 
		{
			numbers[i] = 1+(rand() % 130);
		}
		int raspCorect = 0;
		size_t i = 1;
		while (i < num+1)
		{
			Intrebare a(numbers[i]);
			a.afisare();
			char rasp[2];
			cout << "\n";
			cin >> rasp;
			raspCorect+=a.verificareRaspuns(rasp);
			i++;
		}
		cout << "Scor final: " << raspCorect << "/" << num << " iar nota finala este: " << ((float)raspCorect / (float)num)*10 << endl;
		cout << "Reluam invatatul?\n\n1 --> DA \n0 --> NU (iesi din program)";
		cin >> rep;
	}
	return 0;
}