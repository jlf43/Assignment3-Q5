#pragma once
#include <map>
#include <iterator>
#include <iostream>
#include <string>
using namespace std;

// this method outputs the data stored in stateDataMap
void print_map(map<string, string> &m)
{
	for (map<string, string>:: iterator itr = m.begin(); itr != m.end();)
	{
		cout << itr->first << ", " << itr->second << endl;
		++itr;
	}
}

// this method outputs the capitalName using the stateName which will be entered by the user
void output_cap(map<string, string>& m, string stateName)
{
	for (map<string, string>::iterator itr = m.begin(); itr != m.end();)
	{
		
		if (itr->first == stateName)
		{
			cout << "The capital of " << itr->first << " is: " << itr->second << endl;
		}
		++itr;
	}

}

