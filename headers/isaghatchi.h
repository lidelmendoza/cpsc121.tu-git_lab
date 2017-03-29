// Name: Idean Saghatchi
// Function: There are 1.52718e-05 microcenturies in 5 jiffys.

#include <iostream>

void jiffy_to_microcentury()
{
	unsigned int count;
	std::cout << "How many jiffys? ";
	std::cin >> count;
	std::cout << "There are " <<  count / 327400.00 << " microcenturies in " << count
			  << " jiffys.\n";
}
