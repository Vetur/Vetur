#include<iostream>
#include<fstream>
using namespace std;


double ArraySum(int end,int begn)
{
	fstream fp("E:\\A.csv");
	if (!fp)
	{
		exit(1);
	}
	double m, sum = 0;
	for (int t = 1; t < begn; t++)
	{
		fp >> m;
	}
	for (int n = begn; n <= end; n++)
	{
		fp >> m;
		sum += m;
	}
	fp.close();
	return sum;
}

int main()
{
	int begn,end;
	cin >> begn>>end;
	cout << ArraySum(end, begn);
	return 1;
}
