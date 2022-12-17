#include "func.h"

int main()
{
	size_t rep = 1;
	while (rep)
	{
		size_t num;
		cout << "Introdu numarul de intrebari dorite (max 130): ";
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
			numbers[i] = 1+(rand() % 46);
		}
		int raspCorect = 0;
		size_t i = 1;
		std::chrono::time_point<std::chrono::system_clock> start;
		start = std::chrono::system_clock::now();
		while (i < num+1)
		{
			cout << "\n" << i << "/" << num << endl;
			Intrebare a(numbers[i]);
			a.afisare();
			char rasp[2];
			cout << "\n";
			cin >> rasp;
			raspCorect+=a.verificareRaspuns(rasp);
			i++;
		}
		__int64 secondsElapsed = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now() - start).count();
		__int64 minute, secunde;
		minute = secondsElapsed / 60;
		secunde = secondsElapsed % 60;
		
		if (minute > 15)
		{
			cout << "Da ce facem aici? Unde te-ai gandit pana acum? vezi ca ai " << minute << " minute... trebuia sa te incadrezi in 15..." << endl;
		}
		else
		{
			cout << "Ai terminat in " << minute << " minute " << secunde << " secunde; Felicitari!" << endl;
		}
		cout << "Scor final: " << raspCorect << "/" << num << " iar nota finala este: " << ((float)raspCorect / (float)num)*10 << endl;
		cout << "Reluam invatatul?\n\n1 --> DA \n0 --> NU (iesi din program)";
		cin >> rep;
		system("CLS");
	}
	return 0;
}