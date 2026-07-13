#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll n,a[1000005];
int main()
{
    cin >> n;
    for(ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll ln = a[1],ans = 0;
    for(ll i = 2; i <= n;i++)
    {
        if(a[i] <= ln) ans+= ln-a[i];
        else ln = a[i];
    }
    cout << ans;
}
