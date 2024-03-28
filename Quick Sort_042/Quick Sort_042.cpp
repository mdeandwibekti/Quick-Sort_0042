#include <iostream>
using namespace std;
 
//array of integers to hold value
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of data movements
int n;

void input() {
	while (true)
	{
		cout << "masukan panjang elemen array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nmaksimum panjang array adalah 20" << endl;
	}
	cout << "\m---------------" << endl;
	cout << "\nEnter array element" << endl;
	cout << "\n---------------" << endl;
}