# -*- coding: utf-8 -*-
"""
Created on Fri Jul  2 13:42:05 2021

@author: APARNA
"""

from time import perf_counter
'''grid traveller'''
def gridtraveller(r,c,grids = {}):
    if (r,c) in grids:
        return grids[(r,c)]
    if r==1 and c==1:
        return 1
    if r==0 or c==0:
        return 0
    grids[(r,c)] = gridtraveller(r-1,c,grids) + gridtraveller(r,c-1,grids)
    return grids[(r,c)]

print(gridtraveller(18,18))


