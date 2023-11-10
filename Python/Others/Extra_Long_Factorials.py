import math
import os
import random
import re
import sys

def extraLongFactorials(n):
    ans=1
    while(n!=1):
        ans*=n
        n-=1
    print (ans)

if __name__ == '__main__':
    n = int(input())

    extraLongFactorials(n)
