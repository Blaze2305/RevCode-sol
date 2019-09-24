import sys

def concat(num):
    if(num.isdigit()):
        ans=''
        number_str=str(num)
        for digit in range(0,len(number_str)):
            ans+=str(int(number_str[digit]) ** (digit+1))
        return(int(ans))
    else:
        print("ENTER A PROPER NUMBER")

if(__name__=='__main__'):
    print(concat(sys.argv[1]))