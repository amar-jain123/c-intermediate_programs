#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"enter no to find "<<endl;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i]){
            cout<<"found at "<<i<<" place";
        }
    }
    return 0;
}