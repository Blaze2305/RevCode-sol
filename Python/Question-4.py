import sys


def divisor_sum(number):
    if(number.isdigit()):
        sum_=0
        for i in range(1,int(number)+1):
            if(int(number)%i==0):
                sum_+=i
        return(sum_)
    else:
        return("ENTER A PROPER NUMBER")


if(__name__=='__main__'):
    print(divisor_sum(sys.argv[1]))