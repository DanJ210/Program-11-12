#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

const int SIZEDIVARRAY = 4;

struct CompDivision {
	string divName;
	int divQuarter;
	double divEarnings;
};

void getData(CompDivision);
void displayData(CompDivision []);
CompDivision populateDivision(CompDivision [], int);

int main() {
	CompDivision dNorth[SIZEDIVARRAY], dSouth[SIZEDIVARRAY], dEast[SIZEDIVARRAY], dWest[SIZEDIVARRAY];
	CompDivision *tempDiv[SIZEDIVARRAY];
	int numberRuns = 0;
	dNorth[SIZEDIVARRAY] = populateDivision(dNorth, numberRuns);

	//displayData(dNorth[SIZEDIVARRAY]);
	displayData(dNorth);
}
CompDivision populateDivision(CompDivision tempDivision[], int runs) {
	bool done = false;
	int count = 0;
	/*
	while (!done) {
		tempDivision[count].divQuarter = count;
		tempDivision[count].divEarnings = 2500;
		if (runs == 0) {
			tempDivision[count].divName = "North";
			//tempDivision[count].divQuarter = count;
		}
		else if (runs == 1) {
			tempDivision[count].divName = "South";
			//tempDivision[count].divQuarter = count;
		}
		else if (runs == 2) {
			tempDivision[count].divName = "East";
			//tempDivision[count].divQuarter = count;
		}
		else if (runs == 3) {
			tempDivision[count].divName = "West";
			//tempDivision[count].divQuarter = count;
		}
		else {
			done = true;
		}
		done = true;
		count++;
		
	}*/
	return tempDivision[SIZEDIVARRAY];
}

/*
void getData(CompDivision tempDivision[]) {
	bool done = false;
	int numberRuns = 0;
	int index = 0, count = 0;
	do {
		if (count < 4) {
			cout << "Please enter for " << count << "st";
			//cin.getline(tempDivision[index].name, SIZEDIVARRAY);
			//cin >> tempDivision[index].name;
			//cin.clear;
			//out << count << endl;
			//cout << count << endl;
			//cout << tempDivision[index].name << endl;
			count++;
			//cin.ignore(2);
		}
		numberRuns++;
	} while (numberRuns < 4);
}
*/
void displayData(CompDivision tempDivision[]) {
	bool done = false;
	int count = 0;
	while (!done) {
		if (count < 4) {
			cout << tempDivision[count].divName << endl;
			cout << tempDivision[count].divQuarter << endl;
			count++;
		}
		else {
			done = true;
		}
	}
}