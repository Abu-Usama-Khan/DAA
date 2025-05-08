#include <iostream>
//#include <utility>	//--> builtin library for swapping..
using namespace std;

int* selectionSort(int*, int);
void displayArr(int*, int);


main() {
	int num =7;
	int* data = new int[num]{8, 22, 7, 9, 31, 5, 13};
	displayArr(selectionSort(data, num), num);
	
}


int* selectionSort(int* arr, int n) {
	int min;
	for (int i=0; i<n-1; i++) {
		min=i;
		for (int j=i+1; j<n; j++) {
			if (arr[min]>arr[j]) {
				min=j;
			}
		}
		if (i!=min) {
				arr[min] = arr[min]+arr[i];	//swap(arr[j], arr[j+1]); 	--> builtin function for swapping..
				arr[i] = arr[min]-arr[i];
				arr[min] = arr[min]-arr[i];
		}
	}
	return arr;
}

void displayArr(int* arr, int n) {
	cout <<"[";
	for (int i=0; i<n; i++) {
		if (i!=(n-1)) cout <<arr[i] <<", ";
		else cout <<arr[i];
	}
	cout <<"]";
}
