// AverageOfValues.cpp : The purpose is to add five numbers then divide the amount the numbers to get the average
//

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4, num5;
	int sum;
	cout << "Type a number: ";
	cin >> num1;
	cout << "Type another number: ";
	cin >> num2;
	cout << "Type another number: ";
	cin >> num3;
	cout << "Type another number: ";
	cin >> num4;
	cout << "Type one more number: ";
	cin >> num5;
	sum = num1 + num2 + num3 + num4 + num5;
	cout << "Sum is: " << sum;
	
	//This will divide the sum to the amount of numbers
	
	cout << "\nThe average of the five number is " << (float)sum / 5 << endl;

} 


