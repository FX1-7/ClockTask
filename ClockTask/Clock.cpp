#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;


int main() {
	int Hours;
	int Minutes;
	int Seconds;
	int TotalSeconds;

	cout << "Please enter the current time. Please enter the hour, e.g 02, 12, 05: "; cin >> Hours;
	cout << endl << "Please enter the minutes in the same format as above: "; cin >> Minutes;
	cout << endl << "Please enter the seconds in the same format as above: "; cin >> Seconds;

	TotalSeconds = Hours * 3600 + Minutes * 60 + Seconds;
	
	cout << endl << "The total time that has elapsed since midnight is: " << TotalSeconds << " seconds." << endl;

	return 0;
}