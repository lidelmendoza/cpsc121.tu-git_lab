// Nicholas lui header file
// receives an double in pounds and returns in poods
#include <iostream>
using namespace std;

void pounds_to_poods() {

  double userInputPounds; // double in pounds
  cout << "Please enter a number in pounds. example:(10.0)\n";
  cin >> userInputPounds;
  cin.clear();
  cin.ignore(100000000000000, '\n');
  cout << userInputPounds << " in pounds is " << userInputPounds / 36.11
       << " poods." << endl;
}
