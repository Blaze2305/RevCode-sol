import sys

def char_count(string):
    if(string.isalpha() and not string.isdigit()):
        counter={}
        ans=''
        for i in string:
            if(i not in counter):
                counter[i]=1
            else:
                counter[i]+=1
        for char in counter:
            ans+=str(counter[char])
        return(int(ans))
    else:
        return("ENTER A PROPER STRING")

if(__name__=='__main__'):
    print(char_count(sys.argv[1]))