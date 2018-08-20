#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
    ll d,m,a,b,x;
    cin>>d>>a>>m>>b>>x;
    ll ans=0;
    x=x-d;
    if(x<1){
        cout<<0<<"\n";
        continue;
    }
    ll tim= x/(a*m+b);
    ans+=(m+1)*tim;
    //cout<<ans<<"\n";
    x-=(tim*(a*m+b));
    if(x<= (a*m))
    {
        ans+=ceil(x/a);
    }
    else
    {
        ans+=(m+1);
    }
    cout<<ans<<"\n";
    }
    return 0;
}
