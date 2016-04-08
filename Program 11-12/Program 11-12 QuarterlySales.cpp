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

const int SIZEDIV = 12, SIZENAME = 10;

int main() {
	string nametest;
	CompanyDivision division[SIZEDIV];
	char *tempCharArray = new char[SIZENAME];
	//char* ptrTempCharArray;
	cout << "Please enter division\n";
	//cin.getline(tempCharArray, 10);
	cin.getline(division[0].name, SIZENAME);
	cout << division[0].name;
	cout << "Enter Quarter ";
	cin >> division[0].quarter;
	cout << "Enter total sales ";
	cin >> division[0].quarterlySales;
	cout << division[0].quarter;
	cout << division[0].quarterlySales;
	//ptrTempCharArray = &tempCharArray;
	
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