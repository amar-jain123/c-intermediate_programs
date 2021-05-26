#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;

}

int main(){
    int row,col;
    cin>>row>>col;
     for(int i=1;i<=row;i++)
     {
         for(int j=1;j<=i;j++)
         {
             int ans = fact(i)/(fact(j)*fact(i-j));
             cout<<ans;
         }
         cout<<endl;
     }
}