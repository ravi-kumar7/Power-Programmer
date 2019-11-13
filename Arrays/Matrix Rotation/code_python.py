def rotateMatrix(mat,row,col,k):
    arr=[None for i in range(row*col)]
    matrix=[[0 for i in range(col)] for j in range(row)]
    s_row=0
    e_row=row-1
    s_col=0
    e_col=col-1
    index=0
    start_index=0
    end_index=0
    anti_clock=True
    while(s_row<=e_row and s_col<=e_col):
        for i in range(s_col,e_col+1):
            arr[index]=mat[s_row][i]
            index+=1
        s_row+=1
        for i in range(s_row,e_row+1):
            arr[index]=mat[i][e_col]
            index+=1
        e_col-=1
        if(s_row<=e_row):
            for i in range(e_col,s_col-1,-1):
                arr[index]=mat[e_row][i]
                index+=1
            e_row-=1
        if(s_col<=e_col):
            for i in range(e_row,s_row-1,-1):
                arr[index]=mat[i][s_col]
                index+=1
            s_col+=1
        end_index=index-1
        if((end_index+1)-start_index>=4):
            if(anti_clock):
                anti_clock=False
                for i in range(k):
                    temp = arr[start_index]
                    for i in range(end_index):
                        arr[i] = arr[i + 1]
                    arr[end_index]=temp
            else:
                anti_clock=True
                for i in range(k):
                    temp = arr[end_index]
                    for i in range(end_index,start_index,-1):
                        arr[i] = arr[i-1]
                    arr[start_index]=temp
        start_index=index
    s_row=0
    e_row=row-1
    s_col=0
    e_col=col-1
    index=0
    while(s_row<=e_row and s_col<=e_col):
        for i in range(s_col,e_col+1):
            matrix[s_row][i]=arr[index]
            index+=1
        s_row+=1
        for i in range(s_row,e_row+1):
            matrix[i][e_col]=arr[index]
            index+=1
        e_col-=1
        if(s_row<e_row):
            for i in range(e_col,s_col-1,-1):
                matrix[e_row][i]=arr[index]
                index+=1
            e_row-=1
        if(s_col<e_col):
            for i in range(e_row,s_row-1,-1):
                matrix[i][s_col]=arr[index]
                index+=1
            s_col+=1
    return matrix
rot = int(input())
M, N = map(int,input().split(","))
matrix_rows = []
for i in range(M):
    matrix_rows.append(list(map(int,input().split(","))))
rotated_matrix = rotateMatrix(matrix_rows,M,N,rot)
for i in rotated_matrix:
        print(",".join(str(j) for j in i))
            
