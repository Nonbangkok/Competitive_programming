#include <bits/stdc++.h>
#define coutf(n, m) cout << fixed << setprecision(n) << m
#define forr(i, a, n) for (int i = a; i < n; i++)
#define forl(i, a, n) for (int i = a; i > n; i--)
#define macos ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endll "\n"
#define sp " "
typedef long long ll;
using namespace std;
int a[]={1,2,4,5,6};
int main(){macos;

    int ans=4,l=0,r=4,m;

    while(l<r){
        m=(l+r)/2;

        if(a[m]<=ans)l=m+1;
        else r=m;
    }

    cout << l << sp << a[l];

    return 0;
}