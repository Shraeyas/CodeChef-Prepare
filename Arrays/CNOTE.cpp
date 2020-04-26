#include <iostream>

using namespace std;

int main()
{
	//freopen("in.in", "r", stdin);
	int t;
	cin >> t;

	while(t--)
	{
		int x, y, k, n, ch = 0;
		cin >> x >> y >> k >> n;

		int ar[2][n];

		for(int i = 0 ; i < n ; i++)
		{
			cin >> ar[0][i] >> ar[1][i];
		}

		if(x <= y)
		{
			cout << "LuckyChef" << endl;
			ch = 1;
		}

		if(!ch)
		{
			for(int i = 0 ; i < n ; i++)
			{
				if(x - y <= ar[0][i] && ar[1][i] <= k)
				{
					cout << "LuckyChef" << endl;
					ch = 1;
					break;
				}
			}
		}

		if(!ch)
		{
			cout << "UnluckyChef" << endl;
		}
	}
}
