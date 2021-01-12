#!/bin/python3

import sys

def lowestTriangle(base, area):
    # Complete this function
    return 2 * area // base + bool((2 * area) % base)

base, area = input().strip().split(' ')
base, area = [int(base), int(area)]
height = lowestTriangle(base, area)
print(height)