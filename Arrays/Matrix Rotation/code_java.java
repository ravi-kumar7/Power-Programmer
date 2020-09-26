import java.util.*;

public class HelloWorld{

/*
  Matrix Rotation using Java.

 The idea to solve this problem is to first traverse the array spirally and storing elements in a array of size rows*columns, i.e. coverting a matrix into a straight line, at the end of each spiral loop we will rotate it either Anticlock wise or Clock wise.
 When all this is done, we will traverse the array and create a matrix out of it, traversing in a same fashion.
 
 Use the below Input to test it here (https://www.tutorialspoint.com/compile_java_online.php).
1
5,6
1,2,3,4,5,6
7,8,9,10,11,12
13,14,15,16,17,18
19,20,21,22,23,24
25,26,27,28,29,30
*/
static int[][] rotateMatrix(int[][] mat,int row, int col, int k){
    int arr[]=new int[row*col];
    int matrix[][] = new int[row][col];
    int s_row=0;
    int e_row=row-1;
    int s_col=0;
    int e_col=col-1;
    int index=0;
    int start_index=0;
    int end_index=0;
    Boolean anti_clock=true;
    while(s_row<=e_row && s_col<=e_col){
		// Move top-left to top-right (Horizontally)
        for(int i=s_col; i<e_col+1;i++){
            arr[index]=mat[s_row][i];
            index+=1;
		}
		// Move top-right to bottom-right (Vertically)
        s_row+=1;
        for(int i=s_row; i<e_row+1;i++){
            arr[index]=mat[i][e_col];
            index+=1;
		}
		// Move bottom-right to bottom-left (Horizontally)
        e_col-=1;
        if(s_row<=e_row){
            for(int i=e_col; i>s_col-1;i--){
                arr[index]=mat[e_row][i];
                index+=1;
			}
            e_row-=1;
		}
		// Move bottom-left to bottom-top (Vertically)
        if(s_col<=e_col){
            for(int i=e_row; i>s_row-1;i--){
                arr[index]=mat[i][s_col];
                index+=1;
				}
            s_col+=1;
		}
        end_index=index-1;
        if((end_index+1)-start_index>=4){
            if(anti_clock){  // shift anti-clock wise
                anti_clock=false;
                for(int i=0; i<k;i++){
                    int temp = arr[start_index];
                    for(int j=0; j<end_index;j++)
                        arr[j] = arr[j + 1];
                    arr[end_index]=temp;
				}
			}
            else{   // shift elements clock-wise
                anti_clock=true ;  
                for(int i=0; i<k;i++){
                    int temp = arr[end_index];
                    for(int j=end_index; j>start_index;j--)
                        arr[j] = arr[j-1];
                    arr[start_index]=temp;
				}
			}
		}
        start_index=index;
		
	}
    s_row=0;
    e_row=row-1;
    s_col=0;
    e_col=col-1;
    index=0;
    while(s_row<=e_row && s_col<=e_col){
        for(int i=s_col; i<e_col+1;i++){
            matrix[s_row][i]=arr[index];
            index+=1;
			}
        s_row+=1;
        for(int i=s_row; i<e_row+1;i++){
            matrix[i][e_col]=arr[index];
            index+=1;
			}
        e_col-=1;
        if(s_row<e_row){
            for(int i=e_col; i>s_col-1;i--){
                matrix[e_row][i]=arr[index];
                index+=1;
				}
            e_row-=1;
			}
        if(s_col<e_col){
            for(int i=e_row; i>s_row-1;i--){
                matrix[i][s_col]=arr[index];
                index+=1;
				}
            s_col+=1;
		  }
		}
    return matrix;
    }

    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
      int rot = sc.nextInt(); 
      System.out.println(sc.nextLine());
      String row_col[]= sc.nextLine().split(",");
        	int M =  Integer.parseInt(row_col[0]);
int N =  Integer.parseInt(row_col[1]);
int matrix[][]= new int[M][N];
for(int i=0;i<M;i++){
    String currentRow[] = sc.nextLine().split(",");
    for(int j=0;j<N;j++)
     matrix[i][j] = Integer.parseInt(currentRow[j]);
}
int rotated_matrix[][] = rotateMatrix(matrix,M,N,rot);

for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
     if(j<N-1)
     System.out.print(rotated_matrix[i][j] + ",");
     else
     System.out.print(rotated_matrix[i][j]+"");
    }
    System.out.println("");
}    
    }
}