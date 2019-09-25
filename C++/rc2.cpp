//concat digit raised to its position
#include<iostream>
#include<sstream>
#include<string>
#include<math.h>
using namespace std;
int main()
{

    int n,i,x;
    cin>>n;
    ostringstream str;
    str<<n;
    string str1=str.str();
    for(i=0;str1[i]!='\0';i++)
    {
        x=(int)(str1[i])-48;
        cout<<pow(x,i+1);
    }

    return 0;
}
