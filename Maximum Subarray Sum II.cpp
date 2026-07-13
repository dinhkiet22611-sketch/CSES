#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll N = 1e6;
ll n,a[N+5],prf[N+5],ans = -1e18;
ll l,r;
int main()
{
    cin >> n >> l >> r;
    for(ll i = 1;i <= n;i++) 
    {
        cin >> a[i];
        prf[i] = prf[i-1] + a[i];
    }
    deque<ll>dq;
    for(ll i = l;i <= n;i++)
    {
        while(!dq.empty() && i - dq.back() > r) dq.pop_back();
        while(!dq.empty() && prf[dq.front()] > prf[i-l]) dq.pop_front();
        dq.push_front(i-l);
        ans = max(ans,prf[i] - prf[dq.back()]);
    }
    cout << ans;
}
