// Lab_04_6.cpp
// Бахмат Катерина
// Лабораторна робота № 4.6
// Вкладені цикли.
// Варіант 1

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double P, S;
	int n, k;

	//1
	S = 0;
	n = 1;
	while (n <= 10) {
		P = 1;
		k = 1;
		while (k <= n) {
			P *= (1. / (1.* k * k));
			k++;
		}
		S += sin(P) / (n + sqrt(1. * P));
		n++;
	}
	cout << S << endl;

	//2
	S = 0;
	n = 1;
	do {
		P = 1;
		k = 1;
		do {
			P *= (1. / (1. * k * k));
			k++;
		} while (k <= n);
		S += sin(P) / (n + sqrt(1. * P));
		n++;
	} while (n <= 10);

	cout << S << endl;

	//3
	S = 0;
	for (n = 1; n <= 10; n++) {
		P = 1;
		for (k = 1; k <= n; k++) {
			P *= (1. / (1. * k * k));
		}
		S += sin(P) / (n + sqrt(1. * P));
	}
	cout << S << endl;

	//4 
	S = 0;
	for (n = 10; n >= 1; n--) {
		P = 1;
		for (k = n; k >= 1; k--) {
			P *= (1. / (1. *  k * k));
		}
		S += sin(P) / (n + sqrt(1. * P));
	}
	cout << S << endl;

	return 0;
}
	