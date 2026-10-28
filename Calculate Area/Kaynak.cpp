#include <iostream>
using namespace std;

class CalculateArea {
public:
	int width, height, base;
	float area;
};
int main() {
	CalculateArea rectangle;
	cout << "---Rectangle Area---\n";

	cout << "Enter a width:";
	cin >> rectangle.width;
	cout << "Enter a height : ";
	cin >> rectangle.height;

	cout << "Width:" << rectangle.width << endl;
	cout << "Height:" << rectangle.height << endl;

	rectangle.area = rectangle.width * rectangle.height;
	cout << "Rectangle area is " << rectangle.area << endl;
	cout << "\n";


	CalculateArea square;
	cout << "---Square Area---\n";

	cout << "Enter a height : ";
	cin >> square.height;
	cout << "Height:" << square.height << endl;

	square.area = square.height * square.height;
	cout << "Square area is " << square.area << endl;
	cout << "\n";

	CalculateArea triangle;
	cout << "---Triangle Area---\n";

	cout << "Enter a base:";
	cin >> triangle.base;
	cout << "Enter a height : ";
	cin >> triangle.height;

	cout << "Base:" << triangle.base << endl;
	cout << "Height:" << triangle.height << endl;

	triangle.area = (triangle.base * triangle.height) / 2.0;
	cout << "Triangle area is " << triangle.area << endl;
	cout << "\n";

	cout << "Rectangle area=" << rectangle.area << endl;
	cout << "Square area=" << square.area << endl;
	cout << "Triangle area=" << triangle.area << endl;


	return 0;

}