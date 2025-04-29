#include<iostream>
using namespace std;

int linearSearch(int[], int, int);


main() {
	int n =12;
	int key;
	
	cout <<"Enter the Key to search: ";
	cin >>key;
	
	int* arrr = new int[];
	
	int scores[n] = {1,4,33,12,9,22,66,89,2,14,101,67};
	
	int position = linearSearch(scores, n, key);
	
	if(position==0) {
		cout <<"The " <<key <<" is not present in the list";
	} else {
		cout <<"The " <<key <<" is present at position " <<position;
	}
}


int linearSearch(int arr[], int n, int key) {
	count = 0;
	for (int i=0; i<n; i++) {
		if (arr[i]==key) {
			count++;
		}
	}
	
	
	if (count>0) {
		int* arr = new int[];
		for (int i=0; i<n; i++) {
			if (arr[i]==key) {
				return i+1;
				count++;
			}
		}
	}
	return 0;
}
