#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

struct word
{
	char b[20];
	int num = 0;
};

int main()
{
	word a,n;
	char t, w[30];
	cout << "-f ";
	cin >> w;
	cout << "-w ";
	cin >> a.b;
	fstream fp;
	fp.open(w, ios_base::in);
	if (!fp) exit(1);
	fp >> noskipws;
	while (fp)
	{
		int j = 0;
		fp >> t;
		if (!(t <= 'z' && t >= 'a') && !(t <= 'Z' && t >= 'A'))
			continue;
		while ((t <= 'z' && t >= 'a') || (t <= 'Z' && t >= 'A'))
		{
			n.b[j] = t;
			fp >> t;
			j++;
		}
		n.b[j] = '\0';
		if (!_stricmp(n.b, a.b))
			a.num++;
	}
	if (a.num == 0)
		cout << a.b << '\t' << a.num << endl;
	else
		cout << "不存在"<<endl;
	fp.close();
	return 1;
}
