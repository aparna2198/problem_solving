# -*- coding: utf-8 -*-
"""
Created on Fri Aug 27 16:00:09 2021

@author: APARNA
"""
def allsums(candidates,target):
    result = []
    
    def dfs(tmplist,candidates,target):
        for i,c in enumerate(candidates):
            d = target-c
            if d==0:
                result.append(tmplist+[c])
                break
            elif d>0:
                dfs(tmplist+[c],candidates[i:],d)
            else:
                break
    dfs([],sorted(candidates),target)
    return result


print(allsums([1,2,7],5))



















def bestsum (amount,candidates):
    result = []
    candidates.sort()
    
    def dfs(remain,stack):
        if remain == 0:
            result.append(stack)
            return
        for item in candidates:
            if item>remain : break
            print("***",stack,item)
            if stack and item < stack[-1]:
                # print("-->",stack,item,stack[-1])
                continue
            else:
                dfs(remain-item,stack+[item])
    dfs(amount,[])
    return result

print(bestsum(7,[1,2,7]))




def bestsum(amount , arr,memo = {}):
    if amount in memo:
        return memo[amount]
    if amount == 0:
        return []
    if amount<0:
        return None
    
    bestpath = None
    for i in arr:
        diff  =  amount - i
        print(diff,i)
        res = bestsum(diff,arr)
        print("-->",res)
        if res!=None:
            newpath = res + [i]
            print("***",newpath)
            # print(newpath)
            # if (bestpath == None or len(bestpath)>len(newpath)):
            bestpath = newpath
    
    memo[amount] = bestpath
    return bestpath

def coinChange(coins, amount):
    MAX = float('inf')
    dp = [0] + [MAX] * amount
    print("dp",dp)
    for i in range(1, amount + 1):
        c = [dp[i - c] if i - c >= 0 else MAX for c in coins]
        print(c)
        dp[i] = min(c) + 1

    return [dp[amount], -1][dp[amount] == MAX]
def coinChange(coins, amount) -> int:
    dp = [0]+[float('inf')] * amount
    
    for i in range(1,amount+1):
        res =  [dp[i-c] if i-c<0 else float('inf') for c in coins]
        
        dp[i] = min(res)+1
    
    return -1 if dp[amount]== float('inf') else dp[amount]  

t1 = time.perf_counter()    
print(bestsum(8,[1,2,7]))
print(coinChange([1,2,7],5))
t2 = time.perf_counter()
print(t2 - t1)        