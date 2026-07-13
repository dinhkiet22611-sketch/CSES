#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a[100005];
map<ll,ll>b;
int main()
{
    cin >> n;
    ll x;
    while(cin >> x)
    {
        b[x]++;
    }
    for(ll i = 1; i <= n; i++)
    {
        if(b[i] == 0) {cout << i ;break;}
    }
}
