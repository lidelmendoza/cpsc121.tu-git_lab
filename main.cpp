#include "headers/alee.h"
#include "headers/bfrick.h"
#include "headers/lpham.h"
#include "headers/lschauer.h"
#include "headers/isaghatchi.h"
#include "headers/cnavarro.h"
#include "headers/nlui.h"
#include "headers/yli.h"
#include "headers/Gsrinivasan.h"
#include <iostream>
#include "headers/tlopez.h"

using namespace std;

int main()
{
	short unsigned int choice;
	cout << "0) Convert examples to kilo-examples.\
	\n1) \
	\n2) \
	\n3) \
	\n4) Convert Wiffles to Inches. \
	\n2) Find the area of a circle.\
	\n3) Count the number of spaces in a file.\
	\n4) \
	\n5) Find the area of a triangle.\
	\n6) \
	\n7) Print a Random Color.\
	\n8) \
	\n9) Convert jiffys to microcenturies.\
	\n10) \
	\n11) Convert Weeks into Beard-inches. \
	\n12) Convert pounds to poods. \
	\n13) \
	\n14) \
	\n15) \
	\n16) \
	\n17) \
	\n18) Convert MegaFonzies to KiloBravos\
	\n19) \
	\n";
	cout << "Please pick an option: ";
	cin >> choice;

	switch(choice) {
		case 0:  // BFrick
			examples_to_kiloxamples();
			break;
		case 1:  // LMendoza
			break;
		case 2:  // CNavarro
			Area_Of_A_Circle();
			break;
		case 3:  // YLi
			spaces_in_file();
			break;
		case 4:  // ALee
			wiffles_to_inches();
			break;
		case 5:  // GSrinivasan
			area_of_a_triangle();
			break;
		case 6:  // AAbuelhassan
			break;
		case 7:  // LSchauer
			printRandColor();
			break;
		case 8:  // KGriffin
			break;
		case 9:  // ISaghatchi
			jiffy_to_microcentury();
			break;
		case 10:  // THasani
			break;
		case 11:  // LPham
			weeks_to_beard_inches();
			break;
		case 12:  // NLui
			pounds_to_poods();
			break;
		case 13:  // JSanrindo
			break;
		case 14:  // BAmaro
			break;
		case 15:  // WCovington
			break;
		case 16:  // LWalcher
			break;
		case 17:  // SChacon
			break;
		case 18:  // TLopez
			mF_to_kB();
			break;
		case 19:  // MAminy
			break;
	}

	return 0;
}
