/*
	Filename: CIS22B_Lab04_EvrenKeskin.cpp
	Author: Evren Keskin
	Date: 06/13/2018
	Description:
		This program is a showcase of the usage of different types of template functions
*/
#include <string>
#include <iostream>

using namespace std;

template <typename T> T minimum(T t1, T t2);
template <typename T> T maximum(T t1, T t2);
template <typename T> T absolute(T t1);
template  <typename T> T total(T t[], int s);


/*PSEUDOCODE:
Use minimum method with integers
Output result
Use maximum method with integers
Output result
Use minimum method with strings
Output result
Use maximum method with strings
Output result
Use absolute method with double
Output result
Use absolute method with integer
Output result
Get integer values from user
Use total method with integer values
Output result
Get string values from user
Use total method with string values
Output result
*/
int main()
{
	/* USING MINIMUM AND MAXIMUM FUNCTIONS */
	cout << "Here is a demonstration of template methods" << endl;
	cout << "1) Comparing two integers 5 and 17 " << endl;
	cout << "Minimum of the two: " << minimum(5, 17) << endl;
	cout << "Maximum of the two: " << maximum(5, 17) << endl;
	cout << "2) Comparing two strings \"cat\" and \"dog\" " << endl;
	cout << "Minimum of the two: " << minimum("cat", "dog") << endl;
	cout << "Maximum of the two: " << maximum("cat", "dog") << endl;

	/* USING ABSOLUTE VALUE FUNCTION */
	cout << "3) Using the absolute method " << endl;
	cout << "Absolute value of -13.7 :" << absolute(-13.7) << endl;
	cout << "Absolute value of -60: " << absolute(-60) << endl;

	/* USING TOTAL VALUE FUNCTION */
	cout << "And now the total method " << endl;
	cout << "Enter any 5 integers you want:" << endl;
	int values[5];
	for (int ind = 0; ind < 5; ind++)
	{
		cout << "Integer #" << ind + 1 << ":";
		cin >> values[ind];
		cout << endl;
	}
	int sum = total(values, 5);
	cout << "The sum of your numbers is " << sum << endl;

	cout << "Now enter any 5 strings you want:" << endl;
	string words[5];
	string temp;
	getline(cin,temp, '\n');
	for (int ind = 0; ind < 5; ind++)
	{
		cout << "String #" << ind + 1 << ":";
		getline(cin,words[ind],'\n');
		cout << endl;
	}
	string concatenation = total(words, 5);
	cout << "The concatenation of your strings is :" << endl;
	cout << concatenation << endl;

	system("pause");
	return 0;
}

/*
	Function: minimum
	Parameters: t1 and t2
	I/O: none
	Return: minimum of t1 and t2
	Description: 
		This function takes two values of any type of data 
		and compares them to see which is lower
		and returns the lower value to its caller

*/
template <typename T>
T minimum(T t1, T t2)
{
	return t1 > t2 ? t2 : t1;
}


/*
	Function: maximum
	Parameters: t1 and t2
	I/O: none
	Return: maximum of t1 and t2
	Description:
	This function takes two values of any type of data
	and compares them to see which is higher
	and returns the higher value to its caller

*/
template <typename T>
T maximum(T t1, T t2)
{
	return t1 > t2 ? t1 : t2;
}

/*
	Function: absolute
	Parameters: t1 
	I/O: none
	Return: absolute value of t1
	Description:
	This function takes a value of any numeral type of data
	and returns its absolute value to its caller
*/
template <typename T>
T absolute(T t1)
{
	return t1 > 0 ? t1 : -t1;
}

/*
	Function: total
	Parameters: values[] and size
	I/O: none
	Return: sum of elements in value
	Description:
	This function takes an array of values of any data and its size
	and returns the sum of all of the elements in the array

*/
template  <typename T>
T total(T values[], int size)
{
	T total = values[0];
	for (int entryNum = 1; entryNum < size; entryNum++)
	{
		total += values[entryNum];
	}
	return total;
}
