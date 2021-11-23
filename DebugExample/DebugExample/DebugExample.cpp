// DebugExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

int computeSum(int num);
void f(int &i);

void main()
{
	int number;
	cout << "pls enter a number to compute sum ";
	cin >> number;
	cout<<" The sum of numbers from 1 to "<< number<<" is - "<<computeSum(number);
	f(number);
	cout << "\nThe value of number is "<< number;
}

int computeSum(int num) 
{
	int sum=0;
	for (int i = 0; i <= num; i++)
		sum += i;
	return sum;
}

void f(int& i)
{
	i = -i;
}










/*

int recursiveSum(int num);



	cout << "\nThe recursive sum of numbers from 1 to " << number << " is - " << recursiveSum(number);

int recursiveSum(int num)
{
	if (num == 0)
		return 0;
	else
		return num + recursiveSum(num - 1);
}


*/

