
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    int t;
    cin>>t;

    if(t%2!=0) {
        cout<<"Weird"<<endl;
    }else{
        if(t>=2 && t<=5){
            cout<<"Not Weird"<<endl;
        }else if( t>5 && t<=20){
            cout<<"Weird"<<endl;
        }else{
            cout<<"Not Weird"<<endl;
        }
    }
    return 0;
}
