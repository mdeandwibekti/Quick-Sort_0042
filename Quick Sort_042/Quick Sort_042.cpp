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

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
//swaps the element at index x with the element at index y
void swap(int x, int y) {
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
	mov_count++;



}

void q_short(int low, int high) 
{
	int temp;
	int pivot, i, j;
	if (low > high) { //step 1
		return;
	}

	pivot = arr[low]; //step2
	i = low + 1; //step3
	j = high;   //step4

	while (i <= j) //step10
	{
		//search for an element greater than pivot
		while ((arr[i] <= pivot) && (i <= high)) //step5
		{
			i++; //step6
			cmp_count++;
		}
		cmp_count++;
		// search for an element less than or equel to pivot
		while ((arr[j] > pivot) && (j >= low)) //step7
		{
			j--; //step8
			cmp_count++;
		}
		cmp_count++;
		if (i < j) //step9
		{
			// swap the element at index i whit the element at index j
			swap(i, j);
		}
	}
	if (low < j) { // step 11
		//swap the pivot element with the element at index j
		swap(low, j);
	}
	//recursive call to sort the left sub array
	q_short(low, j - 1); //step12

	//recursive call to sort the rigt sub array
	q_short(j + 1, high);
}

void display() {
	cout << "\n--------------" << endl;
	cout << "sorted array" << endl;
	cout << "----------------" << endl;

}



