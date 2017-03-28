
// convert miles into kilometers
// there are 1.6 kilometers in a mile
#include <iostream>



void miles_to_kilomtrs(){
  int choice;
  double kilomtr = 1.60934;
  cout<< "Enter a whole number of miles and I will convert it into kilometers\n";
  cin >> choice;
  while (!isdigit(choice)){// not a letter
    cout << "Invalid input \n Please try again\n";
    cin.clear();
    cin.ignore(100000000,'\n');
    cin >> choice;
  }
  kilomtr*=choice;
  cout << "You entered " << choice << " mile(s)\n" << "In kilometers it is " << kilomtr << "\n";
}
