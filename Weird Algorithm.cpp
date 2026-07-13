#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    if(n == 1) {cout << n;return 0;}
    else cout << n << ' ';
    while(1)
    {
        if(n%2 == 0) 
        {
            n = n/2;
            if(n == 1) break;
            else cout << n<< ' ';
        }
        else
        {
            n = n*3 + 1;
            if(n==1) break;
            else cout << n << ' ';
        }
        
    }
    cout << 1;
}