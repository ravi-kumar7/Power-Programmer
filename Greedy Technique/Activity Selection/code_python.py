## Read input as specified in the question.
## Print output as specified in the question.

n=int(input())
arr=[]
for i in range(n):
    arr.append([ int(_.strip()) for _ in input().strip().split(" ") ])
arr=sorted(arr,key=lambda x:x[1])
prev=arr[0]
count=1
for i in range(1,n):
    if(prev[1]<=arr[i][0]):
        count+=1
        prev=arr[i]
print(count)
    