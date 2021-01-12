#!/bin/python3

import os
import sys

#
# Complete the handshake function below.
#
def handshake(n):
    return ((n - 1) * n) // 2

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = handshake(n)

        fptr.write(str(result) + '\n')

    fptr.close()
