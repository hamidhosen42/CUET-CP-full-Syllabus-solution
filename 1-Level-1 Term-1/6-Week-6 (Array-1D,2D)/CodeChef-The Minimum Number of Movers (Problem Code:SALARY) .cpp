//https://www.codechef.com/problems/SALARY
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimeze() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long  ll;

int main() {
    optimeze();

    int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;

        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        int sum=0;
        for(int i=0;i<n;i++){
            sum+= abs(v[0]-v[i]);
        }

        cout<<sum<<endl;

    }
    return 0;
}
