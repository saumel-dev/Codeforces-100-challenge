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
	int n, k; cin >> n >> k;
	string s;
	s += "7";
	string t;
	cin >> t;
	s += t;
	// cout << s << endl;
	k--; int pos = -1, cnt = 0;
	for(int i = 1; i < s.size(); i++)
	{
		if(i == 1 && s[i] == '1')
		{
			pos = i; cnt++; continue;
		}
		if(s[i] == '1')
		{
			if(pos == -1)
			{
				cnt++; pos = i; continue;
			}
			else
			{
				if(pos >= i - k)
				{
					pos = i;
				}
				else
				{
					cnt++;
					pos = i;
				}
			}
		}
	}
	cout << cnt << endl;
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