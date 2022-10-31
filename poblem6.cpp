// poblem6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <string>
#include <iostream>
#include <sstream>
class studentName {
private:
	string name;
public:
	studentName(string name)
	{
		this->name = name;

		string  t;
		int space = 0;
		for (size_t i = 0; i < name.length(); i++)
		{
			if (name[i] == ' ')
				space++;
		}
		if (space == 1)
		{
			for (size_t i = 0; i < name.length(); i++)
			{
				if (name[i] == ' ')
				{
					for (size_t j = i; j < name.length(); j++)
					{
						t += name[j];
					}
				}
			}
			this->name += ' ' + t;
		}
		if (space == 0)
		{
			this->name += ' ' + name + ' ' + name;
		}
	}
	//string tqrar(string name)
	int size() 
	{
		return name.size();
	}
	void print ()
	{
		stringstream x(this->name);
		string tems;
		int f = 1;
		while (x>>tems) 
		{		
			cout <<f<<") "<< tems << endl;
			f++;
		}
	}
	void replace (int i , int j )
	{
		if (i > 3 || j > 3)
			cout << "false \n";
		else
		{
			cout << "true\n";
			string* arr = new string[this->size()];
			stringstream s(this->name);
			string temp;
			int t = 0;
			while (s >> temp)
			{
				arr[t] = temp;
				t++;
			}
			swap(arr[i-1], arr[j-1]);
			this->name = "";
			for (int i = 0;i < 5;i++)
			{
				name += arr[i];
				name += " ";
			}
		}
		//string st;
		//st = arr[i];
		//arr[i] = arr[j];
		//arr[j]=st;
	}
};
int main()
{
	string n ;
	cout << "enter ur name \n";
	getline(cin,n);
	studentName a(n);
	a.print();
	a.replace(1, 3);
	a.print();

	//string arr[5] = { "malek","mohamed","amin" };
	//arr[] += "mazen";
	//for (size_t i = 0; i < 5; i++)
	{
	//	cout << arr[i]<<endl;
	}
	//swap(arr[0], arr[1]);
	//cout << arr[0] << endl;
}
/*void replace(int i, int j)
{
	string* arr = new string[this->size()];
	stringstream s(this->name);
	string temp;
	int t = 0;
	while (s >> temp)
	{
		arr[t] = temp;
		t++;
	}
	string st;
	st = arr[i - 1];
	arr[i - 1] = arr[j - 1];
	arr[j - 1] = st;
	name = "";
	for (int i = 0; i < sizeof(arr); i++) { name += arr[i]; name += " "; }
}
};
	void ser(string g)
	{
		int spacenum = 0;
		int spaceind;
		for (size_t i = 0; i < 19; i++)
		{
			if (g[i] == ' ')
			{
				spaceind = i;
				spacenum++;
			}
		}
		if (spacenum == 0)
		{
			g = g + ' ' + g + ' ' + g;
		}
		if (spacenum == 1)
		{
			g = g + ' ' + g.substr(spaceind + 1);
		}
	}

*/