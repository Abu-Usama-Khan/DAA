#include <iostream>
#include <string>
using namespace std;

void displayInfo(int, string);

int main() {
	
	displayInfo(25, "Alice");
	displayInfo(30, "Bob");
	displayInfo(22, "Charlie");
	
}


void displayInfo(int age, string name) {
	cout <<"Name: " << name <<" Age: " << age <<endl;
}


//#include <iostream>
//#include <string>
//using namespace std;
//
//float gradeCalc(float, float, float);
//void display(int, float);
//
//int main() {
//	
//	display(1, gradeCalc(80, 85, 90));
//	display(2, gradeCalc(70, 75, 78));
//	display(3, gradeCalc(60, 65, 68));
//	
//}
//
//
//float gradeCalc(float marks1, float marks2, float marks3) {
//	return ((marks1+marks2+marks3)/3.0);
//}
//
//void display(int s, float grade) {
//	cout <<"Grade " <<s <<": "<<grade <<endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//float areaofRectCalc(float l, float b);
//void display(int, float);
//
//int main() {
//	
//	display(1, areaofRectCalc(5,10));
//	display(2, areaofRectCalc(6,7));
//	display(3, areaofRectCalc(3,4));
//	
//}
//
//
//float areaofRectCalc(float l, float b) {
//	return l*b;
//}
//
//void display(int s, float a) {
//	cout <<"Area of rectangle " <<s <<" is "<<a <<endl;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//void checkPlayer(int pl, int ps, string pn, int op);
//
//int main() {
//    checkPlayer(5, 20, "Alice", 10);
//    checkPlayer(7, 30, "Bob", 15);
//    checkPlayer(3, 10, "Charlie", 20);
//
//}
//
//
//void checkPlayer(int pl, int ps, string pn, int op) {
//	
//	    if (pl >= 5 && ps >= op) {
//	            cout << pn << " successfully used the object!" << endl;
//	    } else if (pl >= 5){
//	            cout << pn << " doesn't have enough strength!" << endl;
//	    } else {
//	        cout << pn << " is not at a high enough level to use this object!" << endl;
//	    }
//}



//#include <iostream>
//#include <string>
//using namespace std;
//
//void greetName (string str);
//
//
//int main() {
//	greetName("Bob");
//	greetName("Sam");
//	greetName("Charlie");
//	greetName("Anna");
//}
//
//void greetName (string str) {
//	cout <<"Hello! " <<str <<endl;
//}




//#include <iostream>
//using namespace std;
//
//int secLargNum (int, int, int);
//
//
//int main() {
//	int num1,num2,num3;
//	cout <<"Enter number";
//	cin >>num1;
//	cout <<"Enter number";
//	cin >>num2;
//	cout <<"Enter number";
//	cin >>num3;
//	cout <<"The Largest number is " << secLargNum(num1,num2,num3);
//}
//
//int secLargNum (int a, int b, int c) {
//	if (a<b && a>c) || (a>b && a<c) {
//		return a;
//	} else if (b<a && b>c) || (b>a && b<c) {
//		return b;
//	} else {
//		return c;
//	}
//}
