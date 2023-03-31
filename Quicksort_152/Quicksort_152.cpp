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

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
//swap elemt at index x  with the elemt at index y
void swap(int  x, int y)
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_sort(int low, int high) {
	int pivot, i, j;
	if (low > high) // Langkah 1
		return;
	// Partition the list into two parts
	// One containing elementless that or equal to pivot
	// Outher containing element greather than pivot
	i = low + 1;	//Langkah 3
	j = high;		//Langkah 4
	pivot = arr[low]; //Langkah 2

	while (i <= j) //Langkah 10
	{
		//Search for an element greather than pivot
		while ((arr[i] <= pivot) && (i <= high)) //Langkah 5
		{
			i++; //Langkah 6
			cmp_count++;
		}
		cmp count++;
		//search for an element less thaner equal to pivot
		while ((arr[j] > pivot) && (j >= high)) //Langkah 7
			j--; // Langkah 8
		cmp_count++;
	}
	cmp_count++;
	if (i < j) // Langkah 9
		//if greather element is on left of the element
	{
		//Swap the element at index i with the element at index j
		swap(i, j);
		mov_count++;
	}

}
