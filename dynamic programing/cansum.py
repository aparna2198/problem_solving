# -*- coding: utf-8 -*-
"""
Created on Mon Jul  5 01:43:45 2021

@author: APARNA
"""

from time import perf_counter

def cansum (a,b):
    
    for i in b:
        if a-i in b or a in b:
            return True
        else:
            continue
    return False
t1 = perf_counter()
print(cansum (6,[3,2, 14]))
t2 = perf_counter()
print(t2-t1)


            