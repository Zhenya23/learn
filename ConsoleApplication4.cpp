#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>

using namespace std;
int main()
{
	setlocale(0, "Russian");
	string s;
	string f22[5];
	int k = 0, i = 0, count = 0, count1 = 0;
	ifstream text;
	ofstream f2;
	text.open("jop.txt");
	if (text)
	{
		cout << "Файл открыт корректно. Продолжаемработу." << endl;
		while (getline(text, s))
		{
			while (s[i])
			{
				if (s[i] == 'w')
				{
					count++;
				}
				i++;
			}
			if (count < 3)
			{
				f22[count1] = s;
				count1++;
			}
			else
			{
				cout << "В строке найдено больше 3х символов 'w'" << endl;
			}
			i = 0;
			count = 0;
		}
		text.close();
	}
	else
	{
		cout << "Возникла ошибка при обращении к файлу." << endl;
	}
	f2.open("f2.txt");
	for (int i = 0; i < 5; i++)
	{
		cout << f22[i] << endl;
		f2 << f22[i] << endl;
	}
	f2.close();
	return 0;
}
