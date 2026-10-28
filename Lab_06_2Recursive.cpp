#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void CreateRec(int* a, const int n, const int Low, const int High, int i) {
	if (i < n) {
		a[i] = Low + rand() % (High - Low + 1);
		CreateRec(a, n, Low, High, i + 1);
	}
}

void PrintRec(const int* a, const int n, int i) {
	if (i < n) {
		cout << setw(4) << a[i];
		PrintRec(a, n, i + 1);
	}
	else
		cout << endl;
}
void ReverseArrayRec(int* a, const int n, int i) {
	if (i < n / 2) {
		int temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		ReverseArrayRec(a, n, i + 1);
	}
}

int main() {
	srand((unsigned)time(NULL));

	const int n = 9;
	int a[n];

	int Low = -10;
	int High = 10;

	CreateRec(a, n, Low, High, 0);

	cout << "Original array: ";
	PrintRec(a, n, 0);
	cout << endl;

	ReverseArrayRec(a, n, 0);

	cout << "Reversed array: ";
	PrintRec(a, n, 0);

	return 0;
}