#include <iostream>
#include <string>
using namespace std;

int depositAmount(string, int, int);
int withdrawAmount(string, int, int);

int main() {	int balance;
	
	withdrawAmount("Alice", depositAmount("Alice", 1000, 500), 300);
	
	withdrawAmount("Bob", depositAmount("Bob", 1500, 700), 1200);
	
	withdrawAmount("Charlie", depositAmount("Charlie", 2000, 1000), 1500);
	
}

int depositAmount(string accountHolder, int balance, int depositAmount){
	balance += depositAmount;
	cout << accountHolder << " deposited " << depositAmount << ". New balance: " << balance << endl;
	return balance;
}

int withdrawAmount(string accountHolder, int balance, int withdrawAmount){
	if (balance >= withdrawAmount) {
        balance -= withdrawAmount;
        cout << accountHolder << " withdrew " << withdrawAmount << ". New balance: " << balance << endl;
    } else {
        cout << accountHolder << " has insufficient funds!" << endl;
    }
    return balance;
}




