#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[1000],n;

    for(int i=1;;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            n=i;
            break;
        }
    }

    for(int i=n-1;i>=1;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

    
    
}