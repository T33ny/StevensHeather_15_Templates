//Heather Stevens
//CIS 1202 R02
//11/28/2022
//Week 15 Templates

#include<iostream>
using namespace std;

template<class T>	//create template that accepts all datatypes
T half(T num)		//halves numbers sent to function
{
	T part;
	part = num / 2;

	return part;
}


int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
	

	system("pause");
	return 0;
}














