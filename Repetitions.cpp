#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a[100005];
map<ll,ll>b;
ll ans1 = -1e18;
int main()
{
    string s;
    cin >> s;
    char ans = s[0];
    ll dem = 1 ;
    for(ll i = 1; i< s.size(); i++)
    {
        if(s[i] == ans) 
        {
            dem++;
        }
        else
        {
            ans1 = max(dem,ans1);
            ans = s[i];
            dem = 1;
        }
    }
    ans1 = max(ans1,dem);
    cout << ans1;
}
