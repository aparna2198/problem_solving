# -*- coding: utf-8 -*-
"""
Created on Mon Aug 30 17:47:08 2021

@author: APARNA
"""

import time

def coinChange(coins, amount):
        dp = [amount+1]*(amount+1)
        
        dp[0] = 0 
        
        for i in range(1,amount+1):
            for j in range(len(coins)):
                if coins[j]<=i:
                    dp[i] = min(dp[i],1+dp[i - coins[j]])
            return -1 if dp[amount] == amount+1 else dp[amount]
    
t1 = time.perf_counter()
print(coinChange([2,3,5],300))
t2 = time.perf_counter()
print(t2 - t1)

for i in range(1,amount+1):
    print(i)
