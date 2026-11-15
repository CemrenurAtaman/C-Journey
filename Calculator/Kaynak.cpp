#include <iostream>
using namespace std;

class calculator {
public:
	
	int add(int num1, int num2) {
		return num1 + num2;
	}
	double add(double num1, double num2) {
		return  num1 +  num2;
	}
	int subtract(int num1, int num2) {
		return num1 - num2;
	}
	double subtract(double num1 , int num2) {
		return  num1 -  num2;
	}
	int multiply(int num1, int num2) {
		return  num1 *  num2;
	}
	double multiply(double num1, double num2) {
		return  num1 *  num2;
	}
	int divide(int num1, int num2) {
		if ( num2 == 0) {
			cout << "Division by zero error!" << endl;
			exit(0);
		}
		return  num1 /  num2;
	}
	double divide(double num1, double num2) {
		if ( num2 == 0) {
			cout << "Division by zero error!" << endl;
			exit(0);
		}
		return num1 /  num2;
	}
};
int main() {
	calculator cal;
	int int_num1, int_num2,result_int=0;
	double double_num1, double_num2,result_double=0;
	char sign_int, sign_double;
	cout << "Enter two integer  numbers: " << endl;
	cin >> int_num1 >> int_num2;
	
	cout << "Enter two double numbers: " << endl;
	cin >> double_num1 >> double_num2;
	
	cout << "Enter the desired operation to perform on integer numbers: " << endl;
	cin >> sign_int;

	cout << "Enter the desired operation to perform on double numbers: " << endl;
	cin >> sign_double;

	switch (sign_int) {
	case '+':
	{
		int result = cal.add(int_num1, int_num2);
		cout << "Integer result is: " << result << endl;
		break;
		
	} 
	case '-':
	{
		int result = cal.subtract(int_num1, int_num2);
		cout << "Integer result is: " << result << endl;
		break;
	}
	case'*':
	{
		int result = cal.multiply(int_num1, int_num2);
		cout << "Integer result is: " << result << endl;
		break;
	}
	case'/':
	{
		int result = cal.divide(int_num1, int_num2);
		cout << "Integer result is: " << result<< endl;
		break;
	}
		
	}

	switch (sign_double) {
	case'+': {
		double result = cal.add(double_num1, double_num2);
		cout << "Double result is: " << result << endl;
		break;
	}
	case'-': {
		double result = cal.subtract(double_num1, double_num2);
		cout << "Double result is: " << result<< endl;
		break;
	}
	case'*': {
		double result = cal.multiply(double_num1, double_num2);
		cout << "Double result is: " << result << endl;
		break;
	}
	case'/': {
		double result = cal.divide(double_num1, double_num2);
		cout << "Double result is: " << result << endl;
		break;
	}


	}
	return 0;
}