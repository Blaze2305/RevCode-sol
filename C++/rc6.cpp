//Charecter count
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int inarray(char c,char* str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]== c)
            return 1;
    }
    return 0;
}
void insertchar(char c,char *str)
{
    int l=strlen(str);
    str[l]=c;
    str[l+1]='\0';
}
int findcount(char c,char* str)
{
    int counter=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
            counter++;
    }
    return counter;
}
int main()
{
    char* s;
    cin>>s;
    char* charecters=(char*)malloc(strlen(s));
    for(int i=0;s[i]!='\0';i++)
    {

        if(!inarray(s[i],charecters))
        {

            insertchar(s[i],charecters);
            cout<<findcount(s[i],s);

        }
    }
    return 0;


}




