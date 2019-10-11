def MissingNumber(arr):
    # Please add your code here
    curr_sum=0
    for i in arr:
        curr_sum+=i
    sum=0
    for i in range(len(arr)-1):
        sum+=i
    return curr_sum-sum

# Main
n=int(input())
arr=list(int(i) for i in input().strip().split(' '))
ans=MissingNumber(arr)
print(ans)
