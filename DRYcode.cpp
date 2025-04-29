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


// Suboor's Code
////int countStudtneScore(int score[],int target, int n )
////	int count =0;
////	for(int i=0;i<n;i++){
////		if(score[i]>=target){
////			count++;
////	}
////	return count;
////}
//
/////////////////////////////////////
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//
//void generateRandom(int *score,int n){
//	for(int i=0;i<n;i++){
//		score[i]=rand()%101;
//	}
//}
//
//void linearSearch(int *score,int n, int* queries,int m){
//	for(int i=0;i<m;i++){
//		int target= queries[i];
//		int count = 0;
//		for(int j=0;j<n;j++){
//			if(score[j]>=target){
//			
//			count++;
//		}
//	}
//			cout<<"Query: "<<target<<"\tstudent with > score "<<count<<endl;
//	}
//
//}
//void flag(int *score, int n){
//	for(int i=0;i<n;i++){
//		if(score[i]==100)
//		cout<<"Perfect score"<<endl;
//	}
//}
//
//int main(){
//	const int n=500;
//	const int m= 20;
//	int score[n];
//	int queries[m] = {
//	10,20,30,40,50,12,25,35,45,55,5,65,75,85,95,60,70,80,90,100
//	
//	};
//	generateRandom(score,n);
//	linearSearch(score,n,queries,m);
//	flag(score,n);
//	return 0;
//	
//}
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
