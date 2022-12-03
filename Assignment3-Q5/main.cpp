//Jaeni Lee
//CS 303 Assignment 3 question 5

#include <iostream>
#include <map>
#include <iterator>
#include "Header.h";
using namespace std;



int main()
{
	
	map<string, string> stateDataMap = {
		{"Nebraska", "Lincoln"},
		{"New York", "Albany"},
		{"Ohio","Columbus"},
		{"California", "Sacramento"},
		{"Massachusetts", "Boston"},
		{"Texas", "Austin"}
	};

	cout << "Here is a list of different states with its capital:" << endl;

	// this method outputs all the data stored in stateDataMap
	print_map(stateDataMap);
	cout << endl;

	cout << "Changing the captial of California to Los Angeles . . ." << endl << endl;

	// this changes the capital of CA to LA (replacing Sacramento)
	for (map<string, string>::iterator itr = stateDataMap.begin(); itr != stateDataMap.end();)
	{
		if (itr->first == "California")
		{
			itr->second = "Los Angeles";
		}
		++itr;
	}

	//this will print out the updated list
	cout << "UPDATED list of States and its capital: " << endl;
	print_map(stateDataMap);
	cout << endl;

	int num;
	cout << "How many capitals would you like to know? Please select between 0 - 6: " << endl;
	cin >> num;
	if (num == 0)
	{
		cout << "Next time!" << endl;
	}

	//this will output a capital that corresponds with the user's state from that list
	string stateName = "";
	while (num > 0)
	{
		cout << "Please enter the name of the state: " << endl;
		getline(cin >> ws, stateName);
		output_cap(stateDataMap, stateName);
		cout << endl;
		--num;
	}

	return 0;
}