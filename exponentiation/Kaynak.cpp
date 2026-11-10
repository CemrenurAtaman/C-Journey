#include<iostream>
using namespace std;

float expo(int base,int power);

int main() {
	int base, power;
	float ans;
	cout << "Enter base:";
	cin >> base;
	cout << "\n";
	cout << "Enter power:";
	cin >> power;
	cout << "\n";

	ans = expo(base, power);
		cout << "Answer is " << ans << endl;
	

	return 0;
}
float expo(int base, int power) {
	float result = 1;
	if (power > 0) {
		for (int i = 0;i < power;i++) {
			result = result * base;
		}
		return result;
	}
	
	if(power<0) {
		for (int i = 0;i< -power;i++) {
			result =result/base;
		}
		return result;
	}
}
 