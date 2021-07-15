#include <iostream>
using namespace std;
int main()
{
    int N,x;
    cin>>N;
    cout<<N/3600<<":";
    x=N%3600;
    cout<<x/60<<":";
    x=x%60;
    cout<<x<<endl;
    return 0;
}
