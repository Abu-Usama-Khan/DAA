#include <iostream>
#include <string>
using namespace std;


int main() {
	int num, sum=0, newNum=0;
	cout<<"Enter CNIC Number: \n";
	cin >> num;
	
	while(num>0) {
		newNum=(newNum*10)+num%10;
		num=num/10;
	}
	cout <<newNum;

}



//int askIndexFunc();
//bool validateIndex(int);
//
//
//int main() {
//	cout <<"Week 9\n";
//	float num = 12.5;
//	int ageOfStudents[5] = {1.4,23.5,45};
//	ageOfStudents[4]=9;
//	int indexNum = askIndexFunc();
//	
//	cout <<ageOfStudents[indexNum];
//}
//
//
//int askIndexFunc() {
//	int userInput;
//	do {
//		cout <<"Enter the Index, please! : \n";
//		cin >>userInput;
//	} while (!validateIndex(userInput));
//	
//	return userInput;
//}
//
//bool validateIndex(int userIn) {
//	if (userIn>=0) 
//		return true;
//	else 
//		return false;
//}


//Sir Ali's code
//int main() {
//    int sizeOfArray = 3;
//    int myFriendsAge[sizeOfArray];
//    string myFriendsName[sizeOfArray];
//    
//    for(int i=0;i<sizeOfArray;i++) {
//    	cout<<"Please enter age: \n";
//        cin>>myFriendsAge[i];
//        cout<<"Please enter name: \n";
//        cin>>myFriendsName[i];
//    }
//    
//    for(int i=0;i<sizeOfArray;i++) {
//        cout<<myFriendsName[i] <<" is " <<myFriendsAge[i] <<" years old\n";
//    }
//}
