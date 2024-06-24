#include <iostream>
#include <string>
using namespace std;

int main() {
	double weight;
	string planet;

	cout << "What is your weight on Earth? ";
	cin >> weight;
	cout << "What planet/moon are you on? ";
	cin >> planet;

	if (planet == "moon") {
		cout << "Your weight on the moon is: " + to_string(weight / 6);
	}
	else {
		cout << "Planet or moon not recognized. ;(";
	}
}
