//Using the pythagoreom Theorem to find the missing side of a right triangle
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	//call variables
	double base, perpendicular, hypotenuse;
	char user_selection;
	//Ask the user for what they are looking for
	cout << "What are you looking for?\n 1 for Base\n 2 for Perpendicular\n 3 for Hypotenuse\n";
	cin >> user_selection;
	//if-statements
	if (user_selection == '1') //this will find the base side of the triangle
	{
		cout << "\nWhat is the perpindicular side of the right triangle?\n";
		cin >> perpendicular;
		cout << "\nWhat is the hypotenuse of the right triangle?\n";
		cin >> hypotenuse;
		base = sqrt((pow(hypotenuse, 2) - pow(perpendicular, 2)));//finds base
		cout << base;
	}
	else if (user_selection == '2') //this will find the perpendicular side of the triangle
	{
		cout << "What is the base of the right triangle?\n";
		cin >> base;
		cout << "\nWhat is the hypotenuse of the right triangle?\n";
		cin >> hypotenuse;
		perpendicular = sqrt((pow(hypotenuse, 2) - pow(base, 2))); //finds perpendicular
		cout << perpendicular;
	}
	else //this will find the hypotenuse of the triangle
	{
		cout << "What is the base of the right triangle?\n";
		cin >> base;
		cout << "\nWhat is the perpindicular side of the right triangle?\n";
		cin >> perpendicular;
		hypotenuse = sqrt((pow(base, 2) + pow(perpendicular, 2))); //finds hypotenuse
		cout << hypotenuse;
	}
	return 0;
}