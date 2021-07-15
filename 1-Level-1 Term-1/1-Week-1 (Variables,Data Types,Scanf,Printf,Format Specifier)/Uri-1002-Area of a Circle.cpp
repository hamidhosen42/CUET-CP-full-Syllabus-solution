#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double n=3.14159;
    double a;
    cin>>a;
    double A=n*(a*a);
    cout<<fixed;
    cout<<setprecision(4)<<"A="<<A<<endl;
    return 0;
}
