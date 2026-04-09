#include <bits/stdc++.h>
using namespace std;

void solve()
{
  long long n, w;
  cin >> n >> w;
  cout << n - (n / w) << endl;
}

int main() 
{
    int t = 1;
    cin >> t;
    while(t--)
    {
      solve();
    }
}