import sys

def single_digit(n):
    if(n.isdigit()):
        num=str(n)
        while(len(num)>1):
            sum_=0
            for digit in num:
                sum_+=int(digit)
            num=str(sum_)
        return(int(num))
    else:
        return("ENTER A PROPER NUMBER")


if __name__=='__main__':
    print(single_digit(sys.argv[1]))