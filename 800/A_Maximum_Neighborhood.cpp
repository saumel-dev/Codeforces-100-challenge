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
	int n; cin >> n;
    int v[n + 1][n + 1];
    int z = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            v[i][j] = z;
            z++;
        }
    }
    if(n == 1)
    {
        cout << 1 << endl; return;
    }
    if(n == 2)
    {
        cout << 9 << endl; return;
    }
    int a = n, b = n - 1, ans1 = 0, ans2 = 0;
    ans1 = v[a][b] + v[a][b-1] + v[a][b+1] + v[a - 1][b];
    a = n - 1;
    ans2 = v[a][b] + v[a][b-1] + v[a][b+1] + v[a + 1][b] + v[a - 1][b];
    // cout << v[a][b - 1] << endl;
    cout << max(ans1, ans2) << endl;
    
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