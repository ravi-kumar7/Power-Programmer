import java.util.HashMap; 
import java.util.Map; 

public class Code { 



static int min(int a, int b) { 
    return (a < b) ? a : b; 
    } 
  

static int min(int a, int b, int c) { 
    return min(min(a, b), c); 
    } 
  

static int max(int a, int b) {  
    return (a > b) ? a : b; 
    } 
  

static boolean find4Consecutive(int matrix[][], int ROW,int COL) { 
    HashMap<Integer, Integer> map = new HashMap<>();	
    //Traversing Horizontally
	for(int i=0; i<ROW;i++){
		for(int j=0;j<COL;j++)
		{
			int val = matrix[i][j];
			if(map.containsKey(val))
			  {
				  map.put(val,map.get(val)+1);
				  if(map.get(val)==4)
					  return true;				
			  }
		}
	}
	map.clear();
	// Travesing Vertically
	for(int i=0; i<COL;i++){
		for(int j=0;j<ROW;j++)
		{
			int val = matrix[j][i];
			if(map.containsKey(val))
			  {
				  map.put(val,map.get(val)+1);
				  if(map.get(val)==4)
					  return true;				
			  }
		}
	}
    // Traversing diagonally	
    // There will be ROW+COL-1 lines if we traverse the matrix diagonally from any side
    for (int line = 1; line <= (ROW + COL - 1); line++) { 
    HashMap<Integer, Integer> diagonal1 = new HashMap<>();	
    HashMap<Integer, Integer> diagonal2 = new HashMap<>();
	// Get row index of the first element in this 
    // line.The index is 0 for first ROW 
    // lines and line - COL for remaining lines 
    int start_row= max(0,line-COL);
	
	// Get column index of the first element in this 
    // line of output.The index is 0 for first ROW 
    // lines and line - ROW for remaining lines 
	int start_col = max(0, line - ROW); 
  
    // Get count of elements in this line. The count 
    // of elements is equal to minimum of line number, 
    // COL-start_col and ROW  
    int count = min(line, (COL - start_col), ROW); 
	
	int c_col= max(0,COL-line);
	if(count>=4)
	{
		  for (int j = 0; j < count; j++)
		  {
			  int val = matrix[min(ROW, line) - j - 1][start_col + j];
			  if(diagonal1.containsKey(val))
			  {
				  diagonal1.put(val,diagonal1.get(val)+1);
				  if(diagonal1.get(val)==4)
					  return true;
				
			  }
			  else
			  {
			      diagonal1.put(val,1);
			  }
			  val = matrix[start_row][c_col];
			  if(diagonal2.containsKey(val))
			  {
				  diagonal2.put(val,diagonal2.get(val)+1);
				  if(diagonal2.get(val)==4)
					  return true;
				
			  }	
			    else
			  {
			      diagonal2.put(val,1);
			  }
			  start_row+=1;
			  c_col+=1;
		  }
	}
	System.out.println("");
	
     
}
return false;
}
  
  
// Driver code 
public static void main(String[] args) { 
    int M[][] = { 
        {0,1,6,8,6,0},     {5,6,2,6,8,2},     {6,5,6,1,1,9}, 
        {1,6,6,1,4,0}, {6,3,2,3,4,0}, 
    }; 
	int ROW = 5; 
    int COL = 6; 
    System.out.println(find4Consecutive(M,ROW,COL)); 
} 
} 