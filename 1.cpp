#include<iostream>
#include<fstream>
using namespace std;


double ArraySum(int i)
{
	fstream fp("E:\\A.csv");
	if (!fp)
	{
		exit(1);
	}
	double m, sum = 0;
	for (int n = 0; n < i; n++)
	{
		fp >> m;
		sum += m;
	}
	fp.close();
	return sum;
}

int main()
{
	int i;
	double sum;
	cin >> i;
	sum = ArraySum(i);
	cout << sum;
	return 1;
}
