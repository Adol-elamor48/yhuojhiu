#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v{ 0,1,2,3,4 };
	int first = v[0];
	for (int i = 1; i < 5; i++)
	{
		v[i-1] = v[i];
	}
	v[4] = first;
	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}

}
