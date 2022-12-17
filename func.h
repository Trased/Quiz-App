#pragma once
#include <iostream>
#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <vector>
#include <stdlib.h>
#include <conio.h>
#include <string>
using namespace std;
class Intrebare {
private:
	string intrebare;
	string raspunsCorect;
	string raspuns[5];
public:
	Intrebare(int num);
	int verificareRaspuns(char*);
	void afisare();
};

