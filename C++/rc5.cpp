#include<iostream>
using namespace std;
int main()
{
   int n,i,sum=0,rem;
   cin>>n;
   do
   {
       if(n==0)
       {
           n=sum;
           sum=0;
       }
       rem=n%10;
       sum+=rem;
       n/=10;
   }while(n>0||sum>9);
   cout<<sum;
   return 0;
}
