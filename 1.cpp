#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double distance()
{
    double a,b,c,d,e,f;
    cin>>a>>b;
    cin>>c>>d;
    cin>>e>>f;

    double length_1=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    double length_2=sqrt((a-e)*(a-e)+(b-f)*(b-f));
    double length_3=sqrt((c-e)*(c-e)+(d-f)*(d-f));

    return length_1+length_2+length_3;

    

}


int main()
{
  
    double result=distance();
    cout<<fixed<<setprecision(2)<<result<<endl;

    return 0;
}