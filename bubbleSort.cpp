#include <iostream>
//#include <utility>	//--> builtin library for swapping..
using namespace std;

int* bubbleSort(int*, int);
void displayArr(int*, int);


main() {
	int num =7;
	int* data = new int[num]{8, 22, 7, 9, 31, 5, 13};
	displayArr(bubbleSort(data, num), num);
	
}


int* bubbleSort(int* arr, int n) {
	int k =0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n-i-1; j++) {
			if (arr[j]>arr[j+1]) {
				k++;
				arr[j] = arr[j]+arr[j+1];	//swap(arr[j], arr[j+1]); 	--> builtin function for swapping..
				arr[j+1] = arr[j]-arr[j+1];
				arr[j] = arr[j]-arr[j+1];
			}
		}
		if (k==0) break;
		k=0; 
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
