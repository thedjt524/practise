#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int score[1024][3];
    for(int i=1;i<=n;i++)
    {
        cin>>score[i][0]>>score[i][1]>>score[i][2];
    }
    int count=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(abs(score[i][0]-score[j][0])<=5&&abs(score[i][1]-score[j][1])<=5&&abs(score[i][2]-score[j][2])<=5&&
        abs(score[i][0]+score[i][1]+score[i][2]-score[j][1]-score[j][0]-score[j][2])<=10)
        count++;
        }
    }

    cout<<count<<endl;

    return 0;
}