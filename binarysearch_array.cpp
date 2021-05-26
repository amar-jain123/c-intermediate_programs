#include<iostream>
using namespace std;

int binarysearch(int amar[],int n,int key)
{
    int start=0;
    int end=n;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(amar[mid]==key){
            return mid;
        }
        else if(amar[mid]>key){
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}


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
        cout<<amar[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(amar,n,key);
}