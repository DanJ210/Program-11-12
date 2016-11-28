#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

const int SIZEDIVARRAY = 4;

// I didn't want to seperate these into their own pages at this
// time because I'm already late and obviously that would add. I'm
// not sure if I'm even using the class correctly here by having it
// create the object structure but it works for my purpose.
class Division {
public:
	struct CompanyDivision {
		string divisionName;
		//char name[10];
		int quarter;
		double quarterlySales;
	};
	CompanyDivision dNorth[SIZEDIVARRAY], dSouth[SIZEDIVARRAY],
		dEast[SIZEDIVARRAY], dWest[SIZEDIVARRAY];
	Division() {

	}
	Division(string name, int quarter) {
		dNorth[0].divisionName = name;
		dNorth[1].divisionName = name;
		dNorth[2].divisionName = name;
		dNorth[3].divisionName = name;
	}
	//int nice = 5;
};

void getDate(Division);
Division populateDivision(Division);

int main() {
	Division currentDivision("test", 5)[];
	bool done = false;
	int numberRuns = 0;

	do {/*
		if (!done) {
			
		} */
		//currentDivision[4] = populateDivision(currentDivision[4]);
		numberRuns++;
	} while (!done);
}

/*
Division populateDivision(Division tempDivision[SIZEDIVARRAY]) {
	return tempDivision[SIZEDIVARRAY];
} */

void getData(Division tempDivision[SIZEDIVARRAY]) {
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