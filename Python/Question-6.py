import sys

def XOR(a,b,c):
    if(a.isdigit() and b.isdigit() and c.isdigit()):
        return(int(a)^int(b)^int(c))
    else:
        return("ENTER PROPER INTEGERS")

if(__name__=='__main__'):
    if(len(sys.argv)==4):
        print(XOR(sys.argv[1],sys.argv[2],sys.argv[3]))
    else:
        print("ENTER THREE INTEGERS")