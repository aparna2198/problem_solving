# -*- coding: utf-8 -*-
"""
Created on Tue Oct 12 18:08:33 2021

@author: APARNA
"""

# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(A):
    a = len(A)
    c = []
    maxval = -1
    for i in A:
        sum=0
        while i!=0:
            rem=i%10
            i=i//10
            sum=sum+rem
        c.append(sum)
    for i in range(0,a):
        for j in range(i+1,a):
            if c[i]==c[j]:
                print(A[i]+A[j])
                
                maxval=max(maxval,A[i]+A[j])
    return maxval