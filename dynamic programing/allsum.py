# -*- coding: utf-8 -*-
"""
Created on Fri Aug 27 20:52:51 2021

@author: APARNA
"""

def allsum(amount , arr,memo = {}):
    if amount in memo:
        return memo[amount]
    if amount == 0:
        return []
    if amount<0:
        return None
    paths = []
    newpath = None
    for i in arr:
        diff  =  amount - i
        res = bestsum(diff,arr,memo)
        if res!=None:
            newpath = res + [i]
            # print(amount,newpath)
    paths.append(newpath)
        # print(paths)
        #     if sorted(newpath) not in paths:
        #         paths.append(sorted(newpath))
    memo[amount] = newpath
    
    return newpath 

def combinationSum(candidates,target):
        print(target)
        if target == 0:
            return []
        if target<0:
            return None
        combs = []
        for i in candidates:
            diff = target - i
            res = bestsum(diff,candidates)
            if res!= None:
                newpath = res + [i]
                print(newpath)
                if sorted(newpath) not in combs:
                    combs.append(sorted(newpath))
        #         paths.append(sorted(newpath))
        return combs
print(combinationSum([1],3))    







