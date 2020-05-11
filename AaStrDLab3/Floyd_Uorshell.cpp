#include<iostream>
#include<fstream>
#include<string>

#include"InputFunc.h"
#include"Matrix_of_adjacencies.h"

using namespace std;

int main() {

	ifstream input("input.txt");
	List<string>* list_fly = new List<string>();
	string city_Start;
	string city_End;

	InputDataFromFile(list_fly, input);

	cout << "Flight schedule: " << endl << endl;

	for (int i = 0; i < list_fly->get_size(); i++)

		cout << list_fly->at(i) << endl;

	cout << endl << "Enter the departure city" << endl;

	getline(cin, city_Start);

	cout << "Enter your arrival city" << endl;

	getline(cin, city_End);

	Matrix* matrix_floid_uorshell = new Matrix(list_fly);

	cout << matrix_floid_uorshell->Floid_Uorshell(city_Start, city_End) << endl;

	system("pause");

}