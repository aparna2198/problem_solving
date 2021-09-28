# -*- coding: utf-8 -*-
"""
Created on Mon Jun 28 08:22:31 2021

@author: APARNA
"""
'''fibonacci'''
from time import perf_counter
def fib(num):
    if num == 0 or num == 1:
        return 1
    else:
        return fib(num-1) + fib(num - 2)
num = 40
t1 = perf_counter()
fib(num)
t2 = perf_counter()
print("timetake",t2-t1)


#memozation 
fibs = {}
def fib(num,fibs = {}):
    if num in fibs:
        return fibs[num]
    if num<=2:
        return 1
    else:
        fibs[num] = fib(num-1,fibs) + fib(num - 2,fibs)
        return fibs[num]
num = 50
t1 = perf_counter()
print(fib(num))
t2 = perf_counter()
print("timetake",t2-t1)   

def fibgen(num):
    print(num)
    a,b = 0,1
    while a<num:
        yield a
        a,b = b, a+b
        
t1 = perf_counter()
fibs = fibgen(num)
t2 = perf_counter()
print("timetake",t2-t1) 
print(list(fibs))
for i in range(51):
    print(i,next(fibos))
    
fibos = (x for x in fibs)

for i in range(1,10,1):
    print(i)

        

        
    


