int board[11][11];
bool isPossible(int n,int row,int col){
  for(int i=row-1;i>=0;i--){
    if(board[i][col]==1){
      return false;
    }
  }
  for(int i=row-1,j=col-1;i<=0,j>=0;i--,j--){
    if(board[i][j]==1){
      return false;
    }
  }
  for(int i=row-1,j=col+1;i>=0,j<n;i--,j++){
    if(board[i][j]==1){
      return false;
    }
  }
  return true;
}
void nQueenHelper(int n,int row){
  if(row==n){
    //print the output
    //return;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<board[i][j]<<" ";
      }
	  cout<<endl;
    }cout<<endl;
  }
   for(int j=0;j<n;j++){
	if(isPossible(n,row,j)){
      board[row][j]=1;
      nQueenHelper(n,row+1);
      board[row][j]=0;
    }  
   }
  return;
}

void placeNQueens(int n){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Print output as specified in the question
  */
	nQueenHelper(n,0);

}