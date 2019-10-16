def find_min(array,swaps,min_num):
    val=int("".join(array))
    if min_num>val:
        min_num=val
    if swaps==0:
        return min_num
    length = len(array)
    for i in range(length-1):
        for j in range(i+1,length):
            array[i],array[j]=array[j],array[i]
            min_num=find_min(array, swaps-1, min_num);
            array[i],array[j]=array[j],array[i]
    return min_num

def least_possible(array_elements,max_swaps_allowed):
    return find_min(array_elements,max_swaps_allowed,float("inf"))

max_swaps_allowed = int(input()) 
size_of_array = input()
array_elements = input().split(",") 
print(least_possible(array_elements,max_swaps_allowed)) 