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
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(amar[i]>amar[i+1])
            {
                int temp=amar[i+1];
                amar[i+1]=amar[i];
                amar[i]=temp;
            }
        }
    }
    counter++;
    
    for(int i=0;i<n;i++){
        cout<<amar[i];
    }
}