def max_profit(share_prices,size,transactions,bought,memory):
    if size==0:
        return 0
    if memory[size][transactions][bought] is not None:
        return memory[size][transactions][bought]
    result_one = max_profit(share_prices[1:],size-1,transactions,bought,memory)
    result_two=0
    if bought:
        result_two = max_profit(share_prices[1:],size-1,transactions-1,False,memory) + share_prices[0]
    else:
        if(transactions>0):
            result_two = max_profit(share_prices[1:],size-1,transactions,True,memory) - share_prices[0]
        else:
            result_two = 0
    result= max(result_one,result_two)
    memory[size][transactions][bought]= result
    return result
arr=[int(x.strip()) for x in input().strip().split(",")]
memory=[]
for i in range(len(arr)+1):
    memory.append([])
    for j in range(4):
        memory[i].append({True:None,False:None})
        
print(max_profit(arr,len(arr),3,False,memory))
