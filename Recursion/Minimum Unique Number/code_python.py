from collections import defaultdict
def count_unique(k,array_elements):
    dictionary = defaultdict(int)
    for i in array_elements:
        dictionary[i]+=1
    sorted_list = [[key,dictionary[key]] for key in sorted(dictionary ,key=dictionary.get,reverse=False)]
    for i in range(k):
        sorted_list[0][1]-=1
        if sorted_list[0][1]==0:
            sorted_list.pop(0)
    return len(sorted_list)
k_removals = int(input().split(",")[0])
array_elements = list(map(int,input().strip(" ").split(",")))
print (count_unique(k_removals,array_elements))