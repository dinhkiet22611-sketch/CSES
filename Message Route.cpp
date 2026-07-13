#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll N = 1e6;
ll n,used[N+5],m;
ll vet[N+5];
vector<ll>p[N+5];
bool ok = 1;
void dfs(ll u)
{
    used[u] = 1;
    for(ll v : p[u])
    {
        if(!used[v])
        {
            vet[v] = u;
            used[v] = 1;
            dfs(v);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(ll i = 1;i <= m;i++)
    {
        ll a,b;
        cin >> a >> b;
        p[a].push_back(b);
        p[b].push_back(a);
    }
    dfs(1);
    vector<ll>ans;
    if(used[n] == 1)
    {
        for(ll t = n;t != 1;t = vet[t])
        {
            ans.push_back(t);
        }
        ans.push_back(1);
        cout << ans.size() << '\n';
        for(ll i = ans.size() - 1;i >= 0;i--) cout << ans[i] << ' ';
    }
    else cout << "IMPOSSIBLE";
}