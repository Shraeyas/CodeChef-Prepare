#include <iostream>
#include <vector>
#include <tr1/unordered_map>

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

    int l = n - 1, ch = 0;

    for(int i = 0 ; i < n/2 ; i++)
    {
      if(v[i] != v[l--])
      {
        cout << "no" << endl;
        ch = 1;
        break;
      }
    }

    if(ch)
    {
      continue;
    }

    tr1 :: unordered_map <int, int> h;

    for(int i = 0 ; i <= n/2 ; i++)
    {
      h[v[i]]++;
    }

    for(int i = 1 ; i <= 7 ; i++)
    {
      if(h[i] == 0)
      {
        cout << "no" << endl;
        ch = 1;
        break;
      }
    }

    if(ch)
    {
      continue;
    }

    cout << "yes" << endl;
  }
}
