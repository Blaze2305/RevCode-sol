//shifting Cipher
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int x;
    char str[20];
    cin>>str;
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(i%2==0)
        {
            x=(int)(str[i])-97;
            x+=(i+1);
            x%=26;
            x+=97;
            str[i]=(char)x;
        }
        else
        {
            x=(int)(str[i])-97;
            x%=26;
            x-=(i+1);
            if(x<0)
                x+=26;
            x+=97;
            str[i]=(char)x;
        }
    }
    cout<<str;
    return 0;
}
