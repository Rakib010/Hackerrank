#include<bits/stdc++.h>
using namespace std;

int slove(int a,int b,int c,int d)
{
    int bro = max ({a,b,c,d});

    return bro;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = slove(a,b,c,d);
    cout<<ans;
    return 0;
}
