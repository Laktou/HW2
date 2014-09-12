#include <iostream>

using namespace std;

int main(){
	int newVal = 0;
	int limit;
	int total = 0;
	double avg = 0.0;

	cout << "Enter the number of values: ";
	cin >> limit;
	cout << endl;

	for (int count = 0; count < limit; count++, total = total + newVal){
		cout << "Enter the next value: ";
		cin >> newVal;
		cout << endl;
		if (newVal == -1){
			cout << "The loop has ended early because you entered '-1'!" << endl;
			break;
		}
	}

	avg = double(total) / double(limit);
	cout << "The average of the entered numbers is: " << avg;

	return 0;
}