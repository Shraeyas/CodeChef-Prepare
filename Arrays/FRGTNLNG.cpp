#include <iostream>
#include <tr1/unordered_map>
#include <vector>

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

		vector <string> v;
		tr1 :: unordered_map <string, bool> m;

		for(int i = 0 ; i < n ; i++)
		{
			string s;
			cin >> s;

			v.push_back(s);
		}

		int x, ch = 0;

		for(int i = 0 ; i < k ; i++)
		{
			ch = 0;
			cin >> x;

			for(int j = 0 ; j < x ; j++)
			{
				string s;
				cin >> s;

				m[s] = 1;
			}
		}

		for(int i = 0 ; i < v.size() ; i++)
		{
			if(m[v[i]])
			{
				cout << "YES ";
			}

			else
			{
				cout << "NO ";
			}
		}

		cout << endl;
	}
}
