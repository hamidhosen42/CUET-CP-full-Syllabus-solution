#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

#define  PI acos(-1)
int main()
{
    optimize();

    int i,test,r1,r2,h,p;
    double R,V;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        cin>>r1>>r2>>h>>p;
        R= r2 + (r1-r2)*(double(p)/h);
        V = 1/3.0 * PI * p *( R*R + R*r2 + r2*r2 );

        cout<<fixed<<setprecision(8)<<"Case "<<i<<": "<<V<<endl;
    }

    return 0;
}
