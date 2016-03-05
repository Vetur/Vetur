#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fp("E:\\A.csv");
	if (!fp)
	{
		exit(1);
	}
	double data[100],sum=0;
	for (int n = 0; n < 100; n++)
	{
		fp >> data[n];
		sum += data[n];
	}
	cout << sum;
	fp.close();
	return 1;
}
