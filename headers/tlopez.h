#include <iostream>

using namespace std;

void mF_to_kB() {
	int megaFonzies;
	double kiloBravos;
	cout << "How many MegaFonzies are you currently having? ";
	cin << megaFonzies;
	kiloBravos = megaFonzies*325;
	cout << "\nThat means that you are currently having "
	<< kiloBravos << " KiloBravos!\n";
}
