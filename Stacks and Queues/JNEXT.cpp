#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  //freopen("in.in", "r", stdin);

  int t;
  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;

    vector <int> v(n);
    for(int i = 0 ; i < n ; i++)
    {
      cin >> v[i];
    }

    int ch = 0, i;
    for(i = n - 1 ; i > 0 ; i--)
    {
      if(v[i] > v[i - 1])
      {
        for(int j = i ; j < n ; j++)
        {
          if(j == n - 1 || (v[i - 1] < v[j] && v[i - 1] >= v[j + 1]))
          {
            v[i - 1] = v[i - 1] + v[j];
            v[j] = v[i - 1] - v[j];
            v[i - 1] = v[i - 1] - v[j];

            ch = 1;

            break;
          }
        }

        if(ch)
        {
          break;
        }
      }
    }

    if(!ch)
    {
      cout << "-1" << endl;
      continue;
    }

    sort(v.begin() + i, v.end());

    for(int i = 0 ; i < n ; i++)
    {
      cout << v[i];
    }
    cout << endl;
  }
}
