#include<iostream>
#include<string>

using namespace std;
class BankAccount {
public:
	int balance;
	string name;

	BankAccount(int costumerBalance, string costumerName) {
		name = costumerName;
		balance = costumerBalance;
	}
	int withdraw(int withdrawAmount);
	int deposit(int depositAmount);
	
};
int BankAccount::withdraw(int withdrawAmount) {
	if (balance >= withdrawAmount) {
		balance = balance - withdrawAmount;
		cout << "Procces is successful.Remaning money is  " << balance << endl;
	}
	else {
		cout << "Balance is insufficient " << endl;
	}

	return balance;
}

int BankAccount::deposit(int depositAmount) {
	balance = balance + depositAmount;
	cout << "Procces is successful.Total balance is  " << balance << endl;

		return balance;
	
}
int main() {
	BankAccount Mabel(17000, "Mabel");
	int enteredAmount;
	string transaction ;

	cout << "Which transaction would you like to make: withdraw or deposit money?" << endl;
	cin >> transaction;

	if (transaction=="withdraw") {
		cout << "Enter a amount: " << endl;
		cin >> enteredAmount;
		Mabel.withdraw(enteredAmount);
	}
	else {
		cout << "Enter a amount: " << endl;
		cin >> enteredAmount;
		Mabel.deposit(enteredAmount);
	}


	return 0;
}