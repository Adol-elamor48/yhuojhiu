#include<iostream>
#include<vector>
using namespace std;
void shift(vector<int >&v, int time)
{
	int n = v.size();
	if (n == 0)
	{
		return;
	}
	time = time % n;
	reverse(v.begin(), v.end());
	reverse(v.begin(), v.begin() + time);
	reverse(v.begin()+time, v.end());


}




int main()
{
	vector <int>v = { 0,1,2,3,4 };
	int time = 2;

	cout << "the orignal vector is ";
		for(int org : v)
		{
			cout << org<<" ";
		}
		cout << endl;
		cout << "the vector after shift ";
		shift(v, time);

		for(int shif : v)
		{
			cout << shif<<" ";
		}



	return 0;
}
