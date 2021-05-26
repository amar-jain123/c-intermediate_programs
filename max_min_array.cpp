#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int amar[n];
    for(int i=0;i<n;i++)
    {
        cin>>amar[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<amar[i]<<" ";
    }
    int max,min;
    max=min=amar[0];
    for(int i=0;i<n;i++)
    {
        if(max<amar[i]){
            max=amar[i];
        }
        if(min>amar[i])
        {
            min=amar[i];
        }
    }
    cout<<endl;
    cout<<"max"<<max<<endl;
    cout<<"min"<<min<<endl;
    return 0;
}