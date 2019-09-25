//sum of all divisors
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    cout<<sum;
    return 0;

}
