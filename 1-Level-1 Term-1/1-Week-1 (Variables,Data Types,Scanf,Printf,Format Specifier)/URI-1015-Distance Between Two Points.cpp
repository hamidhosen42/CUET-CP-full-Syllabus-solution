#include <bits/stdc++.h>
using namespace std;
int main()
{
   double x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   double result=pow((x2-x1),2)+pow((y2-y1),2);
   cout<<fixed;
   cout<<setprecision(4)<<sqrt(result)<<endl;
   return 0;
}
