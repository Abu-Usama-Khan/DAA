#include <iostream>
using namespace std;

int* mergeSort(int arr[], int n) {
	
	int mid = n/2;
	int tempArr1[mid];
	int tempArr2[n-mid];
	
	int t=0;
	for (int i=0; i<n; i++) {
		if (i<mid) tempArr1[i] = arr[i];
		
		else {
			tempArr2[t] = arr[i];
			t++;
		}
		
	}
	
	cout <<"\n" <<tempArr1[0] <<" " <<tempArr2[0] <<" ";
	
	int* finalTempArr1;
	
	int* finalTempArr2;
	
	if (mid>1 && n-mid>1) {
		
		finalTempArr1 = mergeSort(tempArr1, mid);
		
		finalTempArr2 = mergeSort(tempArr2, n-mid);
		
	} else if (n-mid>1) {
		
		finalTempArr2 = mergeSort(tempArr2, n-mid);
		
	} else if (mid>1) {
		
		finalTempArr1 = mergeSort(tempArr1, mid);
		
	} else {
		finalTempArr1 = tempArr1;
		finalTempArr2 = tempArr2;
		cout <<"\nExecuted\n";
	}
	
	
	cout <<finalTempArr1[0] <<" " <<finalTempArr2[0] <<" ";
	
	int i= 0, j=0, k=0;
	int tempArr3[n];
	
	while (true) {
		if(finalTempArr1[i] < finalTempArr2[j]) {
			tempArr3[k]=finalTempArr1[i];
			i++;
			k++;
			cout <<"temp3 "<<tempArr3[k-1]<<" ";
		} else {
			tempArr3[k]=finalTempArr2[j];
			j++;
			k++;
			cout <<"temp3 "<<tempArr3[k-1]<<" ";
		}
		if (i>=mid) {
			for (int l=k; l<n; l++) {
				tempArr3[l]=finalTempArr2[j];
				j++;
				cout <<"temp3 "<<tempArr3[k]<<" ";
			}
			break;
		} else if (j>=n-mid) {
			for (int l=k; l<n; l++) {
				tempArr3[l]=finalTempArr1[i];
				i++;
				cout <<"temp3 "<<tempArr3[k]<<" ";
			} 
			break;
		}
	}
	
	return tempArr3;
}


main() {
	int arr[10] = {2,4,5,8,9,11,13,16,17,22};
	int* arrSorted = mergeSort(arr, 10);
	for (int i=0; i<10; i++) {
		cout <<"\n\n watcha " <<arrSorted[i] <<", ";
	}
}
