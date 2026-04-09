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
#define mem(a, b) memset(a, b, sizeof(a))
#define check cout << "-__________________-" << endl

void solve()
{
	int n;
	cin >> n;
	vector<ll> v(n);
	bool odd = false, even = false;
	for(auto &u : v)
	{
		cin >> u;
		if(u % 2 == 0) even = true;
		else odd = true;
	}
	if(even && odd)
	{
		sort(v.begin(), v.end());
		for(auto u : v) cout << u << " ";
		nl;
	}
	else
	{
		for(auto u : v) cout << u << " ";
		nl;
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