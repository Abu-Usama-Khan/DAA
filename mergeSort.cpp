#include <iostream>
using namespace std;

void mergeSort(int arr[], int n) {
	
	int mid = n/2;
	int tempArr1[mid];
	int tempArr2[n-mid];
	
	for (int i=0; i<n; i++) {
		if (i<mid) tempArr1[i] = arr[i];
		
		else tempArr1[i] = arr[i];
		
	}
	
	if (n-mid>1 && mid>1) {
		
		mergeSort(tempArr1[], mid);
		
		mergeSort(tempArr2[], n-mid);
		
	} else if (n-mid>1) {
		
		mergeSort(tempArr2[], n-mid);
		
	} else if (mid>1) {
		
		mergeSort(tempArr1[], mid);
		
	}
//	
//	int i= 0; j=0, k=0;
//	int tempArr3[n];
//	
//	while (true) {
//		if(tempArr1[i] < tempArr2[j]) {
//			tempArr3[k]=tempArr1[i];
//			i++;
//			k++;
//		} else {
//			tempArr3[k]=tempArr1[j];
//			j++;
//			k++;
//		}
//		if (i>=mid) {
//			for (int l=k; l<n; l++) {
//				tempArr3[l]=tempArr2[j];
//				j++;
//			}
//		} else if (j>=n-mid) {
//			for (int l=k; l<n; l++) {
//				tempArr3[l]=tempArr1[i];
//				i++;
//			}
//		}
//	}
//	
//	return tempArr3;
}


main() {
	int arr[10] = {2,4,5,8,9,11,13,16,17,22};
	mergeSort(arr, 10);
}
