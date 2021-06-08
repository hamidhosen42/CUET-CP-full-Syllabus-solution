//https://codeforces.com/problemset/problem/1213/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimeze() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long  ll;

int main()
{
    optimeze();

    int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;

        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        int c=0;
        int mn=INT_MAX;
        for(int i=n-1;i>=0;i--){
            if(v[i]>mn){
                c++;
            }
            mn= min(mn,v[i]);
        }
        cout<<c<<endl;
    }
    return 0;
}
