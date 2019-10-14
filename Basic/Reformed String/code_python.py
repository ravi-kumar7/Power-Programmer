import re

def modify_sentence(array):
    for i in range(len(array)):
        word=array[i]
        length=len(word)
        if (i+1)%2!=0:
            front=0
            end=length-1
            new_word=[None for i in range(length)]
            for j in range(len(word)):
                if (j+1)%2==0:
                    new_word[front]=word[j]
                    front+=1
                else:
                    new_word[end]=word[j]
                    end-=1
            array[i]="".join(new_word)
        else:
            array[i]=re.sub(r'[AEIOU]',"X",array[i])
            array[i]=re.sub(r'[aeiou]',"x",array[i])        
    return " ".join(array)

input_string = input().split(" ")   
print(modify_sentence(input_string))
