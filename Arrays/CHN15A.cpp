#include <iostream>

using namespace std;

int main()
{
	//freopen("in.in", "r", stdin);

	int t;
	cin >> t;

	while(t--)
	{
		int n, k;
		cin >> n >> k;

		int ans = 0;

		for(int i = 0 ; i < n ; i++)
		{
			int x;
			cin >> x;

			if((x + k) % 7 == 0)
			{
				ans++;
			}
		}

		cout << ans << endl;
	}
}
