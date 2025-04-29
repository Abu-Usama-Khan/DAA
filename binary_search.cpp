#include <iostream>
using namespace std;;

int binarySearch(int arr[], int low, int high, int key) {
	
	if(low>high) return -1;
	else {
		int mid = (low+high)/2;
		
		if(key==arr[mid]) return mid;
		
		else if(key>arr[mid]) binarySearch(arr, mid+1, high, key);
		
		else binarySearch(arr, low, mid-1, key);
	}
}


main() {
	int arr[10] = {2,4,5,8,9,11,13,16,17,22};
	int key, searchResult;
	cout <<"Enter key to search from list:\n";
	cin >>key;
	searchResult = binarySearch(arr, 0, 9, key);
	if (searchResult==-1) cout <<"The key is not present";
	else cout <<"The key is present at index: " <<searchResult;
}
