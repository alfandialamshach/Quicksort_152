#include <iostream>
using namespace std;

//array of integrers to hold values
int arr[20];
int cmp_count = 0; // Number of comparision
int mov_count = 0; // number of movement
int n;

void input() {
	while (true) {
		cout << "Masukkan panjang element array : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n Maksimum panjang array adalah 20" << endl;

	}

	cout << "\n====================" << endl;
	cout << "\n enter array element" << endl;
	cout << "\n ===================" << endl;
}
