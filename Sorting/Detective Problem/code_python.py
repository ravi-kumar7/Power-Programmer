## Read input as specified in the question.
## Print output as specified in the question.
## Read input as specified in the question.
## Print output as specified in the question.


sum=0

def find_sum(size,arr):
    merge_sort(arr)
    return sum

def merge_sort(arr):
    if len(arr)<=1:
        return arr;
    mid=len(arr)//2
    left=merge_sort(arr[:mid])
    right=merge_sort(arr[mid:])
    return merge(left,right)

def merge(left,right):
    global sum
    merged = []
    lleft=len(left)
    left_index = 0
    right_index = 0
    while left_index < len(left) and right_index < len(right):
        if left[left_index] >= right[right_index]:
            merged.append(right[right_index])
            right_index += 1   
        else:
            merged.append(left[left_index])
            sum+=(len(right)-right_index)*left[left_index]
            left_index += 1   
    merged += left[left_index:]   
    merged += right[right_index:]   
    return merged   
n=int(input())
for i in range(n):
    sum=0
    size=int(input())
    arr=[int(_) for _ in input().strip().split(" ")]
    print(find_sum(size,arr))
