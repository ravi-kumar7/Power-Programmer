#for input use:
#inputString = input()
from collections import defaultdict

inp=[ int(i) for i in input().strip().split(" ")]
m=inp[0]
n=inp[1]
arr=[]

def func(row,col,arr):
    for i in range(row):
        arr.append([j for j in input().strip().split(" ")])
    for i in range(row):
        dic=defaultdict(int)
        for j in range(col):
            val = arr[i][j]
            dic[val]+=1
            if dic[val]==4:
                return 'true'
    for i in range(col):
        dic=defaultdict(int)
        for j in range(row):
            val = arr[j][i]
            dic[val]+=1
            if dic[val]==4:
                return 'true'
    for line in range(1,row+col):
        start_row= max(0,line-col)
        start_col= max(0,line-row)
        count=min(line,(row-start_row),row)
        c_col=max(0,col-line)
        dic_diagonal1=defaultdict(int)
        dic_diagonal2=defaultdict(int)
        if(count>=4):
            for j in range(count):
                val=arr[min(row,line)-j-1][start_col+j]
                dic_diagonal1[val]+=1
                if dic_diagonal1[val]==4:
                    return 'true'
                val=arr[start_row][c_col]
                dic_diagonal2[val]+=1
                if dic_diagonal2[val]==4:
                    return 'true'
                start_row+=1
                c_col+=1
    return 'false'
print(func(m,n,arr))