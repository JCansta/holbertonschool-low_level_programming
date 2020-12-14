#!/usr/bin/python3

if __name__ == "__main__":
    rev = 0
    maxi = 0
    for i in range(900, 1000):
        for x in range(900, 1000):
            num = i * x
            temp = num
            while(num>0):
                dig=num%10
                rev=rev*10+dig
                num=num//10
            if (temp == rev):
                maxi = num
    print("{:d}".format(maxi))
