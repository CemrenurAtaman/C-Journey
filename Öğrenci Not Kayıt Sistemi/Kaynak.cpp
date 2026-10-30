#include <iostream>
#include <string>

using namespace std;

class  student{
private:
	int examScore;
public:
	string name;
	int number;

	student(string studentName, int studentNumber) {
		examScore = 0;
		name = studentName;
		number = studentNumber;
	}
	void setScore(int newScore) {
		if (newScore >= 0 && newScore <= 100) {
			examScore = newScore;
		}
		else {
			cout << "Error! The value can be between 0 and 100" << endl;
		}
	}
	int getScore() {
		return examScore;
	}
	~student() {
		cout << name << " The student was removed from the system" << endl;
	}
	

};
int main() {
	student studentFirst("Mabel", 2009);
	student studentSecond("Dipper", 1994);

	studentFirst.setScore(67);
	studentSecond.setScore(98);

	cout << "Stundet name is " << studentFirst.name <<" Student mumber is  "<<studentFirst.number<< " Score is " << studentFirst.getScore() << endl;
	cout << "Stundet name is " << studentSecond.name<<" Student number is  "<<studentSecond.number<<"  Score is " << studentSecond.getScore() << endl;

	return 0;
}