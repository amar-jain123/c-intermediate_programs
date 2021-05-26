#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int sum=0;
    for(int i=0;i<=n-1;i++){
        sum=0;
        for(int j=i;j<=n-1;j++)
        {
            sum=sum + ar[j];
            cout<<sum<<" ";
        }

    }
}