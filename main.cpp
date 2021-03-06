#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree< long long, null_type, less<long long>, rb_tree_tag,tree_order_statistics_node_update > increasing_set;
typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag,tree_order_statistics_node_update > increasing_multiset;
typedef tree< long long, null_type, greater<long long>, rb_tree_tag,tree_order_statistics_node_update > decreasing_set;
typedef tree< long long, null_type, greater_equal<long long>, rb_tree_tag,tree_order_statistics_node_update > decreasing_multiset;

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

const int mx=1e5+123;
long long sum0[mx],sum1[mx];

int main()
{
    optimize();

    int q;
    cin>>q;

    for(int i=1;i<=q;i++){
        string s;
        int k,n;

        cin>>s>>k;
        n=s.size();

        for(int i=0;i<n;i++){
            sum0[i+1]=(s[i]=='0')+sum0[i];
            sum1[i+1]=(s[i]=='1')+sum1[i];
        }

        increasing_multiset ps;
        map<int,int>c;

        ps.insert(0);
        c[0]++;

        long long ans=0;
        for(int i=1;i<=n;i++){
            long long d1=sum0[i]-(k*sum1[i]);

            ans+=ps.order_of_key(d1)+c[d1];
            ps.insert(d1);

            c[d1]++;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
