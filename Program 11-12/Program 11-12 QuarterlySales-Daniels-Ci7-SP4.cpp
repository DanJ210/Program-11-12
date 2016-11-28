#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

struct CompanyDivision {
	char name[10];
	int quarter;
	double quarterlySales;
};

void getData(CompanyDivision[]); 
CompanyDivision *choose(int, CompanyDivision [],
	CompanyDivision [], CompanyDivision [], CompanyDivision []);

const int SIZEDIV = 12, SIZENAME = 10, 
SIZEDIVARRAY = 4;

int main() {
	string nametest;
	CompanyDivision dNorth[SIZEDIV][SIZEDIVARRAY],
		dSouth[SIZEDIV][4], dEast[SIZEDIV][SIZEDIVARRAY], 
		dWest[SIZEDIV][SIZEDIVARRAY];
	char *tempCharArray = new char[SIZENAME];
	bool done = false;
	int numberRuns = 0;
	do {
		if (!done) {
			while (!done) {
				CompanyDivision *tempDiv[SIZEDIVARRAY];
				//cout << "test";
				tempDiv[0] = choose(numberRuns, dNorth[SIZEDIVARRAY],
					dSouth[SIZEDIVARRAY], dEast[SIZEDIVARRAY], dWest[SIZEDIVARRAY]);
				cout << tempDiv[0];
				getData(tempDiv[0]);
				numberRuns++;
				if (numberRuns == 1) {
					done = true;
				}
			}
		}
		//char* ptrTempCharArray; 
		//cout << "Please enter division\n";
		//cin.getline(tempCharArray, 10);
		//cin.getline(dNorth[0][1].name, SIZENAME);
		//cout << dNorth[0][1].name;
		//cout << division[0].name;
		//cout << "Enter Quarter ";
		//cin >> division[0].quarter;
		//cout << "Enter total sales ";
		//cin >> division[0].quarterlySales;
		//cout << division[0].quarter;
		//cout << division[0].quarterlySales;
		//ptrTempCharArray = &tempCharArray;
	} while (!done);
	//cin << nametest.c_str;
	/*
	for (int i = 0; i < nametest.length; i++) {
		ptrTempCharArray[i] = nametest[i];
	}
	*/
	//cout << tempCharArray;

	cin.ignore(2);
	//cout << ptrTempCharArray;
	//cin << division[0].name[1];
	//cin.getline(cin, division[0].nam
	//division[1].name;


}
// Chooses which division to populate next
CompanyDivision *choose(int choice, CompanyDivision div1[],
	CompanyDivision div2[], CompanyDivision div3[], CompanyDivision div4[]) {
	CompanyDivision *tempStructure[SIZEDIVARRAY];
	div1[0].name;
	switch (choice) {
	case 0:
		*tempStructure = div1;
		break;
	case 1:
		*tempStructure = div2;
		break;
	case 2:
		*tempStructure = div3;
		break;
	case 3:
		*tempStructure = div4;
		break;

	}
	return *tempStructure;
}

void getData(CompanyDivision tempDivision[SIZEDIVARRAY]) {
	bool done = false;
	int numberRuns = 0;
	int index = 0, count = 0;
	do {
		if (count < 4) {
			cout << "Please enter " << count << "st";
			//cin.getline(tempDivision[index].name, SIZEDIVARRAY);
			cin >> tempDivision[index].name;
			//cin.clear;
			//out << count << endl;
			cout << count << endl;
			cout << tempDivision[index].name << endl;
			count++;
			//cin.ignore(2);
		}
		numberRuns++;
	} while (numberRuns < 4);
}