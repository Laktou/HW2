#include <iostream>

using namespace std;

int main(){
	int secs;
	int mins;
	int hours;
	int days;

	// Retrieve number of seconds from user
	cout << "Enter a number of seconds: ";
	cin >> secs;
	cout << endl;

	// Checks if the seconds are less than that of one hour
	if (secs < 3600){
		mins = secs / 60;
		secs = secs - (mins * 60);
		cout << "That's " << mins << " minute(s) and " << secs << " second(s)." << endl;
	}
	// Checks if the seconds are less than that of a day
	else if (secs < 86400){
		hours = secs / 3600;
		mins = (secs - (hours * 3600)) / 60;
		secs = secs - ((hours * 3600) + (mins * 60));
		cout << "That's " << hours << " hour(s), " << mins << " minute(s), and " << secs << " second(s)." << endl;
	}
	// Takes care of anything equal to or more than a day
	else {
		days = secs / 86400;
		hours = (secs - (days * 86400)) / 3600;
		mins = (secs - ((days * 86400) + (hours * 3600))) / 60;
		secs = secs - ((days * 86400) + (hours * 3600) + (mins * 60));
		cout << "That's " << days << " day(s), " << hours << " hour(s), " << mins << " minute(s), and " << secs << " second(s)." << endl;
	}
	
	return 0;
}