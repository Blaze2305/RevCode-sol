import sys

def index_shift(string):
    if(string.isalpha()):
        upper=string.upper()
        ans=''
        for i in range(0,len(upper)):
            replacement=ord(upper[i])+((-1)**i)*(i+1)
            if(replacement>ord("Z")):
                replacement=replacement%ord("Z")+ord("A")-1
            elif(replacement<ord("A")):
                replacement=ord("Z")-(ord("A")-replacement)+1
            ans+=chr(replacement);
        return(ans.lower())
    else:
        return("ENTER A PROPER STRING")

if(__name__=='__main__'):
    print(index_shift(sys.argv[1]))