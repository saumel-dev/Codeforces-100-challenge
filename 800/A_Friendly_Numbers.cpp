#include <bits/stdc++.h>
using namespace std;
int d(int n)
{
    int num = 0;
    while(n > 0)
    {
        num += n % 10;
        n /= 10;
    }
    return num;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x;
        cin >> x;
        int ans = 0;
        for(int y = x; y <= x + 81; y++)
        {
            if(y - d(y) == x)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}