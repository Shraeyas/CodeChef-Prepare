#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool check(vector <int> v)
{
	for(int i = 0 ; i < v.size() - 1 ; i++)
	{
		if(v[i] != v[i + 1])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	//freopen("in.in", "r", stdin);

	int t;
	cin >> t;

	while(t--)
	{
		int n, min_x = 999999;
		cin >> n;

		vector <int> v;

		for(int i = 0 ; i < n ; i++)
		{
			int x;
			cin >> x;
			v.push_back(x);

			min_x = min(x, min_x);

		}

		int ans = 0;
		for(int i = 0 ; i < n ; i++)
		{
			ans += v[i] - min_x;
		}

		cout << ans << endl;

		/*
		int moves = 0;
		while(1)
		{
			int largest_num = -1, largest_ind;
			for(int i = 0 ; i < v.size() ; i++)
			{
				if(largest_num < v[i])
				{
					largest_num = v[i];
					largest_ind = i;
				}
			}

			if(check(v))
			{
				cout << moves << endl;
				break;
			}

			for(int i = 0 ; i < n ; i++)
			{
				if(i == largest_ind)
				{
					continue;
				}

				v[i]++;
				//cout << v[i] << " ";
			}
			//cout << endl;
			moves++;
		}
		*/
	}
}
