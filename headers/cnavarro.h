// Name: Christian Navarro
// Function: Area of a circle

#include <iostream>

void Area_Of_A_Circle()
{
	double area, radius;

	std::cout << "Please enter the radius.\n";
	std::cin >> radius;

	area= 3.14159265 * (radius * radius);

	std::cout << "The area of the circle is " << area << ".\n";
}
