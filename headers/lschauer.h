// Logan Schauer
// Print a random color

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void printRandColor() {
	string colors[7] = {"RED", "ORANGE", "YELLOW", "GREEN", "BLUE", "PURPLE", "BLACK"};
	srand(time(NULL));
	int randNumber = rand() % 8;
	cout << colors[randNumber] << endl;
};
