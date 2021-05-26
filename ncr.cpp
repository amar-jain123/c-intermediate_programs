#include<iostream>
using namespace std;

int ncr(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;

}
int main()
{
    int n,r;
    cin>>n>>r;
    int ans = ncr(n)/(ncr(r)*ncr(n-r));
    cout<<ans<<endl;
    return 0;
}