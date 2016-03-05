#include<iostream>
using namespace std;


void ArraySum()
{
	int i,sum=0;
	cin >> i;
	int *data=new int [i];
	for (int e = 0; e < i;e++)
	{
		cin >> data[e];
		sum += data[e];
	}
	cout << sum;
}

int main()
{
	ArraySum();
	return 1;
}
