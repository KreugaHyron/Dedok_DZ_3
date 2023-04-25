#include <iostream>
using namespace std;
int main()
{ //Task_1
	double Number_1;
	double Number_2;
	double Number_3;
	int average_number;
	cout << "Print three numbers:\n";
	cin >> Number_1 >> Number_2 >> Number_3;

	average_number = (Number_1 + Number_2 + Number_3 / 3);
	cout << "Middle value is: " << average_number;
	cout << "\n";

	//Task_3
	double Num_1;
	double degree;
	int result;

	cout << "Enter a number:\n";
	cin >> Num_1;
	cout << "Enter a degree of you number:\n";
	cin >> degree;

	result = pow(Num_1, degree);
	cout << "Result is: " << result;
	cout << "\n";

	//Task_4
	const double P = 3.14;
	double radius;
	double area;
	double circumference;

	cout << "Radius of the circle:\n";
	cin >> radius;

	area = P * pow(radius, 2);
	circumference = 2 * P * radius;

	cout << "Area of circle: " << area << "\n";
	cout << "Circumference is: " << circumference << "\n";
	cout << "\n";

	//Task_7
	double N, Pers;

	cout << "Enter a number: ";
	cin >> N;

	Pers = N / 100.0;
	cout << "Percentage of " << N << " is " << Pers << "\n";
	cout << "\n";

	//Task_9???
	//with trird variable
	int a = 100;
	int b = 40;
	int change{};

	change = a;
	a = b;
	b = change;

	cout << "Before changes: a = " << a << ", b = " << b << "\n";
	cout << "After changes: a = " << a << ", b = " << b << "\n";

	//Task_6
	double land_miles_per_km = 0.62137;
	double nautical_miles_per_km = 1.852;
	double KM{};

	cout << "Enter the number of kilometers: ";
	cin >> KM;
	double land_miles_tmp;
	land_miles_tmp = KM * land_miles_per_km;
	double nautical_miles_tmp;
	nautical_miles_tmp = KM * nautical_miles_per_km;

	cout << "The distance is " << land_miles_tmp << " land miles. " << "\n";
	cout << "The distance is " << nautical_miles_tmp << " nautical miles. " << "\n";
	
}