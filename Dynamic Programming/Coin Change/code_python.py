def coin_change(amount, denominations, denom_count, memory):
    if amount==0:
        return 1
    if amount<1 or denom_count==0:
        return 0
    if memory[amount][denom_count] is None:
        first = coin_change(amount-denominations[0], denominations, denom_count, memory)
        second = coin_change(amount, denominations[1:], denom_count-1, memory)
        memory[amount][denom_count] = first +second
    return memory[amount][denom_count]

amount =  int(input())
memory =[]
denoms = [int(x.strip()) for x in input().strip().split(",") ]
denoms_count=len(denoms)
for i in range(amount+1):
    memory.append([])
    for k in range(denoms_count+1):
        memory[i].append(None)
print(coin_change(amount,denoms,denoms_count,memory))
