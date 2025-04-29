#include<iostream>
#include<cstdlib>
using namespace std;

void fillArray(int*, int);
void linearSearch(int*, int[], int, int);


main() {
	int m=20;
	int n=500;
	int queries[m];
	int* scores = new int[n];
	fillArray(scores, n);
	linearSearch(scores, queries, m, n);
	
}


void fillArray(int* arr, int n) {
	cout<<"[";
	for(int i=0; i<n; i++) {
		arr[i] = rand()%101;
		cout<<arr[i]<<", ";
	}
	cout<<"]";
}

void linearSearch(int *scores, int queries[], int m, int n) {
	for (int i=0; i<m; i++) {
		int target = queries[i];
		int count=0;
		for (int j=0; j<n; j++) {
			if (scores[j] >= target) {
				count++;
			}
		}
		cout <<"Query: " <<target <<
	}
}
