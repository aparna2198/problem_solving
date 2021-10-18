# -*- coding: utf-8 -*-
"""
Created on Mon Oct 18 21:18:57 2021

@author: APARNA
"""
requests = [[210316,210319],[210318,210324],[210401,210406],[210406,210408],[210410,210410]]
def fun(requests):
    try:
        for index, i in enumerate(requests):
            if requests[index+1][0] in range(requests[index][0],requests[index][1]+1):
                ds = requests[index][0]
                de = requests[index+1][1]
                requests[index] = [ds,de]
                del requests [index+1]
            else:
                requests[index] = [requests[index][0],requests[index][1]]
    except:
        pass
    print(requests)