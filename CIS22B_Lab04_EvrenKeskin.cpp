#include <string>
#include <iostream>

using namespace std;

template <typename T> T minimum(T t1, T t2);
template <typename T> T maximum(T t1, T t2);
template <typename T> T absolute(T t1);
template  <typename T> T total(int asked);

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

	//cout << "And now the total method " << endl;
	//cout << "Caution: Only enter the same type of data(only integers, or only strings)" << endl;
	//cout << total(3) << " is the total of your entries" << endl;

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
T total(int asked)
{
	for (int entryNum = 0; entryNum < asked; entryNum++)
	{
		cout << "Next entry: ";
		cin >> entry;
		cout << endl;
		total += entry;
	}
	return total;
}