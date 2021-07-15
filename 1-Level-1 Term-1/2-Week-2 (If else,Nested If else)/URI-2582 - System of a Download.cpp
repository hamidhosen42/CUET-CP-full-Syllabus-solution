#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin>>a>>b;

        int x=a+b;

        if(x==0){
            cout<<"PROXYCITY"<<endl;
        }else if(x==1){
            cout<<"P.Y.N.G."<<endl;
        }else if(x==2){
            cout<<"DNSUEY!"<<endl;
        }else if(x==3){
            cout<<"SERVERS"<<endl;
        }else if(x==4){
            cout<<"HOST!"<<endl;
        }else if(x==5){
            cout<<"CRIPTONIZE"<<endl;
        }else if(x==6){
            cout<<"OFFLINE DAY"<<endl;
        }else if(x==7){
            cout<<"SALT"<<endl;
        }else if(x==8){
            cout<<"ANSWER!"<<endl;
        }else if(x==9){
            cout<<"RAR?"<<endl;
        }else{
            cout<<"WIFI ANTENNAS"<<endl;
        }
    }

    return 0;
}
