// Name: Gokul Srinivasan
// Function: To find the area of a triangle

#include <iostream>
#include<cmath>
using namespace std;

void area_of_a_triangle()
{
	double initial_area,final_area,base,height;

	cout << "Enter the base of the triangle ";
	cin >> base;

        cout << "Enter the height of the triangle";
        cin >> height;

        //Calculating area:
        initial_area = base * height ;
         
        final_area = (initial_area)/(2);

	cout << "The area of the triangle is" << final_area << endl;
}
