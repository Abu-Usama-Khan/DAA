#include <iostream>
//#include <utility>	//--> builtin library for swapping..
using namespace std;

int* insertionSort(int*, int);
void displayArr(int*, int);


main() {
	int num =7;
	int* data = new int[num]{8, 22, 7, 9, 31, 5, 13};
	displayArr(insertionSort(data, num), num);
	
}


int* insertionSort(int* arr, int n) {
	int key, j;
	for (int i=1; i<n; i++) {
		key = arr[i];
		j=i-1;
		while(j>=0 && arr[j]<key) {
			arr[j+1] = arr[j];
			j=j-1;
		} 
		arr[j+1]=key;
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
