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
    int l, a, b; cin >> l >> a >> b;
    if(a == 0 || b == 0)
    {
        cout << (a + b) % l << endl;
        return; 
    }
    int ans = (a + b) % l, temp = a + b, i = 2;
    while(temp <= 5000)
    {
        ans = max(ans, (a + (b * i) % l));
        i++;
        temp = a + (b * i);
    }
    cout << ans << endl;
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