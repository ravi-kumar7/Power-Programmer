def isPossible(arr,row,col,mem):
    for i in mem:
        if col == i[1] or abs(row-i[0])==abs(col-i[1]):
            return False;
    return True

def nQueen(arr,n,p,row,col,mem):
    if n==p:
        for i in arr:
            print(i)
        return
    if col==n:
        return
    if isPossible(arr,row,col,mem):
        arr[row][col]=1
        p+=1
        mem.append([row,col])
        nQueen(arr,n,p,row+1,0,mem)
        p-=1
        mem.pop()
        arr[row][col]=0
    return nQueen(arr,n,p,row,col+1,mem)
    
        
n=int(input())
arr=[]
mem=[]
for i in range(n):
    arr.append([0 for x in range(n)])
nQueen(arr,n,0,0,0,mem)
    

