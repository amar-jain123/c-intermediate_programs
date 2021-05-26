#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n,sum=0;
   cin>>n;
   int original=n;
   while(n>0)
   {
       int lastdigit = n%10;
       sum += pow(lastdigit,3);
       n=n/10;

   } 
   cout<<sum<<endl;
   if(sum==original){
       cout<<"it is an armstrong no";
   }
   else{
       cout<<" it is not";
   }
   return 0;

}