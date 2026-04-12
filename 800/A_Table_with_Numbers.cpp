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
    int n, h, l;
    cin >> n >> h >> l;
    vector<int> v(n);
    for(auto &u : v) cin >> u;
    if(h > l) swap(h, l);
    int cnt_h = 0, cnt_l = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] <= h) cnt_h++;
        if(v[i] <= l) cnt_l++;
    }
    cout << min(cnt_h, (int) floor(cnt_l / 2)) << endl;
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