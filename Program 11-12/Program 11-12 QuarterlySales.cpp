#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

struct CompanyDivision {
	string divisionName;
	char name[10];
	int quarter;
	double quarterlySales;
};

void displayStructData(CompanyDivision);
void getData(CompanyDivision[]); 
CompanyDivision *choose(int, CompanyDivision [],
	CompanyDivision [], CompanyDivision [], CompanyDivision []);

const int SIZEDIV = 4, SIZENAME = 10, 
SIZEDIVARRAY = 4;

int main() {
	string nametest;
	//CompanyDivision testing[4][4][9];
	CompanyDivision dNorth[SIZEDIV][SIZEDIVARRAY],
		dSouth[SIZEDIV][SIZEDIVARRAY], dEast[SIZEDIV][SIZEDIVARRAY], 
		dWest[SIZEDIV][SIZEDIVARRAY];
	char *tempCharArray = new char[SIZENAME];
	bool done = false;
	int numberRuns = 0;
	//dNorth[1][1].name;
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
	done = false;
	while (!done) {
		int count = 0;
		while (count < 4) {
			displayStructData(dNorth[count][count]);
			count++;
		}
	}
	
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
	int count = 0;
	switch (choice) {
	case 0:
		while(count < 4) {
			//*div1[choice][count].name = 'N';
			div1[choice].divisionName = "North";
			div1[choice].quarter = 1;
			count++;
		}
		*tempStructure = div1;
		break;
	case 1:
		while (count < 4) {
			//*div1[choice][count].name = 'N';
			div2[choice].divisionName = "South";
			div1[choice].quarter = 1;
			count++;
		}
		*tempStructure = div2;
		break;
	case 2:
		while (count < 4) {
			//*div1[choice][count].name = 'N';
			div3[choice].divisionName = "East";
			div1[choice].quarter = 1;
			count++;
		}
		*tempStructure = div3;
		break;
	case 3:
		while (count < 4) {
			//*div1[choice][count].name = 'N';
			div4[choice].divisionName = "West";
			div1[choice].quarter = 1;
			count++;
		}
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

void displayStructData(CompanyDivision tempDivision) {
	cout << tempDivision.name << endl;
	cout << tempDivision.quarter << endl;
}