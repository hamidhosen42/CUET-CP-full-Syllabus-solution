#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    char c1,c2;
    cin>>c1>>c2;

    if((c1=='A'&& c2=='B')||(c1=='B'&& c2=='A')){
        cout<<"Print the correct choice."<<endl;
    }else if((c1=='3' && c2=='1')||((c1=='1' && c2=='3'))){
        cout<<2<<endl;
    }else if((c1=='1' && c2=='2')||((c1=='2' && c2=='1'))){
        cout<<3<<endl;
    }else if((c1=='2' && c2=='3')||(c1=='3' && c2=='2')){
        cout<<1<<endl;
    }
    return 0;
}
