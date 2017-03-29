// Name: Yu(Jack) Li
// Function: Count the number of spaces in an file

#include <fstream>
#include <iostream>
#include <string>

void spaces_in_file()
{
	int num_spaces= 0;
	char character;
	string filename;
	ifstream file;

	cout << "Enter the name of a file(Example: hello.txt): ";
	cin >> filename;
	file.open(filename);

	if(file) {
		while(!file.eof()) {
			file.get(character);
			if(character == ' ') {
				num_spaces++;
			}
		}
	} else {
		cout << "Error. File can not be opened" << endl;
	}

	file.close();
	cout << "Number of spaces in file: " << num_spaces << "." << endl;
}
