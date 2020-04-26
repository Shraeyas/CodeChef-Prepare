#include <iostream>

using namespace std;

int main()
{
	//freopen("in.in", "r", stdin);

	int t;
	cin >> t;

	while(t--)
	{
		int n, c;
		cin >> n >> c;
		int can = 0;

		for(int i = 0 ; i < n ; i++)
		{
			int x;
			cin >> x;

			can += x;
		}

		if(can <= c)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}
