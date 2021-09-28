# -*- coding: utf-8 -*-
"""
Created on Fri Aug 27 12:04:28 2021

@author: APARNA
"""

arr  = ['dog','doracecar','docar']
shortest_str = min(arr,key = len )


for i in range(len(shortest_str)):
    if all ([s.startswith(shortest_str[:i+1])for s in arr]):
        l = shortest_str[:i+1]
    else:
        break
     
    
    
    
        
         
        