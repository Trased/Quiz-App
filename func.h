#pragma once
#include <iostream>
#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <vector>
using namespace std;
class Intrebare {
private:
	char* intrebare;
	char* raspunsCorect;
	char* raspunsA;
	char* raspunsB;
	char* raspunsC;
	char* raspunsD;
	char* raspunsE;
public:
	Intrebare(int num);
	int verificareRaspuns(char*);
	void afisare();
};

