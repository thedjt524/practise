输入格式
一行内输入一串整数，以 0 结束，以空格间隔。

输出格式
一行内倒着输出这一串整数，以空格间隔。


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
