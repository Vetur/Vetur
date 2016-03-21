#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

struct word
{
	char b[20];
	int num = 1;
};

int main()
{
	word a[100], n; //a中存不同单词，n为辅助
	int  k = 0, h = 0;
	char t, w[30], q[30]; //t中存当前输入字符，w为输入文本地址，q为输出文本地址
	cout << "-f ";
	cin>>w;
	cout << ">";
	cin >> q;
	fstream fp , tp;
	fp.open(w, ios_base::in);
	tp.open(q, ios_base::out);
	if (!fp) exit(1);
	fp >> noskipws;
	while (fp)
	{
		int j = 0;
		fp >> t;
		if (!(t <= 'z' && t >= 'a') && !(t <= 'Z' && t >= 'A'))  //判断输入是否为单词
			continue;
		while ((t <= 'z' && t >= 'a') || (t <= 'Z' && t >= 'A'))  //存入单词
		{
			n.b[j] = t;
			fp >> t;
			j++;
			if (t == '\'')
			{
				fp >> t;
				if ((t <= 'z' && t >= 'a'))
					n.b[j] = t;
				else break;
			}
		}
		n.b[j] = '\0';
		for (h = 0; h < k; h++)   //比较已有单词
		{
			if (!_stricmp(n.b, a[h].b))
			{
				a[h].num++;
				break;
			}
		}
		if (h == k)    //单词不存在则存入
		{
			a[k] = n;
			k++;
		}
	}
	for (int i = 0; i<k; i++)     //按个数排序
	{
		word te;
		int j;
		for (j = 0; j < k - i; j++)
			if (a[j].num<a[j+1].num)
			{
				te = a[j];
				a[j] =a[j + 1];
				a[j + 1] = te;
			}
	}

	for (int i = 0; i<k; i++)   //按字母表排序
	{
		word te;
		int j,wo=0;
		for (j = 0; j < k - i; j++)
		{
			if (a[j].num == a[j + 1].num)
			{
				if (_stricmp(a[j].b, a[j + 1].b)>0)
				{
					te = a[j];
					a[j] = a[j + 1];
					a[j + 1] = te;
				}
			}
		}
	}

	for (int f = 0; f < k; f++)
		tp << a[f].b << '\t' << a[f].num << endl;
	fp.close();
	return 1;
        }
