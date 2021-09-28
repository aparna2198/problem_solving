# -*- coding: utf-8 -*-
"""
Created on Mon Jul  5 03:48:15 2021

@author: APARNA
"""
nums = [2,3,5]
target = 8
def howsum(target,nums,memo = {}):
    if target in memo:
        return memo[target]
    if target == 0:
        return []
    if target < 0:
        return None
    for i in nums:
        diff = target - i
        res = howsum(diff,nums,memo)
        if res!=None:
            memo[target] = res + [i]
            return memo[target]
    memo[target] =  None
    return memo[target]
        
print(howsum(8,[2,3,5]))         