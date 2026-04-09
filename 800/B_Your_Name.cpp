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
	string s, t;
	cin >> s >> t;
	vector<int> freq1(26, 0);
	vector<int> freq2(26, 0);
	for(int i = 0; i < n; i++)
	{
		freq1[s[i] - 'a']++;
		freq2[t[i] - 'a']++;
	}
	bool possible = true;
	for(int i = 0; i < 26; i++)
	{
		if(freq1[i] != freq2[i])
		{
			possible = false;
			break;
		}
	}
	if(possible) yes;
	else no;

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