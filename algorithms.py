s = "Ab,c,de!$"

s_l = list(s)

n = s_l.copy()
flag = 0
index  = (len(s_l))
for i,c in enumerate(s_l):
    while not n[index].isalpha() and not n[index].isnumeric() and index>0:
        index = index - 1
    if index>0 and c.isalpha() or c.isnumeric():
        index = index - 1
        n[index] = c
        
        flag = 0
    else:
        flag = 1
    
    
        
    
print(n)
print(''.join(n))
        
    