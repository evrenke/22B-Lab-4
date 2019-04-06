#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
 
using namespace std;

template <typename T> T minimum(T t1, T t2);
template <typename T> T maximum(T t1, T t2);
template <typename T> T absolute(T t1);
template  <typename T> T total(T inputs[]);

int main()
{
	cout << "Here is a demonstration of template methods" << endl;
	cout << "1) Comparing two integers 5 and 17 " << endl;
	cout << "Minimum of the two: " << minimum(5, 17) << endl;
	cout << "Maximum of the two: " << maximum(5, 17) << endl;
	cout << "2) Comparing two strings \"cat\" and \"dog\" " << endl;
	cout << "Minimum of the two: " << minimum("cat", "dog") << endl;
	cout << "Maximum of the two: " << maximum("cat", "dog") << endl;

	cout << "3) Using the absolute method " << endl;
	cout << "Absolute value of -13.7 :" << absolute(-13.7) << endl;
	cout << "Absolute value of -60: " << absolute(-60) << endl;
	cout << "Absolute value of 13.37:" << absolute(13.37) << endl;

	cout << "And now the total method " << endl;
	cout << "Caution: Only enter the same type of data(only integers, or only strings)" << endl;
	bool isEnteringValues = true;
	string values[100];
	for(int index = 0; isEnteringValues && index < 100 ; index++)
	{
		cin >> values[index];
	}
	total(values);


	system("pause");
	return 0;
}

template <typename T>
T minimum(T t1, T t2)
{
	return t1 > t2 ? t2 : t1;
}

template <typename T>
T maximum(T t1, T t2)
{
	return t1 > t2 ? t1 : t2;
}

template <typename T>
T absolute(T t1)
{
	return t1 > 0 ? t1 : -t1;
}

template  <typename T>
T total(T inputs[])
{
	T total;
	for (int entryNum = 0; entryNum < inputs.length; entryNum++)
	{
		total += inputs[entryNum];
	}
	return total;
}
