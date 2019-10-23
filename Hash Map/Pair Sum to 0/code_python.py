# from itertools import combinations    
# def pairSum0(lst,key):
#     def valid(val):
#         return sum(val)==key
#     for i in list(filter(valid,list(combinations(lst,2)))):
#         num=i[0]
#         num1=i[1]
#         print(num,num1) if num<num1 else print(num1,num)

from collections import defaultdict

def pairSum0(arr):
    d=defaultdict(int)
    for i in arr:
        d[i]+=1
        if -i in d.keys():
            min_num = min(i,-i)
            max_num= max(i,-i)
            for j in range(d[-i]):
                print(min_num,max_num)

#Implement Your Code Here

n=int(input())
l=list(int(i) for i in input().strip().split(' '))
pairSum0(l)