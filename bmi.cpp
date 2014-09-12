#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double weight;
	double height;
	float bmi;

	// Prompt user for the person's weight and height and store the values
	cout << "Enter the person's weight(in pounds): ";
	cin >> weight;
	cout << endl;
	
	cout << "Enter the person's height(in inches): ";
	cin >> height;
	cout << endl;

	// Perform the bmi calculation with given values
	bmi = (weight * 703) / (pow(height, 2));
	
	if (bmi < 18.5){
		cout << "The person is underweight." << endl;
	}
	else if ((bmi >= 18.5) && (bmi <= 25)){
		cout << "The person is of optimal weight." << endl;
	}
	else{
		cout << "The person is overweight." << endl;
	}

	return 0;
}