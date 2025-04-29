#include <iostream>
using namespace std;

main() {
//	int asf = 12, i=0;
//	while (asf-1>i) {
//		cout <<i<<endl;
//		i++;
//	}

int arr1[4] = {1,2,3,4};
int* arr2;
arr2=arr1;
int* arr3=arr1;
//int arr4[4] = arr1;
int arr5[4];
//arr5=arr1;
cout <<arr1[3]<<"\t"<<arr2[3]<<"\t"<<arr3[3];
}
