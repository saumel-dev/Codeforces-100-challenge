#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0);

typedef long long ll;
typedef double dl;

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl
#define mem(a,b) memset(a, b, sizeof(a))
#define check cout << "-__________________-" << endl


void solve()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &u : v) cin >> u;
	int mx = max_element(v.begin(), v.end()) - v.begin();

	if(mx + 1 == n)
	{
		for(int i = n - 2; i >= 0; i--)
		{
			if(v[i + 1] >= v[i]) continue;
			else
			{
				no;
				return;
			}
		}
		yes; return;
	}
	else if(mx + 1 == 1)
	{
		for(int i = 0; i < n - 1; i++)
		{
			if(v[i] >= v[i + 1	]) continue;
			else
			{
				no; return;
			}
		}
		yes;
	}
	else
	{
		for(int i = mx + 1; i < n - 1; i++)
		{
			if(v[i] >= v[i + 1]) continue;
			else
			{
				no; return;
			}
		}
		for(int i = mx - 1; i >= 1; i--)
		{
			if(v[i] >= v[i - 1]) continue;
			else 
			{
				no;
				return;
			}
		}
		yes;
	}
	
}
int main()
{
	optimize();

	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}