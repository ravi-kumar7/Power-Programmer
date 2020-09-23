An M x N matrix of integers is given. Print the matrix after performing the following operations:

1) Starting from the outermost layer, rotate every alternate layer of the input anti-clockwise K times.

2) Starting from the second outermost layer rotate every alternate layer of the input clockwiseK times.

Input format: Read the input from the standard input stream. First line contains the number of rotations to be performed, K. Second line contains number of rows M and number of columns N separated by comma. The next M lines contains N numbers each separated by comma.

Output format: Print the resultant matrix to the standard output stream. Print each row in a new line where elements are separated by comma.

Note : Rotate the layer only if it is cyclic

Input:

1
5,6
1,2,3,4,5,6
7,8,9,10,11,12
13,14,15,16,17,18
19,20,21,22,23,24
25,26,27,28,29,30

1st outermost layer to be rotated anti-clockwise

2nd outermost layer to be rotated clockwise

Layer(15,16) not to be rotated as it is acyclic

Hence the output will be:

2,3,4,5,6,12

1,14,8,9,10,18

7,20,15,16,11,24

13,21,22,23,17,30

19,25,26,27,28,29

