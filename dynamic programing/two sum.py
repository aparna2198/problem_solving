# -*- coding: utf-8 -*-
"""
Created on Mon Jul  5 02:20:00 2021

@author: APARNA
"""


def twoSum(nums,target):
    sums = {}
    for i in range(len(nums)):
        if target-nums[i] in sums:
            return [sums[target-nums[i]],i]
        else:
            sums[nums[i]] = i
 
    
twoSum([3,2,4],6)
