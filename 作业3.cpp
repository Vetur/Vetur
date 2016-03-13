#include<iostream>
#include<cstring>
using namespace std;

struct word
{
	char b[20];
	int num=1;
};

int main()
{
	word a[20],n;
	int  m = 0, j = 0, k = 0,h;
	char i[100];
	cin.get(i,100);
	while (i[m] != '\0')
	{
		if ((i[m] <= 'z' && i[m] >= 'a') || (i[m] <= 'Z' && i[m] >= 'A'))
		{
			for (j = 0; i[m] != ' ' && i[m] != '\0';j++)
			{
				n.b[j] = i[m];
				m++;
			}
			n.b[j ] = '\0';
			for (h = 0; h < k; h++)
			{
				if (!_stricmp(n.b,a[h].b))
				{
					a[h].num++;
					break;
				}
			}
			if (h>=k)
			{
				a[k] = n;
				k++;
			}
		}
		m++;
	}

	for (int f = 0; f<k; f++)
		cout << a[f].b<<'\t'<<a[f].num<<endl;

	return 1;
}
